#include <stdio.h>

void Nhapmang(int a[101][101], int &m, int &n)
{
	do
	{
		printf("Nhap vao so hang va so cot cua ma tran (1<=m<=100;1<=n<=100) lan luot la: ");
		scanf("%d %d", &m, &n);
		if(m<1||m>100||n<1||n>100) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(m<1||m>100||n<1||n>100);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]=", i, j);
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
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
}
float tbc(int a[101][101], int m, int n)
{
	float tong=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			tong+=a[i][j];
		}
	}
	float kq=tong/(m*n);
	return kq;
}
void tbcchiahet5(int a[101][101], int m, int n)
{
	float dem=0;
	float tong=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]%5==0)
			{
				tong+=a[i][j];
				dem++;
			}
			else continue;
		}
	}
	float kq;
	if(dem!=0) printf("Trung binh cong cac so chia het cho 5 la: %f\n", kq=tong/dem);
	else printf("Ca ma tran khong co so nao chia het cho 5.\n");
}
int main()
{
	//tinh trung binh cong mang 2 chieu trong lap trinh c
	//khai bao bien 
	int a[101][101];
	int m,n;
	//nhap du lieu
	Nhapmang(a,m,n);
	Inmang(a,m,n);
	//goi ham va dien dap an
	printf("Trung binh cong cua mang la: %f\n", tbc(a,m,n));
	tbcchiahet5(a,m,n);
}
