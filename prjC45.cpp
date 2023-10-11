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
	//chen phan tu vao mang mot chieu vao cac vi tri dau, cuoi hoac vi tri k cua mang 
	//khai bao bien, mang
	int n;
	int a[1001];
	int dk1, dk2, dk3;
	//nhap du lieu
	nhapmang(a,n);
	inmang(a,n);
	//goi ham va dien dap an
	printf("ban co muon chen them phan tu nao vao dau mang khong?\n");
	do
	{
		printf("neu co an phim 1, neu khong an phim 0 ");
		scanf("%d", &dk1);
	}
	while(dk1<0||dk1>1);
	if(dk1==1)
	{
		chendaumang(a,n);
		inmang(a,n);
	}
	printf("ban co muon chen them phan tu nao vao cuoi mang khong?\n");
	do
	{
		printf("neu co an phim 1, neu khong an phim 0 ");
		scanf("%d", &dk2);
	}
	while(dk2<0||dk2>1);
	if(dk2==1)
	{
		chencuoimang(a,n);
		inmang(a,n);
	}
	printf("ban co muon chen them phan tu nao vao vi tri bat ki cua mang khong?\n");
	do
	{
		printf("neu co an phim 1, neu khong an phim 0 ");
		scanf("%d", &dk3);
	}
	while(dk3<0||dk3>1);
	if(dk3==1)
	{
		chenvaovitrithuk(a,n);
		inmang(a,n);
	}
}
