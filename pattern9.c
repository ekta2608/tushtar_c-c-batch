#include<stdio.h>
main()
{
	int n,i,j,k;
	
	
	
	
	
	
	printf("enter the number:\n");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=1;i<=n;i++)  // outer loop
	{
		for(j=n;j>=i;j--) // inner loop
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}
