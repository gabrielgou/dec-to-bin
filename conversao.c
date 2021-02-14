#include <stdio.h>
#include <math.h>

int main()
{
	int resultado;


	printf("Coloque o numero para passar de decimal para binario \n");
	int inteiro;
    int decimal;
    scanf("%d.%d",&inteiro, &decimal);
    //decimal = num - (int) num;
    //inteiro=(int) num;
    resultado = inteiro;
    printf("numero: %d decimal %d", inteiro, decimal);
    int resto=0;
    int vetor[32];
    int i=0;
    for(i=0; resultado>1;i++)
    {
        resto=resultado%2;
        resultado=resultado/2;
        printf("\nDivisao %d: \nQuociente -> %d e Resto ->%d", i+1, resultado, resto);
        vetor[i]=resto;
    }
    vetor[i]=resultado;
    printf("\nresultado binario: ");
	for(int j=i;j>=0;j--)
	{
	    printf("%d", vetor[j]);
	}
	int vetor_dec[8];
	int numero = decimal, casas=1;
	while((numero = numero / 10) >= 1){
		casas++;
	}
	
	if(decimal>0)
	{
	    int l=0;
	    int expo = 10;
	    if(casas>1)
	    {
	        expo = pow(10,casas);
	    }
	    do
	    {
	        if( decimal/expo==1 )
	        {
	            vetor_dec[l]=decimal/expo;
	            decimal=decimal-expo;
	            l++;
	        }
	        else
	        {
	            decimal=decimal*2;
	            vetor_dec[l]=decimal/expo;
	            if(decimal>=expo)
	            {
	                decimal=decimal-expo;
	            }
	            l++;
	        }
	        if(l>8)
	        {
	            break;
	        }
	    }while(decimal-expo!=0);
	    printf(",");
	    for(int j=0;j<l;j++)
	    {
	        printf("%d", vetor_dec[j]);
	    }
	}
	
    return 0;
}
