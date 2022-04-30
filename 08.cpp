#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float dmaior, dmenor, conta;
	
	printf("Informe o valor da diagonal maior:");
	scanf("%f", &dmaior);
	printf("Informe o valor da diagonal menor:");
	scanf("%f", &dmenor);
	
	conta = (dmaior * dmenor) / 2;
	printf("%s %f", "A area do losango e de:", conta);
	
	system("pause");
	return 0;
}
