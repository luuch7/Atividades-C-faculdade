#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int peso, conta;
	
	printf("Informe o seu peso em kl:");
	scanf("%d", &peso);
	
	conta = peso * 100;
	printf("%s %d", "O seu peso em gramas e de:", conta);
	
	system("pause");
	return 0;
}
