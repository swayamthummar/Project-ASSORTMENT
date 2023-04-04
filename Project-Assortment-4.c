#include<stdio.h>
main()
{
   int a[100][100],b[100][100],c[100][100],n_1,n_2,i,o;
	
   printf("Enter The Value of Row->");
   scanf("%d",&n_1);
   printf("Enter The Value of Column->");
   scanf("%d",&n_2);
   printf("Enter the element for first Metrix:-\n");
	
	 for(i=0;i<n_1;i++)
     {
	    for(o=0;o<n_2;o++)
		{
		    printf("a[%d][%d]=",i,o);
	        scanf("%d",&a[o][i]);
		}
	 }
	printf("The First Metrix:\n");
	
	for(i=0;i<n_1;i++)
	{
		for(o=0;o<n_2;o++)
		{
			printf("%d ",a[i][o]);
		}
	   printf("\n");
	}
	
	printf("Enter the element for Second Metrix:-\n");
	
	for(i=0;i<n_2;i++)
	{
		for(o=0;o<n_2;o++)
		{
			printf("b[%d][%d]=",i,o);
			scanf("%d",&b[o][i]);
			c[i][o]=a[i][o]+b[i][o];
		}
    }
	printf("The Second Metrix:\n");
	
	for(i=0;i<n_1;i++)
	{
		for(o=0;o<n_2;o++)
		{
			printf("%d ",b[i][o]);
		}
	   printf("\n");
	}
	
	printf("Addition of Metrics:-:\n");
	
	for(i=0;i<n_2;i++)
	{
		for(o=0;o<n_2;o++)
		{
			printf("%d",c[i][o]);
		}
	   printf("\n");
	}
}
