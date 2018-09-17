#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
    int i;
    for(i = 0; i < cantidadDeElementos ; i++)
     {
            printf("Ingrese legajo : ");
            scanf("%d", &legajos[i]);
            printf("Ingrese nombre : ");
            fflush(stdin);
            gets(nombres[i]); //solo lee la fila, si quiero con columnas seria [i][j]
            printf("Ingrese nota : ");
            scanf("%d", &notas[i]);
            printf("Ingrese altura : ");
            scanf("%f", &alturas[i]);

            printf("---------------\n");
     }
}

void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
     int i;
     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura ");
     for(i = 0; i < cantidadDeElementos ; i++){
        printf("%4d %20s %4d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
     }
}


/** \brief Pide un numero al usuario con o sin mensaje y lo devuelve
 *
 * \param texto [] texto Recibe una cadena de caracteres en forma de un vector de char
 * \return Retorna el valor
 *
 */


int pedirEntero(char texto[]){

    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}

void ordenarAlfabeticamente(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
    int i;
    int j;
    char auxString[100]; //va a ordenar un solo nombre a la vez
    int auxInt;
    float auxFloat;

    for(i = 0; i < cantidadDeElementos - 1; i++)
    {
        for(j = i + 1; j < cantidadDeElementos; j++){
            if(strcmp(nombres[i], nombres[j]) > 0){

                strcpy(auxString, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxString);

                auxInt = legajos[i];
                legajos[j] = legajos[i];
                legajos[j] = auxInt;

                auxInt = notas[i];
                notas[j] = notas[i];
                notas[j] = auxInt;

                auxFloat = alturas[i];
                alturas[j] = alturas[i];
                alturas[j] = auxFloat;

            }
        }
    }

     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura");
     for(i = 0; i < cantidadDeElementos; i++)
     {
        printf("%4d %20s %4d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
     }

     system("pause");

}

void alumnoNombreConP(int legajos[], char nombres[][21], int notas[], float alturas[], int cantidadDeElementos)
{
    int i;
    for(i = 0; i < cantidadDeElementos; i++){
        if(nombres[i][0] == 'p')
        {
            printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura");
            printf("%4d %20s %4d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
        }
    }



    system("pause");

}

