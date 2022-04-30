#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float peso, seq, sev;
	
	printf("Informe o seu peso:");
	scanf("%f", &peso);
	
	seq = peso + (0.15 * peso);
	sev = peso + (0.20 * peso);
	
	printf("%s %f", "Se a pessoa engordar 15% o seu peso:", seq);
	printf("%s %f", "Se a pessoa engordar 20% o seu peso:", sev);
	
	system("pause");
	return 0;
}
