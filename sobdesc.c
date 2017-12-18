#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(--t>=0)
	{
		
		int a = 0,b = 0,c = 0,z = 0, somador = 1,i = 0,j = 0,verifica = 0;
		scanf("%d%d%d",&a,&b,&c);
		int jogadores[a];
		for (i = 0; i < a; i++)
		{   
			jogadores[i] = 1;
		}
		int posicoes[b][2],dados[c];
		
		for (i = 0; i < b; i++)
		{	
			for (j = 0; j < 2; j++)
			{	
				
				scanf("%d",&posicoes[i][j]);
				
			}
		}
		for (i = 0; i < c; i++)
		{
			
			scanf("%d",&dados[i]);
			if(verifica == 100)
				dados[i] = 0;
			jogadores[z] += dados[i];
			if(jogadores[z] >= 100)
				verifica = 100;
			if(dados[i]!=0)
			{
				for (j = 0; j < b; j++)
				{
					if(posicoes[j][0] == jogadores[z])
					{
						jogadores[z] = posicoes[j][1];
						break;
					}
					
				}
			}
			if(jogadores[z] >= 100)
				verifica = 100;
			
			
			

			z++;
			if(z == a)
			{
				z = 0;
			}
		
			


		}
		for (i = 0; i < a ; i++)
		{
			if(jogadores[i]>100)
				jogadores[i] = 100;
			printf("Position of player %d is %d.\n",i+1,jogadores[i]);
		}

	}
	return 0;
}
