#include <stdio.h>
#include <locale.h>
int main(void)

{
	float N1,N2,N3,MEDIA;
	setlocale(LC_ALL,""); //definir idioma
	printf("Qual sua primeira nota: ");
	scanf ("%f",&N1);
	printf("Qual sua segunda nota: ");
	scanf ("%f",&N2);
	printf("Qual sua terceira nota; ");
	scanf ("%f",&N3);
	MEDIA = (N1+N2+N3)/3;
	printf("A media é: %.2f",MEDIA);
	return 1;
}
