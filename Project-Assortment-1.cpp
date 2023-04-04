#include<stdio.h>
main()
{
	int i,n,a[100];
	printf("enter the size of Array->");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]->",i);
		scanf("%d",&a[i]);
	}
	printf("The negative numbers->");
	for(i=0;i<n;i++)
	{
		if(i>a[i])
		{
			printf("%d",a[i]);
		}
	}
}
