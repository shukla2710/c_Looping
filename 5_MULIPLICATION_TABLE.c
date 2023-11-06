//Print the multiplication table of given number.

#include<stdio.h>
main()
{
	int no, i;
	
	printf("\n\n Input a number : ");
	
	scanf("%d",&no);
	i=1; 
	while(i<=10)  
	{
		printf("\n %d * %d = %d",no,i,no*i);
		i=i+1;  
	}
	
}
	
