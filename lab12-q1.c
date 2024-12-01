#include<stdio.h>
int main()
{
	int a,i;
	char arr[50];
	printf("Enter any string: ");
	gets(arr);
	char *ptr=&arr;
	a=strlen(arr);
	for(i=a;i>=0;i--)
	{
		printf("%c",*(ptr+i));
	}
	
}