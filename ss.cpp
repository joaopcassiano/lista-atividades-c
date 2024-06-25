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
				C1+1;
				break;
				
			
			case '2':
				C2+1;
				break;
			
			case 'B':
				B+1;
				break;
		}
		printf ("Voto registrado com sucesso\n");
		system ("Pause");
		
	}
	while (CONTINUA != 'N' && CONTINUA != 'n');
		
	printf ("Total de votos: \n");
	printf ("Bolsonaro %5i\n", C1);
	printf ("Lula: %5i\n", C2);
	printf ("Votos brancos: %5i\n", B);
	
		if (C1>C2)
		printf ("O candidato vencedor foi Bolsonaro. Com %i dos votos", C1+B);
			else
			printf ("O candidato vencedor foi Lula. Com %i votos", C2+B);
		
return 1;
}
