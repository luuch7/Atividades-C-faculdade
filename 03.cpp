#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float sala, vend, conta, comi, porc;
	
	printf("Informe o seu salario: ");
	scanf("%f", &sala);
	printf("Informe o valor de suas vendas:");
	scanf("%f", &vend);
	
	comi = 0.04 * vend;
	conta = sala + comi;
	
	
	printf("%s %f", "O salario final e de:", conta);
	
	system("pause");
	return 0;
	
}

