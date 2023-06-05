#include <stdio.h>
#include "maze.h"
#include "player.h"


int main(){
    int columna = 5;
    int fila = 5;
    int opc = 0;
    printf("BIENVENIDO AL JUEGO DEL LABERINTO\n");
    do
    {
        printf("1. Jugar\n");
        printf("2. Creditos\n");
        printf("3. Salir\n");
        printf("Seleccione alguna opcion: \n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            moverPlayer(fila, columna);
            
            
            
            break;
        case 2:
            printf("Autor: Christopher Cuesta\n");
            printf("ID BANNER: A00107934");
            break;
        case 3:
            printf("Saliendo del programa\n");
            break;
        default:
            printf ("La opcion ingresada esta incorrecta\n");
            break;
        }
    } while (opc != 3);
    
}