#include <stdio.h>
#include <locale.h>

int main (void)
{
	float SB,GR,IMP,SL; //variáveis.
	setlocale (LC_ALL, ""); //idioma português.
	printf ("Entre com o salário base: ");
	scanf ("%f",&SB); //
	GR = SB * 0.05;

	IMP = SB * 0.07;
	SL = SB + GR - IMP;
	printf ("Gratificação: %.2f\n",GR); // mostrar mensagem e qual valor da variável, \n - pular para linha da baixo
	printf ("Imposto: %.2f\n", IMP); //mostrar mensagem e valor da variável, \n - pular para linha da baixo
	printf ("Salário Líquido: %.2f",SL); //mostrar mensagem, .2 - casas depois da vírgula, \n - pular para linha da baixo
	return 1;
}
