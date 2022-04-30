#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	
	float raio, comp, area, vol;
	
	printf("Informe o raio da esfera:");
	scanf("%f", &raio);
	
	comp = 2 * 3.14 * raio;
	area = 4 * 3.14 * pow(raio, 2);
	vol = 4 * 3.14 * pow(raio, 3) / 3;
	
	printf("%s %f", "O comprimento da esfera e de:", comp);
	printf("%s %f", "A area da esfera e de:", area);
	printf("%s %f", "O volume da esfera e de:", vol);
	
	system("pause");
	return 0;
}
