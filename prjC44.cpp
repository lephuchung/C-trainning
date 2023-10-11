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
void inmang(int a[], int n)
{
	printf("mang a la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void xoa1phantu(int a[], int &n, int xoa)
{
	for(int i=xoa;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void xoa1giatri(int a[], int &n)
{
	int xoa;
	printf("nhap gia tri muon xoa: ");
	scanf("%d", &xoa);
	for(int i=0;i<n;i++)
	{
		if(a[i]==xoa)
		{
			xoa1phantu(a,n,i);
		}
	}
}
int main()
{
	//xoa 1 phan tu trong mang duoc chon tu ban phim
	//xoa 1 gia tri trong mang duoc chon tu ban phim
	//khai bao bien
	int n,x,b,c;
	int a[1001];
	//nhap du lieu
	nhapmang(a,n);
	//goi ham va dien dap an 
	printf("ban co muon xoa phan tu nao khong?\n");
	do
	{
		printf("neu co nhan 1, neu khong nhan 0 ");	
		scanf("%d", &b);
	}
	while(b<0||b>1);
	if(b==1)
	{
		do
		{
			printf("nhap phan tu muon xoa (0<=x<n): ");
			scanf("%d", &x);
		}
		while(x<0||x>n-1);
		xoa1phantu(a,n,x);
	}
	inmang(a,n);
	printf("ban co muon xoa gia tri nao khong?\n");
	
	do
	{
		printf("neu co nhan 1, neu khong nhan 0 ");
		scanf("%d", &c);
	}
	while(c<0||c>1);
	if(c==1)
	{
		xoa1giatri(a,n);
	}
	inmang(a,n);
}
