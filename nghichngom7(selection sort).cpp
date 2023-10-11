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
void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)	
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) 
			{
				swap(a[i],a[j]);
			}
			
		}	
	}
}
int main()
{
	//selection sort
	//khai bao bien, mang
	int n;
	int a[1000];
	//nhap du lieu
	do
	{
		printf("nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	nhapmang(a,n);
	inmang(a,n);
	selectionsort(a,n);
	inmang(a,n);
}

