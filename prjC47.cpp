#include <stdio.h>
#include <conio.h>
void nhapmang(int a[], int &n)
{
	do
	{
		printf("nhap vao phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("[%d]=",i);
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
void swap(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void sort(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				swap(a[j-1],a[j]);
			}
		}
	}
}
void tronmang(int a[],int n, int b[], int m, int c[], int &k)
{
	k=n+m;
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(int i=n;i<k;i++)
	{
		c[i]=b[i-n];
	}
}

int main()
{
	//tron 2 mang 1 chieu tang dan
	//khai bao bien
	int n,m,k;
	char gt;
	int a[1001], b[1001], c[2003];
	//menu
	do
	{
		printf("MENU\n");
		printf("1 - nhap vao du lieu mang 1\n");
		printf("2 - nhap vao du lieu mang 2\n");
		printf("3 - sap xep 2 mang\n");
		printf("4 - tron 2 mang\n");
		printf("5 - sap xep mang tron\n");
		printf("6 - in mang 1\n");
		printf("7 - in mang 2\n");
		printf("8 - in mang tron\n");
		printf("x - thoat khoi chuong trinh\n");
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
			sort(a,n);
			sort(b,m);
		}
		if(gt=='4')
		{
			tronmang(a,n,b,m,c,k);
		}
		if(gt=='5')
		{
			sort(c,k);
		}
		if(gt=='6')
		{
			inmang(a,n);
		}
		if(gt=='7')
		{
			inmang(b,m);
		}
		if(gt=='8')
		{
			inmang(c,k);
		}
	}
	while(gt!='x');
}
