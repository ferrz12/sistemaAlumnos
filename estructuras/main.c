#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"
#define T 3


int main()
{

    eAlumno listadoMain[T];

    cargarListadoDeAlumnos(listadoMain, T);
    ordenarPorNombre(listadoMain, T);

    //mostrarListadoDeAlumnos(listadoMain, T);

    //eAlumno miAlumnoMain;

    //miAlumnoMain = cargarAlumno();

    // eAlumno otroAlumno;

    // printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

    // otroAlumno = miAlumno; //dupllica los valores al ser por valor


    //mostrarAlumno(miAlumnoMain);

    return 0;
}

