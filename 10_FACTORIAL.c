#include<stdio.h>
main()
{
	int no,fact=0,i;
    printf("\n\n Enter a Number : ");
    scanf("%d",&no);
    
    i=1;
    while(i<=no)
    {
    	fact=fact*i;
    	i++;
	}
 
 	printf("\n\n Factorial  value : %",fact);
    
}
    
