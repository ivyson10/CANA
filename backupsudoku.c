#include <stdio.h>

int main()
{
	int t,c = 1,contador =0;
	scanf("%d",&t);
	while(--t>=0)
	{
		int matriz[9][9],i,j,vetor1[9] = {0,0,0,0,0,0,0,0,0},vetor2[9]= {0,0,0,0,0,0,0,0,0},vetor3[9]= {0,0,0,0,0,0,0,0,0},vetor4[9]= {0,0,0,0,0,0,0,0,0},vetor5[9]= {0,0,0,0,0,0,0,0,0},vetor6[9]= {0,0,0,0,0,0,0,0,0},vetor7[9]= {0,0,0,0,0,0,0,0,0},vetor8[9]= {0,0,0,0,0,0,0,0,0},vetor9[9]= {0,0,0,0,0,0,0,0,0};
		int somadorL = 0, somadorC = 0, matrix[3][3],teste =0;

		for (i = 0; i < 9; i++)
            	matrix[i/3][i%3] = 0;
            	
            


		for ( i = 0; i < 9; i++)
		{	
			somadorL = 0;
			for ( j = 0; j < 9; j++)
			{
				scanf("%d",&matriz[i][j]);
				somadorL += matriz[i][j];
				matrix[i/3][j/3] += matriz[i][j];

			}
			
			if(somadorL != 45)
				break;
			
		}

		if(somadorL == 45)
		{
			for ( i = 0; i < 9; i++)
			{
				somadorC = 0;
				for ( j = 0; j < 9; j++)
				{
					somadorC += matriz[j][i];
				}
				
				if (somadorC !=45)
					break;
			}
			if (somadorC == 45)
			{	
				
				for ( i = 0; i < 3; i++)
				{
					
					for ( j = 0; j < 3; j++)
					{
							if(matriz[i][j] == 1)
								vetor1[0]++;
							else if(matriz[i][j] == 2)
								vetor1[1]++;
							else if(matriz[i][j] == 3)
								vetor1[2]++;
							else if(matriz[i][j] == 4)
								vetor1[3]++;
							else if(matriz[i][j] == 5)
								vetor1[4]++;
							else if(matriz[i][j] == 6)
								vetor1[5]++;
							else if(matriz[i][j] == 7)
								vetor1[6]++;
							else if(matriz[i][j] == 8)
								vetor1[7]++;
							else if(matriz[i][j] == 9)
								vetor1[8]++;
					}
					for (j = 3; j < 6 ; j++)
					{
						if(matriz[i][j] == 1)
								vetor2[0]++;
							else if(matriz[i][j] == 2)
								vetor2[1]++;
							else if(matriz[i][j] == 3)
								vetor2[2]++;
							else if(matriz[i][j] == 4)
								vetor2[3]++;
							else if(matriz[i][j] == 5)
								vetor2[4]++;
							else if(matriz[i][j] == 6)
								vetor2[5]++;
							else if(matriz[i][j] == 7)
								vetor2[6]++;
							else if(matriz[i][j] == 8)
								vetor2[7]++;
							else if(matriz[i][j] == 9)
								vetor2[8]++;
					}
					for (j = 6; j < 9 ; j++)
					{
						if(matriz[i][j] == 1)
								vetor3[0]++;
							else if(matriz[i][j] == 2)
								vetor3[1]++;
							else if(matriz[i][j] == 3)
								vetor3[2]++;
							else if(matriz[i][j] == 4)
								vetor3[3]++;
							else if(matriz[i][j] == 5)
								vetor3[4]++;
							else if(matriz[i][j] == 6)
								vetor3[5]++;
							else if(matriz[i][j] == 7)
								vetor3[6]++;
							else if(matriz[i][j] == 8)
								vetor3[7]++;
							else if(matriz[i][j] == 9)
								vetor3[8]++;
					}
					
				}
				for ( i = 3; i < 6; i++)
				{
					
					for ( j = 0; j < 3; j++)
					{
							if(matriz[i][j] == 1)
								vetor4[0]++;
							else if(matriz[i][j] == 2)
								vetor4[1]++;
							else if(matriz[i][j] == 3)
								vetor4[2]++;
							else if(matriz[i][j] == 4)
								vetor4[3]++;
							else if(matriz[i][j] == 5)
								vetor4[4]++;
							else if(matriz[i][j] == 6)
								vetor4[5]++;
							else if(matriz[i][j] == 7)
								vetor4[6]++;
							else if(matriz[i][j] == 8)
								vetor4[7]++;
							else if(matriz[i][j] == 9)
								vetor4[8]++;
					}
					for (j = 3; j < 6 ; j++)
					{
						if(matriz[i][j] == 1)
								vetor5[0]++;
							else if(matriz[i][j] == 2)
								vetor5[1]++;
							else if(matriz[i][j] == 3)
								vetor5[2]++;
							else if(matriz[i][j] == 4)
								vetor5[3]++;
							else if(matriz[i][j] == 5)
								vetor5[4]++;
							else if(matriz[i][j] == 6)
								vetor5[5]++;
							else if(matriz[i][j] == 7)
								vetor5[6]++;
							else if(matriz[i][j] == 8)
								vetor5[7]++;
							else if(matriz[i][j] == 9)
								vetor5[8]++;
					}
					for (j = 6; j < 9 ; j++)
					{
						if(matriz[i][j] == 1)
								vetor6[0]++;
							else if(matriz[i][j] == 2)
								vetor6[1]++;
							else if(matriz[i][j] == 3)
								vetor6[2]++;
							else if(matriz[i][j] == 4)
								vetor6[3]++;
							else if(matriz[i][j] == 5)
								vetor6[4]++;
							else if(matriz[i][j] == 6)
								vetor6[5]++;
							else if(matriz[i][j] == 7)
								vetor6[6]++;
							else if(matriz[i][j] == 8)
								vetor6[7]++;
							else if(matriz[i][j] == 9)
								vetor6[8]++;
					}
					
				}
				for ( i = 6; i < 9; i++)
				{
					
					for ( j = 0; j < 3; j++)
					{
							if(matriz[i][j] == 1)
								vetor7[0]++;
							else if(matriz[i][j] == 2)
								vetor7[1]++;
							else if(matriz[i][j] == 3)
								vetor7[2]++;
							else if(matriz[i][j] == 4)
								vetor7[3]++;
							else if(matriz[i][j] == 5)
								vetor7[4]++;
							else if(matriz[i][j] == 6)
								vetor7[5]++;
							else if(matriz[i][j] == 7)
								vetor7[6]++;
							else if(matriz[i][j] == 8)
								vetor7[7]++;
							else if(matriz[i][j] == 9)
								vetor7[8]++;
					}
					for (j = 3; j < 6 ; j++)
					{
						if(matriz[i][j] == 1)
								vetor8[0]++;
							else if(matriz[i][j] == 2)
								vetor8[1]++;
							else if(matriz[i][j] == 3)
								vetor8[2]++;
							else if(matriz[i][j] == 4)
								vetor8[3]++;
							else if(matriz[i][j] == 5)
								vetor8[4]++;
							else if(matriz[i][j] == 6)
								vetor8[5]++;
							else if(matriz[i][j] == 7)
								vetor8[6]++;
							else if(matriz[i][j] == 8)
								vetor8[7]++;
							else if(matriz[i][j] == 9)
								vetor8[8]++;
					}
					for (j = 6; j < 9 ; j++)
					{
							if(matriz[i][j] == 1)
								vetor9[0]++;
							else if(matriz[i][j] == 2)
								vetor9[1]++;
							else if(matriz[i][j] == 3)
								vetor9[2]++;
							else if(matriz[i][j] == 4)
								vetor9[3]++;
							else if(matriz[i][j] == 5)
								vetor9[4]++;
							else if(matriz[i][j] == 6)
								vetor9[5]++;
							else if(matriz[i][j] == 7)
								vetor9[6]++;
							else if(matriz[i][j] == 8)
								vetor9[7]++;
							else if(matriz[i][j] == 9)
								vetor9[8]++;
					}

					
				}
				
				for (i = 0; i < 9; i++)
				{

					if(vetor1[i] == 1 && vetor2[i] == 1 && vetor3[i] == 1 && vetor4[i] == 1 && vetor5[i] == 1 && vetor6[i] ==1 && vetor7[i] == 1 && vetor8[i] == 1 && vetor9[i]==1)
						contador++;
				}
				if(contador == 9)
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

			}
			else
			{
				printf("Instancia %d\n",c);
				printf("NAO\n\n");
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