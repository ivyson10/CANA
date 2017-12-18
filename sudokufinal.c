#include <stdio.h>
/* a ideia foi somar todas as colunas e linhas e submatrizes mas multiplicando
 os numeros por ele mesmo assim formando um hash onde a soma da coluna e linhas e submatrizes deveriam ser 285;*/

//Complexidade O(n²)
int main()
{
	int t,c = 1,contador =0;
	scanf("%d",&t);
	while(--t>=0)
	{
		int matriz[9][9],i,j,vetorC[9],vetorL[9],matrix[3][3],teste = 0,final = 0;

		for (i = 0; i < 9; i++)
            {
            	matrix[i/3][i%3] = 0;
            	vetorC[i] = 0;
            	vetorL[i] = 0;
            }

	
		for ( i = 0; i < 9; i++)
		{	
			
			for ( j = 0; j < 9; j++)
			{
				scanf("%d",&matriz[i][j]);
			}
			
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				 final = matriz[i][j]; 
				 final *= final;
				vetorL[i] += final;
				vetorC[j] += final;
				matrix[i/3][j/3] += final;
				
				if(i == 8 && vetorC[j] != 285)
					break;
			}
			if(vetorL[i] != 285)
				break;
			
		}
		if(i == 9 && j == 9)
		{
			i = i-1;
			j = j-1;
		}
		if(vetorC[j] == 285 && vetorL[i] == 285)
		{
			
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if(matrix[i][j] != 285)
						teste = 1;
				}
			}
			if(teste == 1)
			{
				printf("Instancia %d\n",c);
				printf("NAO\n\n");
			}
			else
			{
				printf("Instancia %d\n",c);
				printf("SIM\n\n");
			}
		}
		else
		{
			printf("Instancia %d\n",c);
			printf("NAO\n\n");
		}

	  	c++;
	}
	return 0;
}