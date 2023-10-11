#include <stdio.h>

void Nhapmang(int a[101][101], int &m, int &n)
{
	do
	{
		printf("Nhap vao so hang cua ma tran (1<=m<=100) la: ");
		scanf("%d", &m);
		if(m<1||m>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<1||m>100);
	do
	{
		printf("Nhap vao so cot cua ma tran (1<=n<=100) la: ");
		scanf("%d", &n);
		if(n<1||n>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>100);
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
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int ktra(int a[101][101], int m, int n, int x)
{
	int kq=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(x==a[i][j]) kq=1;
		}
	}
	return kq;
}
int main()
{
	//tim so x nhap tu ban phim trong ma tran 
	//khai bao bien
	int a[101][101];
	int m,n,x;
	//nhap du lieu
	Nhapmang(a,m,n);
	printf("Nhap so x muon tim la: ");
	scanf("%d", &x);
	if(ktra(a,m,n,x)==1) printf("Co x trong ma tran.\n");
	else printf("Khong co x trong ma tran.\n");
}
