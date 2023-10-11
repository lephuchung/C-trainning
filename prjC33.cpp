#include <stdio.h>

void convert(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		int r=x%2;
		convert(x/2);
		printf("%d",r);
	}
}
int main()
{
	//lap trinh chuyen so nhi phan sang so thap phan
	//khai bao bien
	int n;
	//nhap du lieu
	do
	{
		printf("nhap vao so duong n muon chuyen: ");
		scanf("%d", &n);
	}
	while(n<=0);
	//goi ham va dien dap an
	convert(n);
}
