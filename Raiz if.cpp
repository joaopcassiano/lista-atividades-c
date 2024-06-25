#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)

{ 

int N;
float R;

setlocale (LC_ALL,"");

printf ("Entre com um número inteiro: ");
scanf ("%i", &N);

if (N>=0)
{
	R = sqrt(N);
	printf ("Raiz = %.2f\n",R);
}

else
	printf ("Não existe raiz de número negativo.\n");

return 1;

}
