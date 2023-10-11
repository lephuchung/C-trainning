#include <stdio.h>
#include <math.h>
int main()
{
	//giai phuong trinh bac hai: ax^2+bx+c=0
	//khai bao bien
	float a, b, c, x, delta, x1, x2;
	//nhap du lieu
	printf("nhap vao cac he so cho phuong trinh bac 2:");
	printf("\nhe so a la ");
	scanf("%f", &a);
	printf("he so b la ");
	scanf("%f", &b);
	printf("he so c la ");
	scanf("%f", &c);
	//thuat toan va dien dap an
	if (a!=0)
	{
		delta=(b*b)-4*a*c;
		if (delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("phuong trinh co 2 nghiem phan biet la x1=%f; x2=%f", x1, x2);
		}
		else if (delta==0)
		{
			x=-b/(2*a);
			printf("phuong trinh co nghiem kep la x=%f",x);
		}
		else 
		{
			printf("phuong trinh vo nghiem");
		}
	}
	else
	{
		if (b!=0)
		{
			x=-c/b;
			printf("phuong trinh bac nhat co nghiem la x=%f", x);
		}
		else
		{
			if(c==0)
			{
				printf("phuong trinh co vo so nghiem");
			}
			else
			{
				printf("phuong trinh vo nghiem");
			}
		}
	}
}
