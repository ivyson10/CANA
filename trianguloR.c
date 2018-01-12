#include <stdio.h>
/* A ideia é verificar  se a soma do vetor tem %3 == 0 
e depois disso vamos varrer nossas p posicoes + c3  verificando se existe no vetor se existir conta ++  */

//Complexidade O(nlogn)
typedef char bool;
const char true = 1;
const char false = 0;

bool bb(int vet[], int a, int b,int x)
{
    if(a > b)
        return false;
    int m = (a+b)/2;
    if(vet[m] < x)
        return bb(vet,m+1,b,x);
    if(vet[m] > x)
        return bb(vet,a,m-1,x);
    return true;
}
int main(int argc, char* argv[])
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int vet[n];
        int i, v, c = 0, c3, cont = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &v);
            vet[i] = (c += v);
        }
        if(c%3 == 0)
        {
            for(i = 0, c3 = c/3; i < n && vet[i] <= c3; i++)
            {
                int p1 = vet[i]+c3, p2 = p1+c3;
                if(bb(vet, 0, n-1, p1) && bb(vet, 0, n-1, p2))
                {
                    ++cont;
                }

            }
        }

        printf("%d\n", cont);
    }

    return 0;
}
