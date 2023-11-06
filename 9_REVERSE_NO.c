#include<stdio.h>
main()
{
	int no, rem;
	
	printf("\n\n Input a number that you want to reverse : ");
	scanf("%d",&no);
	
	
	while(no>0)
	{
		rem=no%10;
		printf("%d",rem);
		no=no/10;
	}
}
