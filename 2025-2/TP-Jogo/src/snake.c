#include "raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define LARGURA 660
#define ALTURA 660
#define STD_SIZE_X 40
#define STD_SIZE_Y 40
#define TEMPO 0.2
#define COOLDOWN 0.2
#define SNAKE_COLOR YELLOW
#define FOOD_COLOR BLUE

typedef struct Bordas{
    Rectangle pos;
}Bordas;

typedef struct Body{
    Rectangle pos;
    Color color;
    int direcao;
}Body;

typedef struct Food{
    Rectangle pos;
    Color color;
}Food;

typedef struct Jogo{
    Body body;
    Food food;
    Bordas bordas[4];
    double tempo;
    double cooldown;
}Jogo;

void IniciaBody(Jogo *j);
void IniciaBordas(Jogo *j);
void IniciaFood(Jogo *j);
void IniciaJogo(Jogo *j);
void DesenhaBody(Jogo *j);
void DesenhaFood(Jogo *j);
void DesenhaBordas(Jogo *j);
void DesenhaJogo(Jogo *j);
void AtualizaDirecao(Jogo *j);
void AtualizaPosBody(Jogo *j);
void AtualizaRodada(Jogo *j);
int ColisaoFood(Jogo *j);

int main(){
    Jogo jogo;
    int gameOver = 1;

    //Cria a janela;
    InitWindow(LARGURA, ALTURA, "Snake Game");
    SetTargetFPS(60);
    srand(time(NULL));
    
    IniciaJogo(&jogo);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        if (gameOver){
            DesenhaJogo(&jogo);
            AtualizaRodada(&jogo);
            if (ColisaoFood(&jogo)){
                gameOver = 0;
            }
        } else {
            DrawText("Agora é a sua vez!", 150, 200, 40, WHITE);
            DrawText("Continue", 265, 400, 30, WHITE);
            if (IsKeyPressed(KEY_ENTER)){
                IniciaJogo(&jogo);
                gameOver = 1;
            }
        }
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

void IniciaBody(Jogo *j){
    j->body.pos = (Rectangle) {LARGURA/2 - STD_SIZE_X, ALTURA - STD_SIZE_Y -10, STD_SIZE_X, STD_SIZE_Y};
    j->body.direcao = 0;
    j->body.color = SNAKE_COLOR;
    }

void IniciaBordas(Jogo *j){
    //Borda de cima
    j->bordas[0].pos = (Rectangle) {0, 0, LARGURA, 10};
    //Borda da direita
    j->bordas[1].pos = (Rectangle) {LARGURA - 10, 0, 10, ALTURA};
    //Borda de baixo
    j->bordas[2].pos = (Rectangle) {0, ALTURA - 10, LARGURA, 10};
    //Borda da esquerda
    j->bordas[3].pos = (Rectangle) {0, 0, 10, ALTURA};
}

void IniciaFood(Jogo *j){
    j->food.pos = (Rectangle) {(float)(rand() % ((ALTURA - 20) / STD_SIZE_Y) * STD_SIZE_Y + 10), (float)(rand() % ((ALTURA - 20) / STD_SIZE_Y) * STD_SIZE_Y + 10), STD_SIZE_X, STD_SIZE_Y};
    j->food.color = FOOD_COLOR;
}

void IniciaJogo(Jogo *j){
    IniciaBordas(j);
    IniciaBody(j);
    IniciaFood(j);
    j->tempo = GetTime();
}

void DesenhaBody(Jogo *j){
    DrawRectangleRec(j->body.pos, j->body.color);
}

void DesenhaFood(Jogo *j){
    DrawRectangleRec(j->food.pos, j->food.color);
}

void DesenhaBordas(Jogo *j){
    //Desenha as barreiras nas bordas
    for (int i = 0; i < 4; i++){
        DrawRectangleRec(j->bordas[i].pos, LIGHTGRAY);
    }
}

void DesenhaJogo(Jogo *j){
    DesenhaBordas(j);
    DesenhaBody(j);
    DesenhaFood(j);
}

void AtualizaDirecao(Jogo *j){
    //Atualiza para qual direção a cobra vai  
    if(IsKeyDown(KEY_UP) && j->body.direcao != 2 && GetTime() - j->cooldown > COOLDOWN){
        j->body.direcao = 0;
        j->cooldown = GetTime();
    }
    if(IsKeyDown(KEY_RIGHT) && j->body.direcao != 3 && GetTime() - j->cooldown > COOLDOWN){
        j->body.direcao = 1;
        j->cooldown = GetTime();
    }
    if(IsKeyDown(KEY_DOWN) && j->body.direcao != 0 && GetTime() - j->cooldown > COOLDOWN){
        j->body.direcao = 2;
        j->cooldown = GetTime();
    }
    if(IsKeyDown(KEY_LEFT) && j->body.direcao != 1 && GetTime() - j->cooldown > COOLDOWN){
        j->body.direcao = 3;
        j->cooldown = GetTime();
    }
}

void AtualizaPosBody(Jogo *j){

    if (j->body.direcao == 0){
        j->body.pos.y -= STD_SIZE_Y;
    }
    if (j->body.direcao == 1){
        j->body.pos.x += STD_SIZE_X;
    }
    if (j->body.direcao == 2){
        j->body.pos.y += STD_SIZE_Y;
    }
    if (j->body.direcao == 3){
        j->body.pos.x -= STD_SIZE_X;
    }
}

void AtualizaRodada(Jogo *j){
    AtualizaDirecao(j);
    if (GetTime() - j->tempo > TEMPO){
        AtualizaPosBody(j);
        j->tempo = GetTime();
        j->cooldown = COOLDOWN;
    }
}

int ColisaoFood(Jogo *j){
    if (CheckCollisionRecs(j->body.pos, j->food.pos)){
        return 1;
    }
    return 0;
}
