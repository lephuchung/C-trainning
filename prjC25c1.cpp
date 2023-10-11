#include <stdio.h>
int main()
{
	//tinh giai thua cua 1 so nguyen duong n nhap tu ban phim
	//khai bao bien 
	int n,giai_thua=1,i=1;
	//nhap du lieu
	printf("nhap vao so nguyen duong n la: ");
	scanf("%d", &n);
	//thuat toan va dien dap an
	while(n>=i)
	{
		giai_thua*=i;
		i++;
	}
	printf("giai thua cua %d la %d", n, giai_thua);
}
