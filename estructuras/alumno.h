typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    char email[50];
} eAlumno;

void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);
void ordenarPorNombre(eAlumno[], int);
void alumnoNombreConP(eAlumno[], int);

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();


