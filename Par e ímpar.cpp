#include <stdio.h>
#include <locale.h>

int main (void)

{
	int N, R;
	
	setlocale (LC_ALL,"");
	
	printf ("Insira um n�mero: ");
	scanf ("%i", &N);
	
	R= N % 2;
	
	if (N==R)
	
		printf ("O n�mero %i � par.",N);
	
	
	else
		printf ("O n�mero %i � �mpar.",R); 
		
	return 1;
}
