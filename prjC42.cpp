#include <stdio.h>
int timphantu(int x[], int n, int y)
{
	int kq=0;
	for(int i=0;i<n;i++)
	{
		if(y==x[i]) 
		{
			kq=1;
		}
	}
	return kq;
}
int main()
{
	//tim kiem trong mang 1 chieu
	//khai bao bien, mang
	int a[1001];
	int n,m;
	//nhap du lieu
	do
	{
		printf("nhap vao so phan tu cua mang (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<=0||n>1000);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("nhap phan tu muon tim: ");
	scanf("%d", &m);
	//goi ham va dien dap an
	if(timphantu(a,n,m)==1) 
	{
		printf("trong mang co phan tu %d \n", m);
	}
	else printf("trong mang khong co phan tu %d \n", m);
}
