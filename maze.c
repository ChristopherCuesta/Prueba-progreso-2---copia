#include <stdio.h>
#include "player.h"

int laberinto[5][5]={
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,1,0}
};

void imprimirLaberinto(int posx, int posy) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(posx==i && posy==j){  
            printf("x ");
            }else{
            printf("%c ", laberinto[i][j]);   
            }
            printf("%c ", laberinto[i][j]);
        }
        printf("\n"); 
    }
}


int verificarMov(int fila, int columna) {
    if (fila >= 0 && fila < 5 && columna >= 0 && columna < 5 && laberinto[fila][columna] == 0) { 
        //comprueba que el movimiento no se haga fuera de la matriz
        return 1; 
    }else{ 
    return 0;
    }
}

