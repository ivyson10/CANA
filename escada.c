#include <stdio.h>
/*A ideia é colocar os tempos em vetores e verificar se o atual +10 é maior que o proximo se for faço a diferença entre eles 
e adiciono no tempo se não só adiciono mais 10 que é o tempo normal que a escada fica ligada. */
//Complexidade O(n)
int main()
{
	int n,tempo = 0,x = 10,j=0;
	int i = 0;
	scanf("%d",&n);
	int vet[n];
	for (j = 0; j < n; j++)
	{
		vet[j] = 0;
	}
	while(--n>=0)
	{
		
		scanf("%d",&vet[i]);
		i++;

	}
	for (j = 0; j < i-1; j++)
	{
		
		if(vet[j]+10 > vet[j+1])
		{

			
			tempo +=  vet[j+1]  - (vet[j]) ;
			
		}
		else
		{	
			tempo += 10;
		}
		
	}
	tempo +=10;
	printf("%d\n",tempo);
	return 0;
}