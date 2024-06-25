#include <stdio.h>
#include <locale.h>

int main (void)

{

int NO; //número de ovos
int D; // duzias
int U; // unidades de ovos soltos

setlocale(LC_ALL,""); // idioma português

printf ("Quantos ovos você colheu? "); // mensagem
scanf ("%i", &NO); // guardar informação na variável

D = NO / 12; // fórmula
U = NO%12;

printf ("Você colheu %d dúzia(s) e %d ovo(s).\n",D,U); // simplificando as duas linhas abaixo e deixando em uma linha apenas

//printf ("Você colheu %i dúzias\n",D); // mostrar resultado com o valor da variável
//printf ("E restaram %i ovos soltos",U); // calcular o restante do valor inteiro acima

return 1;

}


