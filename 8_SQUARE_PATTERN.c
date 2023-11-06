//print  square pattern

#include<stdio.h>
main()
{
	int r,c;
	
	r=1;
	while(r<=5)
	{
		
		c=1;
		while(c<=5)
		{
			printf(" * ");
			c=c+1;
		}
		
		printf("\n");
		r=r+1;
	}
}
