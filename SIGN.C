#include<stdio.h>
#include<conio.h>
void main()
  {
  int num;
  printf("input a number:\n");
  scanf("%d",&num);
  if(num>0)
  printf("%d is a positive number \n",num);
  else
  printf("%d is a negative number \n",num);
  getch();
}
