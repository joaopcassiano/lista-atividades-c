#include <stdio.h>
#include <locale.h>

int main (void)

{

int NO; //n�mero de ovos
int D; // duzias
int U; // unidades de ovos soltos

setlocale(LC_ALL,""); // idioma portugu�s

printf ("Quantos ovos voc� colheu? "); // mensagem
scanf ("%i", &NO); // guardar informa��o na vari�vel

D = NO / 12; // f�rmula
U = NO%12;

printf ("Voc� colheu %d d�zia(s) e %d ovo(s).\n",D,U); // simplificando as duas linhas abaixo e deixando em uma linha apenas

//printf ("Voc� colheu %i d�zias\n",D); // mostrar resultado com o valor da vari�vel
//printf ("E restaram %i ovos soltos",U); // calcular o restante do valor inteiro acima

return 1;

}


