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
    char aux[21];
    int legajoAux;
    int notaAux;
    int alturaAux;

    for(i = 0; i < cantidadDeElementos - 1; i++)
    {
        for(j = i + 1; j < cantidadDeElementos; j++)
        {
            if(nombres[j][0] < nombres [i][0])
            {
                legajoAux = legajos[j];
                legajos[j] = legajos[i];
                legajos[i] = legajoAux;

                strcpy(aux, nombres[j]);
                strcpy(nombres[j], nombres[i]);
                strcpy(nombres[i], aux);

                notaAux = notas[j];
                notas[j] = notas[i];
                notas[i]= notaAux;

                alturaAux = alturas[j];
                alturas[j] = alturas[i];
                alturas[i]= alturaAux;
            }
        }

    }

     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura ");
     for(i = 0; i < cantidadDeElementos ; i++)
     {
        printf("%4d %20s %4d %5f \n", legajos[i], nombres[i], notas[i], alturas[i]);
     }

}

