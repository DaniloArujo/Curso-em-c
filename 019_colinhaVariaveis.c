#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

/* colinha vari�veis*/

int main(){
	
/*	long dobra  valor de bytes */
/*	const n�o pode seraltrada*/
/*	unsignet sem sinal*/	
	
	char variavelchar ='a';
	printf("%c\n",variavelchar);
	scanf("%c\n",&variavelchar);
	printf("%c\n",variavelchar);

	bool variavelbool = true;
	printf("%i\n",variavelbool);
	
	int variavelint = 10;
	printf("%i\n",variavelint);
	scanf("%i",&variavelint);
	
	float variavelfloat = 10.10;
	printf("%f\n",variavelfloat);
	scanf("%f",&variavelfloat);
	printf("%f\n",variavelfloat);
	
	double variaveldouble = 10.10;
	printf("%f\n",variaveldouble);
	scanf("%f",&variaveldouble);
	printf("%f\n",variaveldouble);
	
	system("pause");
	return 0;
}
