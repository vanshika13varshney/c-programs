#include<stdio.h>
int main(){
	int a[2][3],i,j,b[2][3],c[2][3],k;
printf("enter array 1 elements:");
for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("enter array 2 elements:");
for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("multiply of a number:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
