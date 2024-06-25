#include <stdio.h>
#include <locale.h>

int main(void)

{
	int N1,N2,S;
	setlocale(LC_ALL,"");
	printf("Qual o primeiro valor: ");
	scanf("%i",&N1);
	printf("Qual o segundo valor: ");
	scanf("%i",&N2);
	S = N1+N2;
	printf("A soma dos valores é: %i",S);
	return 1;
}
