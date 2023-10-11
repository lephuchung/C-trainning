#include <stdio.h>
int main()
{
	//ve hinh tam giac vuong can
	//khai bao bien 
	int n;
	//nhap du lieu
	do
	{
		printf("nhap vao do dai canh goc cua hinh tam giac: ");
		scanf("%d", &n);	
	}
	while(n<=0);
	//thuat toan va dien dap an
	//tam giac vuong can 1
	printf("tam giac vuong trong goc phan tu thu 1 la: \n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<=j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//tam giac vuong can 2
		printf("tam giac vuong trong goc phan tu thu 2 la: \n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n-j-1;i++)
		{
			printf("  ");
		}
		for(int i=0;i<=j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//tam giac vuong can 3
	printf("tam giac vuong trong goc phan tu thu 3 la: \n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<j;i++)
		{
			printf("  ");
		}
		for(int i=0;i<n-j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//tam giac vuong can 4
	printf("tam giac vuong trong goc phan tu thu 4 la: \n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n-j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
