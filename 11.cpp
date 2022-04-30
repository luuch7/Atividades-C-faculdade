#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	
	float raio, conta;
	
	printf("Informe a area do circulo:");
	scanf("%f", &raio);
	
	conta = 3.14 * pow(raio, 2);
	printf("%s %f", "A area do circulo e:", conta);
	
	system("pause");
	return 0;
}
