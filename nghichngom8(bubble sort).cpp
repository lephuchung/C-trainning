#include <stdio.h>
void nhapmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
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
void swap(int &a, int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void bubblesort(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j], a[j-1]);
			}
		}
	}
}
int main()
{
	//selection sort
	//khai bao bien mang
	int a[1001];
	int n;
	//nhap du lieu
	do 
	{
		printf("nhap vao so phan tu (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	nhapmang(a,n);
	//goi ham va dien dap an
	inmang(a,n);
	bubblesort(a,n);
	inmang(a,n);
}
