#include<stdio.h>
int main()
{
	int a[20],i,x,n;
	printf("how many elements?");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	
	printf("nEnter elements to search:");
	scanf("%d",&x);
	
	for(i=0;i<n;++i)
	if(a[i]==x)
	break;
	
	if(i<n)
	printf("element found at index %d",i);
	else
	printf("elements not found");
	
	return 0;
	
	}