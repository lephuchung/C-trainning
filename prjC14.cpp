#include <stdio.h>
int main()
{
	//giai phuong trinh bac nhat ax+b=0.
	//khai bao bien
	float a,b,x;
	//nhap du lieu
	printf("nhap vao he so cho phuong trinh bac nhat:");
	printf("\nhe so a la ");
	scanf("%f", &a);
	printf("he so b la ");
	scanf("%f", &b);
	//thuat toan va dien dap an
	if(a!=0)
	{
		x=-b/a;
		printf("/nnghiem cua phuong trinh la x=%f", x);
	}
	else if (a==0)
	{
		if (b==0)
		{
			printf("phuong trinh co vo so nghiem");
		}
		else 
		{
			printf("phuong trinh vo nghiem");
		}
	}
}
