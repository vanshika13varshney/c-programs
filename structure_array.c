#include<stdio.h>
int main()
{
 struct student{
 	int roll_no;
 	float total_marks;
 	char name[20];
 };
 struct student stud[100];
 int n,i;
 printf("enter the total number of students:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	printf("enter the details of student %d:\n",(i+1));
 	printf("name:\n");
 	scanf("%s",&stud[i].name);
 	printf("roll no.:\n");
 	scanf("%d",&stud[i].roll_no);
 	printf("total marks:\n");
 	scanf("%f",&stud[i].total_marks);
 }
 printf("STUDENT DETAILS:\n\n\n");
 for(i=0;i<n;i++)
 {
 	printf("roll no.:%d\nname:%s\nmarks:%.2f\n\n",stud[i].roll_no,stud[i].name,stud[i].total_marks);
}
return 0;
 	
 }
