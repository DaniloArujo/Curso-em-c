#include <stdio.h>
#include <stdio.h>

void main(void){

    int matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    funcaoPrint(matriz);
    system("pause");

}

//deve-se colocar as dois colchetes indicando a matriz sendo que a segunda deve receber um numero delimitador
void funcaoPrint(int x[3][3]){
    int i, j;

        for(i=0; i<3; i++){
            for(j=0; j<3;j++){
                printf("%i",x[i][j]);
            }
        printf("\n");
    }
}