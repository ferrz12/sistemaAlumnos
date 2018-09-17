#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

void mostrarAlumno(eAlumno unAlumno)
{
    printf("%d--%s--%f--%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota);
}

eAlumno cargarAlumno()
{

    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin),
           gets(miAlumno.nombre);

    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);


    return miAlumno;
}

void cargarListadoDeAlumnos(eAlumno listado[], int tam)
{

    int i;
    for(i = 0; i < tam; i++)
    {
        listado[i] = cargarAlumno();
    }
}
void mostrarListadoDeAlumnos(eAlumno listado[], int tam)
{

    int i;
    for(i = 0; i < tam; i++)
    {
        mostrarAlumno(listado[i]);
    }
}

void ordenarPorNombre(eAlumno listado[], int tam)
{
    int i;
    int j;

    eAlumno auxAlumno;

    for(i = 0; i < tam - 1; i++)
    {
        for(j = i + 1; j < tam; j++){
            if(strcmp(listado[i].nombre, listado[j].nombre) > 0){
                auxAlumno=listado[i];
                listado[i]=listado[j];
                listado[j]=auxAlumno;
            }
        }
    }

     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura");
     mostrarListadoDeAlumnos(listado, tam);
     system("pause");

}

void alumnoNombreConP(eAlumno [], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(listado[0].nombre == 'p'){
            mostrarListadoDeAlumnos(listado, tam);
        }
    }
}


