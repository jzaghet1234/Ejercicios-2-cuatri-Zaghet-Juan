#include <stdio.h>

int main() {
    int vector1[5];
    int j;
    int vector2[5];
    int i;
    int suma1=0;
    int suma2=0;
    printf("Ingrese 5 numeros:\n");
    for(j = 0; j < 5; j++) {
        printf("Dato %d: ", j + 1);
        scanf("%d", &vector1[j]);
    }
    for(j = 0; j < 5; j++) {
     suma1= suma1+ vector1[j];
     }
     printf("La suma es: %d\n",suma1);
    printf("Ingrese 5 numeros:\n");
    for(i = 0; i < 5; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }
    for(i = 0; i < 5; i++){
        suma2= suma2+ vector2[i];
    }
    printf("La suma es: %d\n",suma2);
    if(suma1>suma2){
        printf("El primer vector es mayor");
    }else
        printf("El segundo vector es mayor");
    
    return 0;
}
