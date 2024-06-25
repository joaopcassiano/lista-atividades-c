#include <stdio.h>
#include <locale.h>

int main (void)
{
	int HI, MI, HF, MF, H, M;
	
	setlocale (LC_ALL,"");
	
	printf ("Hora inicial: ");
	scanf("%i",&HI);
	printf ("Minuto inicial: ");
	scanf ("%i", &MI);
	printf ("Hora final: ");
	scanf ("%i", &HF);
	printf ("Minuto final: ");
	scanf ("%i", &MF);
	
	if (MF<MI)
	 {
	 	MF= MF+60;
	 	HF= HF-1;
	 }
	 	else
	
		 if (HF<HI)
	 {
		HF = HF+24;
	 } 		

	H= HF - HI; 
	M = MF - MI;
	
	printf ("A duração do jogo foi: %i hora(s) e %i minuto(s)",H,M);	
		
	
	return 1;
	
}
