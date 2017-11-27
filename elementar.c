#include <stdio.h>

void insertionSort(int original[], int tam) {
	int i, j, atual, cont = 0;

	for (i = 1; i < tam; i++) {
		atual = original[i];
		

		for (j = i - 1; (j >= 0) && (atual < original[j]); j--) {
			original[j + 1] = original[j];
			cont++;
        }

		original[j+1] = atual;
	}
	printf("%d\n",cont);

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
		insertionSort(vet,n);

	}
	return 0;
}