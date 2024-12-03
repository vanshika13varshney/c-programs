#include<stdio.h>
int main()
{
	char j[5];
	printf("enter string:\n");
	scanf("%[^\n]s",j);
	printf("length of string by functions:%d\n",strlen(j));
	return 0;
}

