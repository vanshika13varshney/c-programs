#include<stdio.h>
int main()
{
//int n,m;
	//printf("enter rows and column\n");
	//scanf("%d %d",&n,&m);
	int a[2][2],b[2][2],i,j,c[2][2];
	printf("enter elements in array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the value of matrix1-%d %d-",i,j);
			scanf("%d",&a[i] [j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the value of matrix 2- %d %d-",i,j);
			scanf(" %d",&b[i] [j]);
		}
    }
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ", c[i] [j]);
		}
		printf("\n");
	}
	return 0;
}
