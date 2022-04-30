#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int bas, alt, conta;
	
	printf("Informe o valor da base do triangulo:");
	scanf("%d", &bas);
	printf("Informe o valor da altura do triangulo:");
	scanf("%d", &alt);
	
	conta = (bas * alt) / 2;
	
	printf("%s %d", "O resultado e de:", conta);
	
	system("pause");
	return 0;
}
