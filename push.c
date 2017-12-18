#include<stdio.h>

int main()
{
	int h,p,f,i,j;
	while(scanf("%d%d%d",&h,&p,&f))
	{
		if(h == 0 && p == 0 && f == 0)
			return 0;
		int matriz[h][p];
		for(i = 0; i < h; i++)
		{
			for(j = 0; j < p; j++)
			{
				scanf("%d",&matriz[i][j]);
			}
		}
		int pilha[f];
		int aux[f],z=0;
		for (i = 0; i < f; i++)
		{
			scanf("%d",&pilha[i]);
			
		}		
		for(i = p-1; i >= 0; i--)
		{
			for(j = h-1; j >= 0; j--)
			{
				if(matriz[j][i] == 0)
				{
					
					matriz[j][i] = pilha[z];
					z++;
					if(z == f)
						break;
					
				}
				
			}
			if(z == f)
				break;
		}
		for(i = 0; i < h; i++)
		{
			for(j = 0; j < p; j++)
			{
				printf("%d",matriz[i][j]);
				if(j < p-1)
					printf(" ");
			}
			printf("\n");
		}


	}
	
	return 0;
}