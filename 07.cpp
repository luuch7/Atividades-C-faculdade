#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int lad, conta;
	
	printf("Informe a altura do quadrado:");
	scanf("%d", &lad);
	
	conta = lad * lad;
	printf("%s %d", "A o resultado da area do quadrado e de:", conta);
	
	system("pause");
	return 0;
}
