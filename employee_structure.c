#include<stdio.h>
int main()
{
	struct employee{
		int id;
		float salary;
		char name[50];
		char dept [15];
	};
	struct employee emp={500,150000.00,"vanshika","development"};
	printf("employee id:%d\nemployee name:%s\nsalary:%.2f\ndepartment:%s\n",emp.id,emp.name,emp.salary,emp.dept);
	
	return 0;
}
