#include <stdio.h>
/*a ideia desse problema é eu verificar um contador que começa do zero  que é o meu z e procuro o meu z+1 no vetor, quando achar meu z+1 
no vetor eu verifico se a posição dele no meu vetor é igual a j, se for diferente eu faço a troca com meu swap*/
//Complexidade o(n)
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(--t>=0)
    {
        int n,cont = 0,z = 0;
        scanf("%d",&n);
        int vetor[n],aux[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d",&vetor[i]);
            aux[i] = 0;
        }

        for (j = 0; j < n; j++)
        {
           
            if(vetor[j] == z+1)
            {
                if(z != j)
                {
                    swap(&vetor[j],&vetor[z]);
                    cont++;
                    j = 0;
                }
                z++;
            }
        }
        
        printf("%d\n",cont);
    }
    
    return 0;
}