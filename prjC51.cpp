#include <stdio.h>

void Nhapmang(int a[101][101], int &m, int &n)
{
	do
	{
		printf("Nhap vao so hang va so cot cua ma tran (1<=m,n<=100) lan luot la: ");
		scanf("%d %d", &m, &n);
		if(m<1||m>100||n<1||n>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<1||m>100||n<1||n>100);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void Inmang(int a[101][101], int m, int n)
{
	printf("Ma tran nhap vao la:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	//nhap va xuat mang 2 chieu
	//khai bao bien 
	int a[101][101];
	int m,n;
	//nhap du lieu
	Nhapmang(a,m,n);
	//goi ham va dien dap an
	Inmang(a,m,n);
}
