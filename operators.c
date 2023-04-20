// operators

#include<stdio.h>

void main(void)
{
  int a=10,b=20;
  
  printf("%d < %d = %d\n",a,b,a<b);// 1---->true	
  printf("%d > %d = %d\n",a,b,a>b);
  printf("%d <= %d = %d\n",a,b,a<=b);
  printf("%d >= %d = %d\n",a,b,a>=b); 
  printf("%d ! %d = %d\n",a,b,!(b>a)); 

}
