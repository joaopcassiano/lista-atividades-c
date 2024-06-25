#include <stdio.h>
#include <locale.h>

int main (void)
{
	int NUM_AL, REP, APROVADO, REPROVADO; 
	float NOTA_1, NOTA_2, MEDIA,SOMA_MEDIA;
	char NOME[30];
	
	setlocale (LC_ALL,"");
	
	printf ("Qual o número de alunos? ");
	scanf ("%i", &NUM_AL);
	
	SOMA_MEDIA = 0;
	APROVADO= 0;
	REPROVADO= 0;	
	
	for (REP> 0 ; REP < NUM_AL ; REP++)
	
		{
		while (getchar() != '\n') //limpar buffer
		 printf ("%iº aluno: \n",REP+1);
		 
		 printf ("Qual seu nome? \n");
		 scanf ("%s",&NOME);
		 
		 printf ("Qual foi sua 1º nota? \n");
		 scanf ("%f",&NOTA_1);
		 printf ("Qual foi sua 2º nota? \n");
		 scanf ("%f", &NOTA_2);
		 
		 MEDIA = (NOTA_1 + NOTA_2) /2;
		 
		 if (MEDIA>=6)
		 	 APROVADO++;
			else
			 REPROVADO++;
			  
		 SOMA_MEDIA = SOMA_MEDIA + MEDIA;
		 
		 printf ("NOME: %s, sua média foi: %.2f\n", NOME , MEDIA);
		 printf ("\n");
		 	if (MEDIA > 5)
		 	 {
			  printf ("Parabéns voce foi aprovado!\n");
			  printf ("==============================================\n");
			  printf ("\n");
			 }
		 		else
		 		 {
				 printf ("Você foi reprovado, que pena!\n"); 
				 printf ("==============================================\n");
			  	 printf ("\n");
				 }
		} 
	
	printf ("Aprovados: %i\n", APROVADO);
	printf ("Reprovados: %i\n", REPROVADO);
	printf ("Média da turma: %.2f\n", SOMA_MEDIA/NUM_AL);
	

	
	return 1;
}
