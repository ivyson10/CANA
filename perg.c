#include <stdio.h>
/* A ideia ´e fazer um vetor de n inteiros p onde 1<= p <= 100 e isso eu vou contar as perguntas repetidas e depois verifico se a frequencia das perguntas sao iguais ou maior que a variavel de frequencia k  
ai conto as que forem iguais ou maior.*/
// Complexidade O(n)
int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k))
	{
		if(n == 0 && k == 0)
			return 0;
		int vet[101],num,pos = 0,i,maior =0,cont = 0;
		for (i = 0; i < 100; i++)
		{
			vet[i] = 0;
		}
		for (i = 0; i < n; i++)
		{
			scanf("%d",&num);
			vet[num-1]++;
		}
		
		for (i = 0; i < 100; i++)
		{
			
			if(k <= vet[i])
			{ 
				cont++;
			}
			
		}

		printf("%d\n",cont);

	}
	return 0;
}