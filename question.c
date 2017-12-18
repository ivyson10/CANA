#include <stdio.h>

int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k))
	{
		if(n == 0 && k == 0)
			return 0;
		int vet[n],num,pos = 0,i,maior =0;
		for (i = 0; i < n; i++)
		{
			vet[i] = 0;
		}
		for (i = 0; i < n; i++)
		{
			scanf("%d",&num);
			vet[num-1]++;
		}

		for (i = 0; i < n; i++)
		{
			if(k <= vet[i])
			{
				if(maior <= vet[i])
				{
				maior = vet[i];
				pos = i+1;
				}
			}
			
		}

		printf("%d\n",pos);

	}
	return 0;
}