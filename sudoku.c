#include <stdio.h>

int main()
{
	int t,c = 1,contador =0;
	scanf("%d",&t);
	while(--t>=0)
	{
		int matriz[9][9],i,j,vetorC[9],vetorL[9],matrix[3][3],teste = 0;

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
				vetorL[i] += matriz[i][j];
				vetorC[j] += matriz[i][j];
				matrix[i/3][j/3] += matriz[i][j];
				
				if(i == 8 && vetorC[j] != 45)
					break;
			}
			if(vetorL[i] != 45)
				break;
			
		}
		if(vetorC[j] == 45 && vetorL[i] == 45)
		{
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if(matrix[i][j] != 45)
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