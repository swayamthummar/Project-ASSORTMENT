#include<stdio.h>
main()
{
	int a[10][10],b[10][10],n_1,n_2,i,o;
	
	printf("Enter the value of row->");
	scanf("%d",&n_1);
	printf("Enter the value of column->");
	scanf("%d",&n_2);
	
	printf("Enter element for metrix:-\n");

	for(i=0;i<n_1;i++)
	{
	   for(o=0;o<n_2;o++)
	   {
    		printf("a[%d][%d]->",i,o);
	    	scanf("%d",&a[i][o]);
		    b[i][o]=a[i][o];
       }
    }
	printf("Metrix:  ");
    printf("Transpose:\n");
    
	for(i=0;i<n_1;i++)
	{
	   for(o=0;o<n_2;o++)
		{
			printf("%d",a[i][o]);
		}
		printf("\t ");
		
		for(o=0;o<n_2;o++)
		{
			printf("%d",b[i][o]);
		}
		printf("\n");
	}
}

