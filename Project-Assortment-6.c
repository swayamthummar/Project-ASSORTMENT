#include<stdio.h>
main()
{
	int a[10][10],i,o,n_1,n_2,sum=0;
	
	printf("Enter the value of row->");
	scanf("%d",&n_1);
	printf("Enter the value of column->");
	scanf("%d",&n_2);
	
	if(n_1==n_2)
	{
		printf("Enter the element for Metrix:\n");
		
		for(i=0;i<n_1;i++)
		{
		  for(o=0;o<n_2;o++)
		  {
		    printf("a[%d][%d]=",i,o);
			scanf("%d",&a[i][o]);
		  }
	    }
		printf("Metrix:-\n");
		
		for(i=0;i<n_1;i++)
		{
			sum=sum+a[i][i];
			
			for(o=0;o<n_2;o++)
			{
				printf("%d ",a[i][o]);
			}
			printf("\n");
		}
		printf("Sum of the Elements:-:\n");
		printf("%d",sum);
	}
	else
	{
		printf("It is not the squre Metrix:.:");
	}
}
