#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	
	float prec, conta;
	
	printf("Informe o preco do produto:");
	scanf("%f", &prec);
	
	conta = prec - (prec * 10/100);

	printf("%s %f","O preco do produto com o desconto de 10% e de:", conta);
	
	system("pause");
	return 0;
}
