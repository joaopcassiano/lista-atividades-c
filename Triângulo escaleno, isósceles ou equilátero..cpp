#include <stdio.h>
#include <locale.h>

int main (void)

{
	float X,Y,Z;
	
	setlocale (LC_ALL,"");
	
	printf ("Quais sao o tamanho dos lados? \n");
	printf ("1� lado: ");
	scanf  ("%f", &X);
	printf ("2� lado: ");
	scanf  ("%f", &Y);
	printf ("3� lado: ");
	scanf  ("%f", &Z);
	
	if (X < ( Z + Y)  && Z < ( Y + X ) && Y < ( X + Z))
	{
		
			if (X==Y && Y==Z)
			printf ("O tri�ngulo � equil�tero.");
			else
				if (X==Y || X ==Z || Z==Y)
				printf ("O tri�ngulo � is�sceles."); 	
				else
				printf ("O tri�ngulo � escaleno.");
	}
	else
		printf ("O comprimento de cada lado de um tri�ngulo � menor que a soma dos outros dois lados");		
	
	
	
	return 1;
}
