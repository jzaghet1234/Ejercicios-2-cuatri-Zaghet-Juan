#include <stdio.h>

int main() {
    int vector[5];
    int j;
    int suma=0;
    int promedio;
    printf("Ingrese 5 numeros:\n");
    for (j = 0; j < 5; j++) {
        printf("Dato %d: ", j + 1);
        scanf("%d", &vector[j]);
    }
    printf("\nDatos del vector:\n");
    for (j = 0; j < 5; j++) {
        printf("Dato %d = %d\n", j + 1, vector[j]);
    }
    for (j=0; j<5; j++){
        suma = suma + vector[j];
    }
    printf("La suma total es: %d\n",suma);
    for(j = 0; j < 5; j++){
  promedio = suma/5;
    }
    printf("El promedio es:%d\n", promedio);
    
    return 0;
}
