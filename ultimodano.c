#include <stdio.h>
/*A ideia foi fazer uma simulação dentro de um lanço obedecendo as condições pedidas no problem inicialmente os dois atacam juntos e depois dão ataques separados de acordo com seu tempo, 
eu estou utilizando o laço como tempo e verificando o tempo de cada um fazendo o modoluo do iterador i modulo do tempo dos ataques */
//Complexidade O(n)
int main()
{
	int t,i;
	scanf("%d",&t);
	while(--t>=0)
	{
		int at, ad, bt,bd,h,verif = 0;
		scanf("%d%d%d%d",&at,&ad,&bt,&bd);
		scanf("%d",&h);
		h =  h - at;
		verif = 0;
		if(h <= 0 )
			verif = 0;
		else
		{
					
			h = h - bt;
			verif = 1;
			
				
		}
		
		for (i = 1; h > 0; i++)
		{
			
			if(ad == bd)
			{
				h =  h - at;

				verif = 0;
				
				if(h <= 0 )
					break;
				else
				{
					
					h = h - bt;
					verif = 1;
					
					if(h <= 0 )
					break;
				}

			}
			else if (bd < ad)
			{
				if(i%bd == 0  && i%ad == 0)
				{
					
					h =  h - at;
					verif = 0;
					
					if(h <= 0 )
						break;
					else
					{
								
						h = h - bt;
						verif = 1;
						
						if(h <= 0 )
						break;
							
					}
				}
				else
				{
					if(i%bd == 0)
					{
						h =  h - bt;
						verif = 1;
						
						if(h <= 0 )
						break;
					}
					
					
					else if (i%ad == 0)
					{
						
						h = h - at;
						verif = 0;
						
						if(h <= 0 )
							break;
					}
				}
				
			}
			else if (ad < bd)
			{
				if(i%bd ==  0 && i%ad==0)
				{
					h =  h - at;
					verif = 0;
					
					if(h <= 0 )
						break;
					else
					{
								
						h = h - bt;
						verif = 1;
						
						if(h <= 0 )
						break;
							
					}
				}
				else
				{
					if(i%ad == 0)
					{
						
						h =  h - at;
						verif = 0;
						
						if(h <= 0 )
						break;
					}
					
					else if (i%bd == 0)
					{

						h = h - bt;
						verif = 1;
						
						if(h <= 0 )
						break;
					}
				}
				
			}
		}
		if(verif == 1)
			printf("Beto\n");
		else
			printf("Andre\n");
	}
	
	return 0;
}