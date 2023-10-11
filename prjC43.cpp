#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("nhap vao so luong phan tu (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	return max;
}
int min(int a[], int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
		}
	}
	return min;
}
int max2(int a[], int n)
{
	int max2=min(a,n);
	for(int i=0;i<n;i++)
	{
		if(max2<=a[i])
		{
			if(max(a,n)!=a[i])
			{
				max2=a[i];
			}
		}
	}
	return max2;
}
int min2(int a[], int n)
{
	int min2=max(a,n);
	for(int i=0;i<n;i++)
	{
		if(min2>=a[i]&&a[i]!=min(a,n))
		{
			min2=a[i];
		}
	}
	return min2;
}
int main()
{
	//tim phan tu lon thu 2 hoac phan tu nho thu 2 cua mang
	//khai bao bien, mang
	int n;
	int a[1001];
	//nhap du lieu 
	nhapmang(a,n);
	//goi ham va dien dap an
	printf("phan tu lon thu 2 la: %d\n", max2(a,n));
	printf("phan tu nho thu 2 la: %d", min2(a,n));
}
