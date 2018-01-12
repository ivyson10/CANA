#include <stdio.h>

/*A ideia 'verificar sequencias de 1 de cada coluna comparando com a variavel c onde é a quantidade de 1's seguidos
verifico quando for 0 identifico que houve a quebra de 1's  verifico se a sequencia é maior que c, se ela for eu cont++; 
e zero minha variavel verifica quando acabo minhas linhas passando para outra coluna.*/

//Complexidade O(n*p)

int main()
{
	int p,n,c;
	while(scanf("%d%d%d",&p,&n,&c))
	{
		if(p == 0 && n == 0 && c == 0)
			return 0;
		int vet[n][p],i,j,verifica = 0,cont=0;
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < p; j++)
			{
				scanf("%d",&vet[i][j]);

			}
		}
		for (i = 0; i < p ; i++)
		{	
			for (j = 0; j < n; j++)
			{	
				
				if(vet[j][i] == 1)
				{

					verifica += 1;

				}
				else if(vet[j][i]==0)
				{
					if(verifica >= c)
					{
						cont++;
						
					}
					verifica = 0;
				}

			}
			if(verifica >= c)
			{
				cont++;
						
			}
			
			verifica = 0;
		}
		printf("%d\n",cont);
	}
	return 0;
}