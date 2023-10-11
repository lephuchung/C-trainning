#include <stdio.h>
#include <math.h>

void nhapmang(float a[], int &n)
{
	do
	{
		printf("Nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
		if(n<1||1000<n) printf("Nhap khong hop le, moi nhap lai!\n");
	}
	while(n<1||1000<n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f", &a[i]);
	}
}
void timxanhat(float x, float a[], int n)
{
	float k;
	int vitri=-1;
	for(int i=0;i<n;i++)
	{
		if(k>fabs(a[i]-x))
		{
			continue;
		}
		else
		{
			k=fabs(a[i]-x);
			vitri=i;
		}
	}
	printf("khoang cach lon nhat la: %.2f\n", k);
	printf("so co gia tri cach xa nhat la a[%d]", vitri);
}
int main()
{
	//nhap vao so x va mot mang a, tim trong a phan tu co gia tri xa x nhat
	//khai bao bien 
	float a[1001];
	int n;
	float x;
	//nhap du lieu
	printf("Nhap vao so x muon xet la: ");
	scanf("%f", &x);
	nhapmang(a,n);
	//goi ham va dien dap an
	timxanhat(x,a,n);
}
