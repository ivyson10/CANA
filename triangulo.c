#include <stdio.h>
#include <math.h>
unsigned long long int squaring(unsigned long long int base,   int expoente , unsigned long long int res)
{
	
    unsigned long long int p = 1;
    while(expoente)
    {
    	if(expoente%2==1)
    		p = (p*base)%res;
    	expoente/=2;
    	base=(base * base)% res;
    }
    
    return p;
    
 	
}
int main()
{
	int r;
	unsigned long long int  resultado = 0, res = 2147483647;
	scanf("%d",&r);
	resultado = squaring(3, r, res);
	//resultado = resultado % res;
	printf("%llu\n",resultado);
	
	return 0;
}