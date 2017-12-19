#include <stdio.h>

int main()
{
	int p,n,c;
	while(scanf("%d%d%d",&p,&n,&c))
	{
		int vet[n][p],i,j,verifica = 0,cont=0;
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < p; j++)
			{
				scanf("%d",&vet[n][p]);

			}
		}
		for (i = 0; i < p ; i++)
		{	verifica = 0;
			for (j = 0; j < n; j++)
			{
				if(vet[n][p] == 1)
				{
					verifica += 1;
					if(verifica >= c)
						cont++;

				}
				else if(vet[n][p]==0)
				{
					verifica = 0;
				}

			}
		}
		printf("%d\n",cont);
	}
	return 0;
}