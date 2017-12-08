#include <stdio.h>

int main()
{
	int t,c = 1,contador =0;
	scanf("%d",&t);
	while(--t>=0)
	{
		int matriz[9][9],i,j,vetorC[9],vetorL[9],matrix[3][3];

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
			for (i = 0; i < 9; j++)
			{
				
			}
		}
		

	  	c++;
	}
	return 0;
}