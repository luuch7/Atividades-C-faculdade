#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float sala, porc, aume, total;
	
	printf("Informe o seu salario:");
	scanf("%f", &sala);
	printf("Informe o percentual de aumento:");
	scanf("%f", &porc);
	
	aume = (porc / 100) * sala;
	total = sala + aume;
	
	printf("%s %f", "O valor do aumento e de:", aume);
	printf("%s %f", "O salario total e de:", total);
	
	system("pause");
	return 0;
}
