#include <stdio.h>
#include <locale.h>

int main (void)

{
	
	char CONTINUA, VOTO;
	int C1=0, C2=0,B=0;
	
		setlocale (LC_ALL,"");
	
	do 
	{
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
	
		
			if (VOTO==1)
			{
				C1++;
			}
			else
			if (VOTO==2)
			{
				C2++;
			}
			else 
			if (VOTO==3)
			{
				B++;
			}
		
	}
	while (CONTINUA != 'N' && CONTINUA != 'n');
		
		if (C1>C2)
		{
		C1 = C1+B;
		printf ("O candidato vencedor foi Bolsonaro. \n");
		printf ("Com %i dos votos válidos, sendo eles %i branco(s)", C1, B);
		}
		else
		{
		C2 = C2+B;
		printf ("O candidato vencedor foi Lula. \n");
		printf ("Com %i dos votos válidos, sendo eles %i branco(s)", C2, B);
		}

return 1;
}
