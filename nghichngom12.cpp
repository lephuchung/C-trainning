#include <stdio.h>
#include <math.h>

int kiemtra(int n)
{
	while(n>=1)
	{
		if(n%10!=1&&n%10!=0) 
		{
			return 0;
		}
		if(n%10==1||n%10==0)
		{
			n/=10;
		}
	}
	return 1;
}
int main()
{
	//chuyen tu he nhi phan sang he thap phan
	//khai bao bien
	int n, kq=0, i=0;
	//nhap du lieu
	printf("nhap vao day nhi phan muon chuyen: ");
	scanf("%d", &n);
	//thuat toan va dien dap an
	if(kiemtra(n)==1)
	{
		while(n>=1)
		{
			if(n%10==1)
			{
				kq+=pow(2,i);
				n/=10;
				i++;
			}
			if(n%10==0)
			{
				n/=10;
				i++;
			}
		}
		printf("%d", kq);
	}
	if(kiemtra(n)==0) printf("day khong phai day nhi phan");

}
