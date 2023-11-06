/*
A
B B
C C C
D D D D
*/


#include<stdio.h>
main()
{
	int i, j, ch=65, no;
	
	printf("\n\n Input a row number for triangle : ");
	scanf("%d",&no);

	
	i=1;
	while(i<=no)
	{
		j=1;
		while(j<=i)
		{
			printf(" %c",ch);
			j++;
			
		}
		ch++;
		printf("\n");
		i++;
		
	}
}
