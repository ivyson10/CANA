#include<stdio.h>

void mdc(int n, int d)
{
    int n1,d1,n2,d2;
    n1 = n;
    d1 = d;

    int z = n % d;
    while(z!=0)
    {
        n = d; 
        d = z; 
        z = n % d;
    }
    
    d2 = d1/d;
    n2 = n1/d;
    if((d1/d) < 0)
    {
        d2 = (d1/d)*(-1);
        n2 = (n1/d)*(-1);
    }

    printf("%d/%d = %d/%d\n",n1,d1,n2,d2);
}

int main()
{
    int t,n1,d1,d2,n2,n,d;
    char c;
    scanf("%d",&t);
    while(--t>=0)
    {
        scanf("%d / %d %c %d / %d",&n1,&d1,&c,&n2,&d2);
        
        if(c=='+')
        {
            n = ((n1*d2)+(n2*d1));
            d = (d1*d2);
        }
        else if(c=='-')
        {
            n = ((n1*d2)-(n2*d1));
            d = (d1*d2);
        }
        else if(c=='*')
        {
            n = (n1*n2);
            d = (d1*d2);
        }
        else if(c=='/')
        {
            n = (n1*d2);
            d = (n2*d1);
        }
        
        mdc(n,d);
    }

    return 0;
}


