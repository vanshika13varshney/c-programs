#include<stdio.h>
#include<conio.h>
void main()
{
  double principal=4000;
  double rate=10;
  double time=4;
  double amount=principal*((pow((1+rate/100),time)));
  double CI=amount=principal;
  printf("compound interest is%f",CI);
  getch();
  clrscr();
}