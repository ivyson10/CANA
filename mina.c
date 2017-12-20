#include <stdio.h>
/* a ideia é fazer um vetor e quando tiver lendo a primeira posicao verificar a proxima posicao e a atual, 
no meio voce verifica a atual a proxima e a anterior,e na posicao final voce verifica  a atual e a anterior.*/
//Complexidade O(n)
int main()
{
	int n;
	scanf("%d",&n);
	int vet[n],i = 0,j,aux[n],cont = 0;
	while(--n>=0)
	{
		scanf("%d",&vet[i]);
		aux[i] == 0;
		i++;
	}
	for (j = 0; j < i; j++)
	{	
		if( j == 0)
		{
			if(vet[j] == 1)
			{
				cont++;
				if(vet[j+1] == 1)
					cont++;
			}
			else if(vet[j] == 0)
			{
				if(vet[j+1] == 1)
					cont++;
			}
		}
		else if(j == i-1)
		{
			if(vet[j] == 1)
			{
				cont++;
				if(vet[j-1] == 1)
					cont++;
			}
			else if(vet[j] == 0)
			{
				if(vet[j-1] == 1)
					cont++;
			}
		}
		else if(j >=1 && j <= i - 2)
		{
			if(vet[j] == 1)
			{
				cont++;
				if(vet[j-1] == 1)
					cont++;
				if(vet[j+1] == 1)
					cont++;
			}
			else if(vet[j] == 0)
			{
				if(vet[j-1] == 1)
					cont++;
				if(vet[j+1] == 1)
					cont++;
			}
		}
		aux[j] = cont;
		cont = 0;
	}
	for (j = 0; j < i; j++)
	{
		printf("%d\n",aux[j]);
	}
	return 0;
}