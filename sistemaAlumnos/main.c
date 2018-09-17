#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 2

int main()
{
     int legajos[T];
     char nombres [T][21]; //matriz de 10 filas por 21 caracteres, 10x21
     int notas[T];
     float alturas[T];
     int opcion;

     cargarAlumnos(legajos, nombres, notas, alturas, T);

     do{

     printf("1- Ordenar nombres alfabeticamente\n");
     printf("2- Mostrar alumnos cuyo nombre empieza con P\n"),
     printf("3- Alumno/os con mas nota\n");
     printf("4- Modificar nota ingresando legajo\n");
     printf("5- Salir\n");
     opcion = pedirEntero("Seleccione una opcion: ");

     switch(opcion){

         case 1:
            ordenarAlfabeticamente(legajos, nombres, notas, alturas, T);
            break;
         case 2:
            alumnoNombreConP(legajos, nombres, notas, alturas, T);
            break;
         case 3:
         case 4:
         case 5:
             opcion = 5;
             break;
         default:
            printf("Ingrese opcion valida");
     }

     system("cls"); //limpia pantalla
     system("pause"); // pausa la pantalla

     }while(opcion != 5);

    return 0;
}


