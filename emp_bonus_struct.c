#include<stdio.h>
int main()
{
	struct employee{
		char name [20];
		int ID;
		float salary;
		int year;
	};
	struct employee emp[100];
	int n,i;
	float bonus=0.00;
	printf("enter the total number of employees:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the details of employees:\n");
		printf("employee name:\n",emp[i].name);
		scanf("%s",&emp[i].name);
		printf("employee ID:\n");
		scanf("%d",&emp[i].ID);
		printf("employee salary:\n");
		scanf("%f",&emp[i].salary);
		printf("working till(years):\n");
		scanf("%d",&emp[i].year);
	}
	printf("\n\n");
	printf("details of the employees:\n\n\n");
	for(i=0;i<n;i++)
	{
		bonus=(emp[i].salary*10)/100;
		printf("employee name:%s\nemployee ID:%d\nsalary:%.3f\nyears of experience:%d\n",
		emp[i].name,emp[i].ID,emp[i].salary,emp[i].year);
	if(emp[i].year>5)
	{
		printf("bonus:%.3f\n\n",bonus);
	}
	else
	{
		printf("no bonus\n\n");
		
	}
	
	}
	return 0;
}
