#include <stdio.h>
#include <locale.h>

int main (void)

{
	float X,Y,Z;
	
	setlocale (LC_ALL,"");
	
	printf ("Quais sao o tamanho dos lados? \n");
	printf ("1º lado: ");
	scanf  ("%f", &X);
	printf ("2º lado: ");
	scanf  ("%f", &Y);
	printf ("3º lado: ");
	scanf  ("%f", &Z);
	
	if (X < ( Z + Y)  && Z < ( Y + X ) && Y < ( X + Z))
	{
		
			if (X==Y && Y==Z)
			printf ("O triângulo é equilátero.");
			else
				if (X==Y || X ==Z || Z==Y)
				printf ("O triângulo é isósceles."); 	
				else
				printf ("O triângulo é escaleno.");
	}
	else
		printf ("O comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados");		
	
	
	
	return 1;
}
