#include<stdio.h>
int main()
{
	int a[3][3],i,j,Sum=0;
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements in array are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		Sum+= a[i][j];
		printf(" %d ",a[i][j]);
     	}
    	printf("\n");
    }
    printf("Sum of all elements=%d",Sum);
    return 0;
}
