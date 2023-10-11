#include <stdio.h>
#include <math.h>

int checkSNT(int x)
{
	int i,l=0;
	if(x<=1) return 0;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	//nhap vao so n tu ban phim,in ra cac so nguyen to nho hon n
	//khai bao bien
	int n,i;
	//nhap du lieu
	do
	{
		printf("nhap vao so duong n la ");
		scanf("%d", &n);
	}
	while(n<1);
	//thuat toan va dien dap an 
	for(i=1;i<=n;i++)
	{
		int kq=checkSNT(i);
		if(kq==1) printf("%d\n", i);
		else continue;
	}	
}
