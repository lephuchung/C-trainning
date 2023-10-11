#include <stdio.h>
int main()
{
	//bai1:nhap vao so n roi kiem tra xem no co lon hon 10 khong.
	//bai2:nhap vao so n roi kiem tra xem no la chan hay le.
	/*bai3:nhap vao gio va cho biet do la buoi sang hay chieu hay toi.
			1h->11h:sang
			12h->18h:chieu
			19h->24h:toi*/
	//khai bao bien
	int n, h;
	//nhap du lieu
	printf("nhap vao so nguyen n=");
	scanf("%d", &n);
	printf("nhap vao so gio muon xem h=");
	scanf("%d", &h);
	//thuat toan va dien dap an bai 1 
	if(n>10)
	{
		printf("\nn lon hon 10");
	}
	else 
	{
		printf("\nn khong lon hon 10 ");
	}
	//thuat toan va dien dap an bai 2
	if(n%2==0)
	{
		printf("\nn la so chan");
	}
	else 
	{
		printf("\nn la so le");
	}
	//thuat toan va dien dap an bai 3
	if((1<=h)&&(h<=11))
	{
		printf("\ndang la buoi sang");
	}
	else if((12<=h)&&(h<=18))
	{
		printf("\ndang la buoi chieu");
	}
	else
	{
		printf("\ndang la buoi toi");
	}
}
