#include <stdio.h>

void nhapmang(int a[], int &n)
{
	do
	{
		printf("nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n)
{
	printf("mang a la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void chendaumang(int a[1000], int &n)
{
	int size=sizeof(a)/sizeof(a[0]);
	int m;
	if(n==size)
	{
		printf("mang dat den gioi han, khong the chen them!\n");
	}
	else
	{
		printf("nhap vao so muon chen them: ");
		scanf("%d", &m);
		n++;
		for(int i=1;i<n;i++)
		{
			a[n-i]=a[n-i-1];
		}
		a[0]=m;
	}
}
void chencuoimang(int a[1000], int &n)
{
	int size=sizeof(a)/sizeof(a[0]);
	int m;
	if(n==size)
	{
		printf("mang da dat den gioi han, khong the dien them!\n");
	}
	else
	{
		printf("nhap vao so muon chen: ");
		scanf("%d", &m);
		n++;
		a[n-1]=m;
	}
}
void chenvaovitrithuk(int a[1000], int &n)
{
	int m,k;
	int size=sizeof(a)/sizeof(a[0]);
	if(n==size)
	{
		printf("mang da dat den gioi han, khong the dien them!\n");	
	}
	else
	{
		printf("nhap vao so muon dien them la: ");
		scanf("%d", &m);
		do
		{
			printf("nhap vao vi tri muon dien them (0<=k<=n-1) la: ");
			scanf("%d", &k);
		}
		while(k<0||k>n);
		n++;
		for(int i=k;i<n;i++)
		{
			a[n-i+k-1]=a[n-i+k-2];
		}
		a[k-1]=m;
	}
}
int main()
{
	//lam menu trong C 
	//khai bao bien, mang
	int n;
	char gt;
	int a[1001];
	int dk1, dk2, dk3;
	do
	{
		printf("1 - nhap mang\n");
		printf("2 - xuat mang\n");
		printf("3 - chen dau mang\n");
		printf("4 - chen cuoi mang\n");
		printf("5 - chen vao vi tri thu k\n");
		printf("x - thoat\n");
		scanf(" %c", &gt);
		if(gt=='1')
		{
			nhapmang(a,n);
		}
		if(gt=='2')
		{
			inmang(a,n);
		}
		if(gt=='3')
		{
			chendaumang(a,n);
		}
		if(gt=='4')
		{
			chencuoimang(a,n);
		}
		if(gt=='5')
		{
			chenvaovitrithuk(a,n);
		}
	}
	while(gt!='x');
}
