#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    char año[30];
};

int main() {

    struct Alumno alumno1;

    printf("Ingrese el nombre:\n ");
    scanf("%s", alumno1.nombre);

    printf("Ingrese la edad:\n ");
    scanf("%d", &alumno1.edad);

    printf("Ingrese el año:\n ");
    scanf("%s", &alumno1.año);

    printf("Datos del alumno\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Edad: %d\n", alumno1.edad);
    printf("Año: %s\n", alumno1.año);

    return 0;
}
