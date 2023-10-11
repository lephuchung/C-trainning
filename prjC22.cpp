#include <stdio.h>
int main()
{
	//nhap n tu ban phim, tinh tong cac so tu 1 den n
	//khai bao bien
	int n,i1=0,tong1=0,i2,tong2=0;
	//nhap du lieu
	printf("nhap vao so n la ");
	scanf("%d", &n);
	//thuat toan va dien dap an
	while(i1<=n)
	{
		tong1+=i1;
		i1++;
	}
	printf("tong cac so tu 1 den n la: %d", tong1);
	for(i2=0;i2<=n;i2++)
	{
		tong2+=i2;
	}
	printf("\ntong cac so tu 1 den n la: %d", tong2);
}
