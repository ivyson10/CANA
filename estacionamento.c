#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, n;
	while(scanf("%d%d",&c,&n) != EOF)
	{
		int i,vet[n][2],t,placa,somador=0,cont =0;
		char e;
		for (i = 0; i < n; i++)
			{
				scanf("%c",&e);
				scanf("%d",&placa);
				scanf("%d",&t);
				if(somador + t > c)
					continue;	
				else
				{	

					if(e == 'C')
					{
						vet[i][0] = placa;
						vet[i][1] = t;
						somador += vet[i][1];
						cont++;
					}
					else if(e == 'S')
					{
						for (i = 0; i < n; i++)
						{
							if(placa == vet[i][0])
							{
								somador -= vet[i][1];
								vet[i][0] = 0;
								vet[i][1] = 0;
							}
						}
					}

				}	



			}	
			printf("%d\n",cont*10);
	}
	return 0;
}