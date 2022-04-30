#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int nasc, a, ano, messes, dias;
	
	printf("Informe o seu ano de nascimento:");
	scanf("%d", &nasc);
	printf("Informe o ano atual:");
	scanf("%d", &a);
	
	ano = a - nasc;
	messes = ano * 12;
	dias = ano * 365;
	
	printf("%s %d", "A sua idade em anos e:", ano);
	printf("%s %d", "A sua idade em messes e:", messes);
	printf("%s %d", "A sua idade em dias e:", dias);
	
	system("pause");
	return 0;
}
