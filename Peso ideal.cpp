#include <stdio.h>
#include <locale.h>

int main (void)

{
	float H, S, PI;
	
	setlocale (LC_ALL,"");

	printf ("Qual seu sexo? \n");
	printf ("1 - Feminino \n");
	printf ("2 - Masculino \n");
	printf ("\n");	
	scanf ("%f", &S);
	printf ("\n");
	
	if (S==1)
		{
			printf ("Qual sua altura? ");
			scanf ("%f", &H);
			PI = 72.7*H-58;
			printf ("Seu peso ideal é: %2.f", PI);
		}
	else
		{
			
			printf ("Qual sua altura? ");
			scanf ("%f", &H);
			PI= 62.1 * H - 44.7;
			printf ("Seu peso ideal é: %2.f", PI);
		}	
	return 1;
}
