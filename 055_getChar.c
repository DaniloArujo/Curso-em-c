#include <stdio.h>
#include <stdlib.h>

int main(void){

    char linha[100];
    int i = 0;

    do{
     linha[i] = getchar();
      ++i;

    } while (i != '\n' );

    linha[i-1] ='\0';

    printf("%s",linha);

    system("pause");
    return 0;
}