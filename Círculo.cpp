#include <stdio.h>
#include <locale.h>

int main (void)

{
	float AREA,RAIO;
	setlocale (LC_ALL, "");
	printf ("Informe o raio? ");
	scanf ("%f",&RAIO);
	AREA = RAIO * RAIO * 3.1416;
	printf ("A área do circulo é: %.2f",AREA);	
	
	return 1;
}
