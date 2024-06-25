#include <stdio.h>
#include <locale.h>

int main (void)

{
	int I,SI=0,NI=0;
	
	setlocale (LC_ALL,"");
	
	do 
	{
		printf ("Idade: ");
		scanf ("%i", &I);
		SI = SI + I;
		if (I!=0)
	 		NI++;
	 	
	}	while (I!=0);
	
	printf ("Média das idades: %.2f", (float)SI/NI);

	
	return 1;
}
