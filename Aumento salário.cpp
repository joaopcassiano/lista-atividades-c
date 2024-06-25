#include <stdio.h>
#include <locale.h>

int main(void)
{
	float S,NS;
	setlocale(LC_ALL, "");//definir idioma
	printf("Salario atual: ");
	scanf("%f",&S);
	NS = S*1.25;
	printf("O salario e: %.2f",NS);
	return 1;
}
