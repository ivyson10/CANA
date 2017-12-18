#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int n,max = 10000;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j, verifica = n, bol = 0;
		for (i = 0; i*i <=max ; i++)
		{	verifica = n;
			for (j = 0; j*j <= max; j++)
			{
				printf(" i= %d\n j= %d\n", i,j);

				verifica = verifica -((i*i)+(j*j));
				if(verifica == 0)
				{
					bol = 1;
					break;
				}

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