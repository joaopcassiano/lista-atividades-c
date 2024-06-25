#include <stdio.h>
#include <locale.h>

int main (void)

{
	int N, R;
	
	setlocale (LC_ALL,"");
	
	printf ("Insira um número: ");
	scanf ("%i", &N);
	
	R= N % 2;
	
	if (N==R)
	
		printf ("O número %i é par.",N);
	
	
	else
		printf ("O número %i é ímpar.",R); 
		
	return 1;
}
