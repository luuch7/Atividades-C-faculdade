#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float bmenor, bmaior, alt, conta;
	
	printf("Informe o valor da base maior do trapezio:");
	scanf("%f", &bmaior);
	printf("Informe o valor da base menor do trapezio:");
	scanf("%f", &bmenor);
	printf("Informe a altura do trapezio:");
	scanf("%f", &alt);
	
	conta = ((bmaior + bmenor) * alt) / 2;
	printf("%s %f", "A area do trapezio e de:", conta);
	

	system("pause");
	return 0;
	
}
