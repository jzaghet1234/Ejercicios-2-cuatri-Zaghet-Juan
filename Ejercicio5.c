#include <stdio.h>

int main() {
    int vector[10];
    int i;
    int j;
    int temporal;
    int suma = 0;
    float promedio;

    printf("Ingrese 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vector[i] < vector[j]) {
                temporal = vector[i];
                vector[i] = vector[j];
                vector[j] = temporal;
            }
        }
    }

    printf("\nVector ordenado de mayor a menor:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

   
    for(i = 0; i < 10; i++) {
        suma += vector[i];
    }

    promedio = suma / 10;

    printf("\n\nSuma: %d", suma);
    printf("\nPromedio: %.2f", promedio);

    return 0;
}
