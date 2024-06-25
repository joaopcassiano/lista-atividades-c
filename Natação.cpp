#include<stdio.h>
int main(void)
{
	int N1;
	
	printf("Qual sua idade para ver sua categoria:");
	scanf("%d",&N1);
	if(N1<=16)
	
		printf("Sua categoria e infanto juvenil");
	else
		if(N1<=30)
	
		printf("Sua categoria e adulto");
		
	else
		printf("Sua categoria e senior");
	
	
	
	
	return 1;
}
