#include <stdio.h>

int main()
{
	int n, j, i,z,x,soma = 0,w,aux,k;
	while(scanf("%d",&n)!=EOF)
	{ 
		int vet[n], vetfinal[n];
		for (i = 0; i < n; i++)
		{
			scanf("%d",&vet[i]);
		}
		for (j = 0; j < n; j++)
		{
			scanf("%d",&vetfinal[j]);
		}
		for (z = 0; z < n; z++)
		{
			for (x = 0; x < n; x++)
			{
				if(vetfinal[z] == vet[x])
				{

					soma += x-z;
					
					if(x-z !=0)
					{
						for (w = x; w > 0; w--)
						{	if(z == w)
								break;
							aux = vet[w];
							
							vet[w] = vet[w-1];
							
							vet[w-1] = aux;
						}

					}
				}
			}
		}
		printf("%d\n",soma);
		soma = 0;
	}

	
	return 0;
}