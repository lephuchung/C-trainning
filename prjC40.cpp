#include <stdio.h>
void printmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
void swap(int &a, int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void sapxepTang(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int vitrinhonhat=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				vitrinhonhat=j;
			}
		}
		swap(a[i],a[vitrinhonhat]);
	}
}
void sapxepGiam(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		int vitrilonnhat=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				vitrilonnhat=j;
			}
		}
		swap(a[i],a[vitrilonnhat]);
	}
}
int main()
{
	//sap xep mot mang theo chieu tang hoac giam
	//khai bao bien mang
	int n;
	int a[1001];
	//nhap du lieu
	do
	{
		printf("nhap vao so phan tu cua mang (0<n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	//goi ham va dien dap an
	printf("sap xep tang: ");
	sapxepTang(a,n);
	printmang(a,n);
	printf("\n");
	printf("sap xep giam: ");
	sapxepGiam(a,n);
	printmang(a,n);
}
