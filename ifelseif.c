// if --else -if ladder

#include<stdio.h>
main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	
	if(marks>=90)
	{
		printf("outstanding");
		
	}
	else if(marks>=70)
	{
		printf("very good");
	}
	else if(marks>=60)
	{
		printf("good");
	}
	else if(marks>=50)
	{
		printf("keep it up !");
	}
	else if(marks>=40)
	{
		printf("you can do it better ");
	}
	else if(marks>=30)
	{
		printf("fail   !");
	}
}

