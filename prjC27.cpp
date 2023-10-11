#include <stdio.h>
#include <math.h>

int checkSNT(int x)
{
	int i,l=0;
	if(x<=1) return 0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			l++;
		}
	}
	if(l<=2) return 1;
	else return 0;
}
int main()
{
	//kiem tra so nguyen to
	//khai bao bien 
	int n;
	//nhap du lieu
	printf("nhap so nguyen n muon kiem tra la: ");
	scanf("%d", &n);
	//goi ham
	int kq=checkSNT(n);
	//dien dap an
	printf("so %d %s so nguyen to", n, (kq==1)?"la":"khong la");
}
