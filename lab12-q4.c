#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter size of array: ");
	scanf("%d",&n);
	int *ptr;
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+*(ptr+i);
		
	}
	printf("list:");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));	
	}
	printf("\n");
	printf("sum= %d",sum);
	ptr=(int*)realloc(ptr,n*2*sizeof(int));
	printf("\nenter more values:\n");
	for(i=n;i<(2*n);i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+*(ptr+i);
		
	}
	printf("updated list:");
	for(i=0;i<(2*n);i++)
	{
		printf("%d",*(ptr+i));
		
	}
	printf("\nupdated sum=%d",sum);

	
}