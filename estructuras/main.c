#include <stdio.h>
#include <stdlib.h>
#define T 3

typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
} eAlumno;

void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();

int main()
{

    eAlumno listadoMain[T];

    cargarListadoDeAlumnos(listadoMain, T);
    mostrarListadoDeAlumnos(listadoMain, T);


    //eAlumno miAlumnoMain;

    //miAlumnoMain = cargarAlumno();

    // eAlumno otroAlumno;

    // printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.altura, miAlumno.nota);

    // otroAlumno = miAlumno; //dupllica los valores al ser por valor


    //mostrarAlumno(miAlumnoMain);

    return 0;
}

void mostrarAlumno(eAlumno unAlumno){
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

void cargarListadoDeAlumnos(eAlumno listado[], int tam){

    int i;
    for(i = 0; i < tam; i++){
        listado[i] = cargarAlumno();
    }
}
void mostrarListadoDeAlumnos(eAlumno listado[], int tam){

    int i;
    for(i = 0; i < tam; i++){
        mostrarAlumno(listado[i]);
    }
}

