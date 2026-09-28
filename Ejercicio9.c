#include <stdio.h>
int matriz [2][3][4];
int i;
int j;
int x;
int main()
{
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(x=0;x<4;x++){
            printf("\nIngresar el valor de la posicion[%d][%d][%d]:",i,j,x);
            scanf("%d",&matriz[i][j][x]);
                
            }
        }
    }

   
    return 0;
}
