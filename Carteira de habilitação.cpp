#include <stdio.h>
#include <locale.h>

int main (void)

{
	int I,X;
	
	setlocale (LC_ALL,"");
	
	printf ("Qual sua idade? ");
	scanf ("%i", &I);
	
	if (I<18)
	{
		printf ("Você não pode tirar carteira.\n");
		X= 18 - I;
		printf ("Ainda faltam, %i ano(s)", X);
	}
	else
		printf ("Você pode tirar carteira.");

	return 1;
}
