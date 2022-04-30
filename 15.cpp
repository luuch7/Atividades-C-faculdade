#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	float valor, juros, rend, total;
	
	printf("Informe o valor do deposito:");
	scanf("%f", &valor);
	printf("Informe a taxa do juros em porcentagem:");
	scanf("%f", &juros);
	
	rend = (juros / 100) * valor;
	total = rend + valor;
	
	printf("%s %f", "O seu rendimento e de:", rend);
	printf("%s %f", "O valor total e de:", total);
	
	system("pause");
	return 0;
}
