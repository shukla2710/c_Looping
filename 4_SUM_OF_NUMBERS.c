//Print the sum of given number.

#include<stdio.h>
main()
{
	int i, sum=0;
	
	printf("\n Sum between 1 to 10 numbers..\n");
	i=1; 
	while(i<=10)  
	{
		sum=sum+i;
		i=i+1;  
	}
	
	printf("\n Sum  = %d",sum);
}
	
