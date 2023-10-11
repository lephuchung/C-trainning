#include <stdio.h>
int giai_thua(int n)
{
	if(n==0||n==1) return 1;
	else
	{
		return n*giai_thua(n-1);
	}
	
}
int main()
{
	//tinh giai thua bang phuong phap de quy
	//khai bao bien
	int n;
	//nhap du lieu
	do
	{
		printf("nhap vao 1 so khong am n la: ");
		scanf("%d", &n);
	}
	while(n<0);
	printf("giai thua cua so %d la: %d", n,giai_thua(n));
}
