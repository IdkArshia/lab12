#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	typedef struct{
		int ID;
		char name[20];
		int salary;
	}employee;
	
	employee *ptr;
	ptr=(employee*)malloc(5*sizeof(employee));
	// get employee data
	for(i=0;i<5;i++)
	{
		printf("enter name for employee %d: ",i+1);
		fgets(ptr[i].name,sizeof(ptr[i].name),stdin);
		printf("enter ID for employee %d:",i+1);
		scanf("%d",&ptr[i].ID);
		printf("enter salary for employee %d:",i+1);
		scanf("%d",&ptr[i].salary);
		getchar();
		}
	employee temp;
	for(i=4;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(ptr[j+1].salary>ptr[j].salary)
		  {
			  temp=ptr[j];
			  ptr[j]=ptr[j+1];
			  ptr[j+1]=temp;
		  }
		}
		
	}
	printf("\n\tsorted list:\n");
	for(i=0;i<5;i++)
	{
		printf("Name: %s",ptr[i].name);
		printf("ID: %d\n",ptr[i].ID);
		printf("Salary: Rs%d\n",ptr[i].salary);
		printf("\n");
		
	}
	
}