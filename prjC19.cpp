#include <stdio.h>
#include <math.h>
int main()
{
	//kiem tra tam giac can, tinh dien tich, chu vi tam giac biet toa do 3 dinh
	//khai bao bien
	float xa,ya,xb,yb,xc,yc,S,p,AB,BC,CA,chuvi;
	//nhap du lieu
	printf("nhap vao toa do cua diem A: ");
	scanf("%f %f", &xa, &ya);
	printf("nhap vao toa do cua diem B: ");
	scanf("%f %f", &xb, &yb);
	printf("nhap vao toa do cua diem C: ");
	scanf("%f %f", &xc, &yc);
	//thuat toan va dien dap an
	AB=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
	BC=sqrt(pow(xc-xb,2)+pow(yc-yb,2));
	CA=sqrt(pow(xa-xc,2)+pow(ya-yc,2));
	if (AB+BC>CA && BC+CA>AB && CA+AB>BC)
	{
		printf("day la mot tam giac");
		if(AB==BC||BC==CA||CA==AB)
		{
			printf("\nday la tam giac can");
		}
		else
		{
			printf("\nday khong la tam giac can");
		}
		p=(AB+BC+CA)/2;
		chuvi=p*2;
		S=sqrt(p*(p-AB)*(p-BC)*(p-CA));
		printf("\ndien tich tam giac la: %f", S);
		printf("\nchu vi tam giac la: %f", chuvi);
	}
	else
	{
		printf("\nday khong phai tam giac");
	}
}
