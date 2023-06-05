#include <stdio.h>
#include "maze.h"
int numerMov;
int posx = 0;
int posy = 0;

void moverPlayer(int fila, int columna){
    int verifiMovimiento=0;
    char mov;
    printf(" Ingrese el movimiento que quieres realizar\n");
    printf("W. Arriba\nA. Izquierda\nS. Abajo\nD. Derecha\n");
    scanf("%c",&mov);
    switch (mov)
    {
    case 'W':
    case 'w':
        if (verifiMovimiento = verificarMov(fila-1, columna) == 1)
        {
            posx--;
            imprimirLaberinto(posx, posy);
            numerMov++;
        }else {
            printf("Movimiento invalido\n");
        }
        break;
    case 'A':
    case 'a':
        if (verifiMovimiento = verificarMov(fila, columna -1))
        {
            posy--;
            imprimirLaberinto(posx, posy);
            numerMov++;
        }else {
            printf("Movimiento invalido\n");
        }
        break;
    case 'S':
    case 's':
        if (verifiMovimiento = verificarMov(fila-1, columna) == 1)
        {
            posx++;
            imprimirLaberinto(posx, posy);
            numerMov++;
        }else {
            printf("Movimiento invalido\n");
        }
        break;
    case 'D':
    case 'd':
        if (verifiMovimiento = verificarMov(fila, columna -1))
        {
            posy++;
            imprimirLaberinto(posx, posy);
            numerMov++;
        }else {
            printf("Movimiento invalido\n");
        }
        break;
    default:

        break;
    }

}