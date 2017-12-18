#include <stdio.h>
/* A ideia e verificar os picos entao pego 3 posicoes a minha posicao do meio e a que vou usar para fazer as comparacoes,
utilizando o modolo eu consigo fazer o loop que ´e a ideia do problema, vamos dizer que meu t e 9,  meu i e 8 e meu (i+1)%t vai ser meu 0 e meu (1+2)%t vai ser meu 1)  */
// comlexidade O(n)
int main()
{
	int t;
	while(scanf("%d",&t)!=0)
	{

		if(t==0)
			return 0;
		int vet[t],i,pico=0,anterior = 0,bottom = 1,up = 1;
		for (i = 0; i < t; i++)
		{
			scanf("%d",&vet[i]);
		}
		

		for (i = 0; i < t; i++)
		{
				if(vet[i] < vet[(i+1)%t])
				{   
					if(vet[(i + 1)%t] > vet[(i + 2)%t])
   					 {
    					 pico++;
    				 }
				}
				else if(vet[i] > vet[(i+1)%t])
				{
					if(vet[(i + 1)%t] < vet[(i + 2)%t])
				    {
				     	pico++;
				    }
				}

		}
		
		printf("%d\n",pico);
	}
	return 0;
}