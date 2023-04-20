#include<stdio.h>   // HEADER FILE
main()   // main function
{
	int a=2,b=3;
	printf("%d\n",a&b); //  AND ---->2  when both oprand are 1 --> 1
	printf("%d\n",a|b); //  OR------->3 when both oprand are 0 -->0
	printf("%d\n",a^b); //  1  opposite 
	printf("%d\n",~a);  //  -3 positive operand will +1 with -ve sign
	printf("%d\n",a<<b);//  16
	printf("%d\n",a>>b); // 0
	
}
