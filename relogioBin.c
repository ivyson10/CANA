#include <stdio.h>
/*A ideia ´e simples eu pego a hora e os minutos divido pelos valores correspondentes se o valor tiver igual a 1 marco no relogio e pego o resto da divisao paa verificar o proximo  */
//complexidade O(n)


int main(int argc, char const *argv[])
{
	int h,m;
	while(scanf("%d:%d", &h,&m) != EOF)
	{
		int hh[4]= {0,0,0,0},mm[6]={0,0,0,0,0,0},i;

		hh[0] = h / 8;
		h = h % 8;
		hh[1] = h / 4;
		h = h % 4;
		hh[2] = h / 2;
		h = h % 2;

		mm[0] = m / 32; 
		m %= 32; 
		mm[1] = m / 16; 
		m %= 16; 
		mm[2] = m / 8; 
		m %= 8;
		mm[3] = m / 4;  
		m %= 4;
		mm[4] = m / 2;
		m %= 2;


	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|    ____________________________________    |_\n");
	printf("|   |                                    |   |_)\n");
	printf("|   |   8         4         2         1  |   |\n");
	printf("|   |                                    |   |\n");
	printf("|   |   ");

	for (i = 0; i < 3; i++)
	{
		if(hh[i] == 1)
		{
        	printf("o         ");
	    }
		else
	    {
	        printf("          ");
	    }
	}
	if(h == 1)
   	{
        printf("o  |   |\n");
    }
	else
    {
        printf("   |   |\n");
    }

	printf("|   |                                    |   |\n");
	printf("|   |                                    |   |\n");
	printf("|   |   ");

	for (i = 0; i < 5; i++)
	{
		if(mm[i] == 1)
		{
        	printf("o     ");
	    }
		else
	    {
	        printf("      ");
	    }
	}

	if(m == 1)
    {
        printf("o  |   |\n");
    }
	else
    {
        printf("   |   |\n");
    }

	printf("|   |                                    |   |\n");
	printf("|   |   32    16    8     4     2     1  |   |_\n");
	printf("|   |____________________________________|   |_)\n");
	printf("|                                            |\n");
	printf("|____________________________________________|\n");
	printf("\n");

	}
	return 0;
}
