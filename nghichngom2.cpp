#include <stdio.h>
int main()
{
	//ve hinh tam giac deu bang cac dau sao
	//khai bao bien
	int n;
	//nhap du lieu
	do
	{
		printf("nhap vao do dai 1 canh la: ");
		scanf("%d", &n);
	}
	while(n<=0);
	//thuat toan va dien dap an
	//tam giac deu xuoi
	printf("tam giac deu canh n la: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//tam giac deu nguoc
	printf("tam giac deu nguoc canh n la: \n");
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(int j=0;j<n-i;j++)
		{
			printf("* ");
		}
	
		printf("\n");
	}
}

