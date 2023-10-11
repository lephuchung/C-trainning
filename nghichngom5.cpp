#include <stdio.h>
void bangnhan(int x)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n", x, i, x*i);
	}
}
int main()
{
	//in bang nhan
	//khai bao bien
	int n;
	//nhap du lieu
	do 
	{
		printf("nhap vao so muon in bang nhan la: ");
		scanf("%d", &n);
	}
	while(n<2||n>9);
	bangnhan(n);
}
