#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float sala, imp, final, grat;
	
	printf("Informe o valor do salario base:");
	scanf("%f", &sala);
	
	imp = sala - (0.93 * sala);
	grat = sala - (0.95 * sala);
	final = sala - imp + grat;
	
	printf("%s %f", "O salario a receber e de:", final);
	
	system("pause");
	return 0;
}
