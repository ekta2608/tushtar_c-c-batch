#include<stdio.h>
#define COLMAX 10
#define ROWMAX 10

main()
{


int row,col,y;
row=1;
printf("");
printf("");

do{
	col=1;
	
		do
		{
			y=row * col;
			printf("%4d",y);
			col=col +1;
			
		}
		while(col<= COLMAX);
		printf("\n\n");
		row=row + 1;
   }
	while(row<= ROWMAX);
	printf("");
 
 

}
