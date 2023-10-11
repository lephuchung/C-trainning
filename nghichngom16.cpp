#include <stdio.h>
#include <limits.h>
#include <math.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||n>1000) printf("Nhap loi, xin moi nhap lai!\n");
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n)
{
	int kq=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(kq<a[i])
		{
			kq=a[i];
			continue;
		}
		else continue;
	}
	return kq;
}
int min(int a[], int n)
{
	int kq=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(kq>a[i])
		{
			kq=a[i];
			continue;
		}
		else continue;
	}
	return kq;
}
int main()
{
	//tim gia tri x sao cho doan [-x;x] chua tat ca cac gia tri trong mang
	//khai bao bien
	int a[1001];
	int n, x;
	//goi ham, giai thuat va dien dap an
	nhapmang(a,n);
	if(abs(max(a,n))>abs(min(a,n)))
	{
		x=abs(max(a,n));
	}
	else
	{
		x=abs(min(a,n));
	}
	printf("khoang chua du mang a la: [%d;%d]\n", -x, x);
}
