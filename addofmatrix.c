#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,Sum;
	printf("Enter elements in matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf(" Addition of matrix row wise:\n");
	for(i=0;i<3;i++)
	{    
	    sum=0;
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
		printf(" Row %d addition= %d\n",(i+1),Sum);
     	}
    	printf("\n");
    
	}
	return 0;
}
