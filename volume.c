#include <stdio.h>
/* a ideia é muito facil apenas armazenar os valores dos volumes no vetor e somar e verificar se ele fica acima de 100 ou abaixo de 0,
e volume recebe um dos valoes 100 ou 0.*/
//complexidade O(n)
int main()
{
	int v,t;
	scanf("%d%d",&v,&t);
	int vol = v;
	int vet[t],i = 0,j;
	for (j = 0; j < t; j++)
	{
		vet[j] = 0;
	}
	while(--t>=0)
	{
		scanf("%d",&vet[i]);
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if(vol > 100)
			vol = 100;
		else if(vol < 0)
			vol = 0;
		vol += vet[j];
	}
	if(vol > 100)
		vol = 100;
	else if(vol < 0)
		vol = 0;
	
	printf("%d\n",vol);
	return 0;
}