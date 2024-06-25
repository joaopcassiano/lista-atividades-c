#include<stdio.h>
#include<math.h>
int main(void)
{
	int OP,N1,N2;
	float R;
	
    printf("Menu de opcoes:");
    printf("1. Somar dois numeros\n");
    printf("2. Raiz quadrada de um numero\n");
    printf("\n");
    printf("Digite opcao:");
    scanf("%d",&OP);
    
    if(OP==1)
    {
        printf("Entre com o primeiro numero:");
        scanf("%d",&N1);
        printf("Entre com o segundo numero: ");
        scanf("%d",&N2);
        printf("Soma dos numeros:%.d",N1+N2);
    }
    else
    {
        printf("Coloque o numero para raiz: ");
        scanf("%d",&N1);
        printf("Raiz do numero: %f",sqrt(N1));
        
    }
    
    
	
	
	
	
	
	return 1;
}
