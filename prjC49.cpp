#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int timphantu(int x, int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(x!=a[i]) continue;
		if(x==a[i]) return 1;
	}
	return 0;
}
int ktramangcon(int a[], int n, int b[], int m)
{
	if(n>m) return 0;
	if(n<=m)
	{
		for(int i=0;i<n;i++)
		{
			if(timphantu(a[i],b,m)==1) continue;
			if(timphantu(a[i],b,m)==0) return 0;
		}
	}
	return 1;
}
int main()
{
	//kiem tra mang b co phai la mang con cua mang a khong
	//khai bao bien
	int a[1001], b[1001];
	int n, m;
	char gt;
	//menu
	do
	{
		printf("~~~~~MENU~~~~~\n");
		printf("1 - Nhap vao mang a\n");
		printf("2 - Nhap vao mang b\n");
		printf("3 - Kiem tra mang con\n");
		printf("x - Thoat khoi chuong trinh\n");
		printf("Xin moi ban chon\n");
		printf("~~~~~~~~~~~~~~\n");
		scanf(" %c", &gt);
		if(gt=='1')
		{
			nhapmang(a,n);
		}
		if(gt=='2')
		{
			nhapmang(b,m);
		}
		if(gt=='3')
		{
			if(ktramangcon(a,n,b,m)==1) printf("Mang a la mang con cua mang b\n");
			if(ktramangcon(b,m,a,n)==1) printf("Mang b la mang con cua mang a\n");
			if(ktramangcon(a,n,b,m)==0&&ktramangcon(b,m,a,n)==0) printf("Hai mang nay deu khong phai mang con cua nhau\n");
			
		}
	}
	while(gt!='x');
}
