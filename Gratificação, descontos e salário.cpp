#include <stdio.h>
#include <locale.h>

int main (void)
{
	float SB,GR,IMP,SL; //vari�veis.
	setlocale (LC_ALL, ""); //idioma portugu�s.
	printf ("Entre com o sal�rio base: ");
	scanf ("%f",&SB); //
	GR = SB * 0.05;

	IMP = SB * 0.07;
	SL = SB + GR - IMP;
	printf ("Gratifica��o: %.2f\n",GR); // mostrar mensagem e qual valor da vari�vel, \n - pular para linha da baixo
	printf ("Imposto: %.2f\n", IMP); //mostrar mensagem e valor da vari�vel, \n - pular para linha da baixo
	printf ("Sal�rio L�quido: %.2f",SL); //mostrar mensagem, .2 - casas depois da v�rgula, \n - pular para linha da baixo
	return 1;
}
