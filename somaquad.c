#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* A ideia é verificar até a raiz de n e testar o a soma de i e j ao quadrado até a raiz. */
// Complexidade  O(n)

int main()
{
	int n,max = 10000;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j, verifica = n, bol = 0;
		for (i = 0; i<=sqrt(n) ; i++)
		{	
			for (j = 0; j<= sqrt(n); j++)
			{
				

				verifica = verifica - ((i*i)+(j*j));

				if(verifica == 0)
				{
					bol = 1;
					break;
				}
				verifica = n;
			}
		
			if(bol == 1)
				break;
		}
		if(bol == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}