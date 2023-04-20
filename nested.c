//nested if

#include<stdio.h>
main()
{
	int a=10;
	
	if(a==10)
	{
		printf("valid\n");
		
		if(a>9)
		{
			printf("A\n");
		}
		if(a>=10)
		{
			printf("its also A\n");
		}
	}
	
	else
	{
		printf("valid");
	}
}
