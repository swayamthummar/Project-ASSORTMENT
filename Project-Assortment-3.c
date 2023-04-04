#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5},i,o,l,n=4;
	int length=sizeof(a)/sizeof(a[0]);

	printf("The value fo Array->\n");
	
	for(i=0;i<length;i++)
	{
		printf("%d \n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=a[length-1];
		
	   for(o=length-1;o>0;o--)
	   {
		  a[o]=a[o-1];
	   }
		a[0]=l;
	}
	printf("Right Rotation of Array->\n");
	
	for(i=0;i<length;i++)
	{
		printf("%d \n",a[i]);
	}
}
