#include <stdio.h>
int main()
{
	//vidu cua lenh do...while
	//khai bao bien
	int n,i;
	//nhap du lieu
	printf("nhap vao mat khau muon dat: ");
	scanf("%d", &n);
	//thuat toan va dien dap an 
	do
	{
		printf("nhap lai mat khau: ");
		scanf("%d", &i);
		printf("dat mat khau %s \n", (i==n)?"thanh cong":"that bai");
	}
	while(i!=n);
}
