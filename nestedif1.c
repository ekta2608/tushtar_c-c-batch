// nested if statement 

// WAP for digit clock --> ex- 01:59:59

#include<stdio.h>
#include<windows.h>
main()
{
	int h,m,s;
	int d=1000; // 1sec=1000 millisecond
	
	printf("Set time: \n");
	scanf("%d %d %d",&h, &m ,&s);
	
	if(h>12)
	{
		printf("Error \n");
		exit(0);   //       if conditon give is invalid then exit loop will occur
	}
	while(1) // infinite loop
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		
		printf("\nClock ");
		printf("%0.2d:%0.2d:%0.2d",h,m,s);
		Sleep(d);  // time which you have given should be shop 
		
	 system("cls"); // console screen clear
		
	}
		//system("cls"); 
	
	
}
