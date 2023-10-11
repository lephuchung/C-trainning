#include <stdio.h>
int demtrung(int x[], int n, int k)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(k==x[i]) dem++;
	}
	return dem;
}
int main()
{
	//dem so lan lap cua 1 phan tu duoc chon tu ban phím trong mot mang
	//khai bao bien, mang
	int n,x;
	int a[1001];
	//nhap vao du lieu
	do
	{
		printf("nhap vao so phan tu (1<=n<=1000) la: ");
		scanf("%d", &n);
	}
	while(n<1||1000<n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("so muon kiem tra trung lap trong mang la: ");
	scanf("%d", &x);
	//goi ham va dien dap an 
	printf("so lan phan tu %d xuat hien trong mang la %d", x, demtrung(a,n,x));
}
