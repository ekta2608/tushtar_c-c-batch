// conditonal operator    ? :

#include<stdio.h>
main()
{
	int a , b , max;
	printf("enter two values: \n");
	scanf("%d %d",&a,&b);
	
	max =  a>b ? a:b;
	printf("max value of two number is : %d", max);
	
}
