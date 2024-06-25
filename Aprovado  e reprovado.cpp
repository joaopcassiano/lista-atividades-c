#include <stdio.h>
#include <locale.h>

int main (void)

{
	float N1, N2, M;
	
	setlocale (LC_ALL,"");
	
	printf ("Qual foi sua primeira nota? ");
	scanf ("%f", &N1);
	printf ("Qual foi sua segunda nota? ");
	scanf ("%f", &N2);
	
	M = (N1+N2)/2;
	
	if (M>=7)
	
		printf ("Média do aluno: %.2f\n APROVADO",M);
		
	else
		printf ("Média do aluno: %.2f\n REPROVADO",M);
	return 1;
}
