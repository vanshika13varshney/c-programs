#include<stdio.h>
#include<conio.h>
void  swap(int,int);
void main()
{
	 int x=10,y=25;
	 printf("values before swapping :%d %d \n",x,y);
	 swap(x,y);
	 getch();
	 
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("values after swapping :%d %d \n",x,y);
}
