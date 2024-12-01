#include<stdio.h>
int main()
{
	int i,j;
	char arr[20];
	printf("enter a string: ");
	fgets(arr,20,stdin);
	char *ptr=&arr;
	for(i=0;i<20;i++)
	{
		if(*(ptr+i)=='\0')
		{
			break;
		}
	}
	int len=i-1;
	printf("length of string is %d",len);
	for(j=len;j>=0;j--)
	{
		printf("%c",*(ptr+j));
	}
	char arr2[20];
	char a=' ';
	int x=0;
	printf("\nenter another array to concatinate: ");
	fgets(arr2,20,stdin);
	char *ptr2=&arr2;
	while(a!='\0')
	{
		a= *(ptr2+x);
		*(ptr+len)=a;
		x=x+1;
		len=len+1;
	}
	printf("%s",arr);
}