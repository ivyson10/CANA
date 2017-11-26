#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fatorial(int n, int pos)
{	
	
	for ( int z = 1; z <=pos; z++)
	{
		n = (n*z);
	}
	
	return n;
}
int main()
{
	char v[6];
	char aux[6];
	int vet[6]; 
	int fat = 0;
	while(scanf("%s",v))
	{
		if(atoi(v)==0)
			return 0;
		int tam = strlen(v);
		for (int j = 0, k = tam; j <=tam;)
		{
			
			aux[j++] = v[k--];
		}
		
		for(int i = 1; i <= tam; i++)
		{
			char c[1]; 
			c[0] = aux[i];
			
			vet[i] = c[0] - 48;
			
			fat+= fatorial(vet[i],i);
		}
		printf("%d\n",fat);
		fat = 0;
	}
	return 0;
}