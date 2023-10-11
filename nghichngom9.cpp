#include <stdio.h>
int main()
{
	//ve tam giac floyd
	//khai bao bien
	int n;
	int k=1;
	//nhap du lieu
	do
	{
		printf("nhap vao chieu cao cua tam giac (n>0) la: ");
		scanf("%d", &n);
	}
	while(n<1);
	//giai thuat va dien dap an
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%4.d ", k);
			k++;
		}
		printf("\n");
	}
}
