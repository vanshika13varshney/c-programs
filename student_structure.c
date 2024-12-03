#include<stdio.h>
int main()
{
 struct student{
 	int roll_no;
 	float marks;
 	char name[20];
 	int no;
 };
 struct student stud={1,89.4,"vanshika",545665464
 };
 printf("roll no.:%d\nname:%s\nmarks:%2f\nmobileno.:%d\n",stud.roll_no,stud.name,stud.marks,stud.no);
 return 0;
}
