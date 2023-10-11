#include <stdio.h>

void inmang(int a[], int n)
{
	printf("in mang: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void innguocmang(int a[], int n)
{
	printf("in nguoc mang: ");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void swap(int &a, int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void daonguocmang(int a[], int n)
{
	for(int i=0;i<n/2;i++)
	{
		swap(a[i],a[n-i-1]);
	}
	printf("mang sau dao la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	//in ra mot mang mot chieu
	//in nguoc mot mang mot chieu
	//dao nguoc mang 1 chieu
	//khai bao bien, mang
	int n;
	int a[1001];
	//nhap du lieu 
	do
	{
		printf("nhap vao so phan tu cua mang (0<n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<=0||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	inmang(a, n);
	innguocmang(a, n);
	daonguocmang(a, n);
	inmang(a,n);
}
