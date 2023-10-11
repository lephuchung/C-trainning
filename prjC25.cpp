#include <stdio.h>
int main()
{
	//tinh giai thua cua 1 so nguyen duong n nhap tu ban phim
	//khai bao bien 
	int n,giai_thua=1,i=1;
	//thuat toan va dien dap an
	do
	{
		printf("nhap vao so nguyen duong n la: ");
		scanf("%d", &n);
	}
	while(n<0);
	for(i=1;i<=n;i++)
	{
		giai_thua*=i;
	}
	printf("giai thua cua %d la %d ", n, giai_thua);
}
