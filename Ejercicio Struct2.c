#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    char año[30];
};

int main() {

    struct Alumno alumnos[3];

    for (int i = 0; i < 3; i++) {

    printf("\nIngrese el nombre del alumno %d: \n", i + 1);
        scanf("%s", alumnos[i].nombre);

        printf("Ingrese la edad: \n");
        scanf("%d", &alumnos[i].edad);

        printf("Ingrese el año:\n ");
        scanf("%s", alumnos[i].año);
    }

    printf("DATOS DE LOS ALUMNOS\n");

    for (int i = 0; i < 3; i++) {

        printf("Alumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Año: %s\n", alumnos[i].año);
    }

    return 0;
}
