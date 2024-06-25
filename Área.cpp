#include <stdio.h>
#include <locale.h>

int main (void)

{
	float BASE,ALTURA,AREA;
	setlocale (LC_ALL,""); //idioma portugues
	printf ("Qual a base do seu terreno? ");
	scanf ("%f", &BASE);
	printf ("Qual a altura do seu terreno? ");
	scanf ("%f",&ALTURA);
	AREA = BASE * ALTURA/2;
	printf ("A área do seu  terreno é: %.2f\n",AREA);
	return 1;
}
