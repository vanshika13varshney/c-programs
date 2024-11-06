#include<stdio.h>
void main()
{
	float f1,f2,c1,c2;
	printf("enter fahrenheit ;\n");
	scanf("%f",&f1);
	c1=((f1-32)*5)/9;
	printf("celsius=%f\n",c1);
	printf("enter celsius:\n");
	scanf("%f",&c2);
	f2=((c2*9)/5)+32;
	printf(" fahrenheit=%f",f2);
	return 0;
}
