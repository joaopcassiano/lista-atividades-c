#include <stdio.h>
#include <locale.h>

int main (void)
{
	int NUM_AL, REP, APROVADO, REPROVADO; 
	float NOTA_1, NOTA_2, MEDIA,SOMA_MEDIA;
	char NOME[30];
	
	setlocale (LC_ALL,"");
	
	printf ("Qual o n�mero de alunos? ");
	scanf ("%i", &NUM_AL);
	
	SOMA_MEDIA = 0;
	APROVADO= 0;
	REPROVADO= 0;	
	
	for (REP> 0 ; REP < NUM_AL ; REP++)
	
		{
		while (getchar() != '\n') //limpar buffer
		 printf ("%i� aluno: \n",REP+1);
		 
		 printf ("Qual seu nome? \n");
		 scanf ("%s",&NOME);
		 
		 printf ("Qual foi sua 1� nota? \n");
		 scanf ("%f",&NOTA_1);
		 printf ("Qual foi sua 2� nota? \n");
		 scanf ("%f", &NOTA_2);
		 
		 MEDIA = (NOTA_1 + NOTA_2) /2;
		 
		 if (MEDIA>=6)
		 	 APROVADO++;
			else
			 REPROVADO++;
			  
		 SOMA_MEDIA = SOMA_MEDIA + MEDIA;
		 
		 printf ("NOME: %s, sua m�dia foi: %.2f\n", NOME , MEDIA);
		 printf ("\n");
		 	if (MEDIA > 5)
		 	 {
			  printf ("Parab�ns voce foi aprovado!\n");
			  printf ("==============================================\n");
			  printf ("\n");
			 }
		 		else
		 		 {
				 printf ("Voc� foi reprovado, que pena!\n"); 
				 printf ("==============================================\n");
			  	 printf ("\n");
				 }
		} 
	
	printf ("Aprovados: %i\n", APROVADO);
	printf ("Reprovados: %i\n", REPROVADO);
	printf ("M�dia da turma: %.2f\n", SOMA_MEDIA/NUM_AL);
	

	
	return 1;
}
