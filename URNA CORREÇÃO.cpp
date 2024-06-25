#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)

{
	
	char CONTINUA, VOTO;
	int C1=0 ,C2=0 ,B=0;
	
		setlocale (LC_ALL,"");
	
	do 
	{
		system("cls");
		printf ("+++++++++++++++++++++ \n");
		printf ("\n");
		printf ("URNAS 2022 \n");
		printf ("1- Bolsonaro \n");
		printf ("2- Lula \n");
		printf ("3- Branco \n");
		printf ("Insira seu voto: \n");
		scanf ("%i",&VOTO);
		
		printf ("CONTINUA? <S/N> \n");
		scanf ("%s*c", &CONTINUA);
		
		switch(VOTO)
		{
			case '1':
				C1++;
				break;
				
			
			case '2':
				C2++;
				break;
			
			case 'B':
				B++;
				break;
		}
		printf ("Voto registrado com sucesso\n");
		//sleep (3);
		
	}
	while (CONTINUA != 'N' && CONTINUA != 'n');
		
	printf ("Total de votos: \n");
	printf ("Candidato 1: %5i\n", C1);
	printf ("Candidato 2: %5i\n", C2);
	printf ("Votos brancos: %5i\n", B);
	
			
		if (C1>C2)
		printf ("O candidato vencedor foi Bolsonaro. Com %i dos votos válidos, sendo eles %i branco(s)", C1+B);
			else
			printf ("O candidato vencedor foi Lula. Com %i dos votos válidos, sendo eles %i branco(s)", C2+B);
		
return 1;
}
