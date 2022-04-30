#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	float umnot, donot, conta;
	
	printf("Insira a primeira nota:");
	scanf("%f", &umnot);
	printf("Insira a segunda nota:");
	scanf("%f", &donot);
	
	conta = (umnot * 2 + donot * 3) / 5;
	printf("%s %f","A media e:", conta);
	
	system("pause");
	return 0;
	
}
