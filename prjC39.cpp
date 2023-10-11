#include <stdio.h>

int max(int x[],int n)
{
	int max=x[0];
	for(int i=1;i<n;i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
		else continue;
	}
	return max;
}
int min(int x[],int n)
{
	int min=x[0];
	for(int i=1;i<n;i++)
	{
		if(min>x[i])
		{
			min=x[i];
		}
		else continue;
	}
	return min;
}
int main()
{
	//tim max min cua mot mang
	//khai bao bien mang
	int n;
	int a[1000];
	//nhap du lieu
	do
	{
		printf("nhap vao so luong cua phan tu (0<n<1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>999);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("max la %d\n", max(a,n));
	printf("min la %d\n", min(a,n));
}
