#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comparador(const void * x, const void * y)
{
	if(*(int*)x < *(int*)y)
		return 1;
	else if(*(int*)x > *(int*)y)
		return -1;
	else
		return 0;
}

int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	while(--n>=0)
	{
		scanf("%d",&m);
		int vet[m+1];
		int aux[m+1];
		int cont = 0;
		for (i = 0; i < m; i++)
		{
			scanf("%d",&vet[i]);
			aux[i] = vet[i];
		}
		int tam = m;
		qsort(vet,tam,sizeof(int),comparador);
		for (i = 0; i < m; i++)
		{
			if(aux[i] == vet[i])
			{
				cont++;
			}
		}
		printf("%d\n",cont);
	}
	return 0;
}