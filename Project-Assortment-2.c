#include<stdio.h>
main()
{
	int a[100],largest,second_largest,n,i;
	
	printf("Enter the value of N->");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf(" The Second Largest Number->");
		
	   for(i=0;i<n;i++)
	   {
		 if(largest<a[i])
		 {
			second_largest=largest;
			largest=a[i];
		 }
	     else if(second_largest<a[i])
		 {
			second_largest=a[i];
		 }
	   }
	printf("%d",second_largest);
		
		
}
