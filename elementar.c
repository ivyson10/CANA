#include <stdio.h>

void shellSort(int vet[], int size) {
    int i , j , value,cont=0;
    int gap = 1;
    while(gap < size) 
    {
        gap = 3*gap+1;
    }
    while ( gap > 1) 
    {
        gap /= 3;
        for(i = gap; i < size; i++) 
        {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) 
            {
                vet [j + gap] = vet[j];
                j -= gap;
            	
            }
            vet [j + gap] = value;
            
        }
    }
    printf("%d\n",gap );
}
int main()
{
	int t,i,cont;
	scanf("%d",&t);
	while(--t>=0)
	{
		int n;
		scanf("%d",&n);
		int vet[n];
		for (i = 0; i < n; i++)
		{
			scanf("%d",&vet[i]);
		}
		shellSort(vet,n);

	}
	return 0;
}