//Print Odd and even numbers by using while loop.

#include<stdio.h>
main()
{
	int i;
	
	printf("\n Odd Numebrs between 1 to 10..\n");
	i=1; 
	while(i<=10)  
	{
		printf("%d \n",i);
		i=i+2;  
	}
	
	printf("\n Even Numebrs between 1 to 10..\n");
	i=2; 
	while(i<=10)  
	{
		printf("%d \n",i);
		i=i+2;  
	}
}
