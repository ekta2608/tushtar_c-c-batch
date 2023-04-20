// switch case - decisio statment


#include<stdio.h>
main()
{
	char ch; // datatype char  used ---> character input
	printf("enter any charcater:");
	scanf("%c",&ch); // format specifier of charcter is %c
	
	switch(ch)
	{
		case 'a':printf("hello");
		      break;              // break datatype help to break case 'a' task
		      
	    case 'g':printf("hi ! ");
	          break;
	          
	    case 't':printf(" hello everyone ");
		      break; 
			  
	    default: printf("worng input !");	       
	}
}
