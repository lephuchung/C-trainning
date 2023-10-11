#include <stdio.h>
#include <math.h>

int main()
{
	//nhap vao so x, tim f(x)
	//khai bao bien
	float x,f;
	//nhap vao du lieu
	printf("Nhap vao gia tri x la: ");
	scanf("%f", &x);
	if(-1<x && x<=1) f=5*pow(x,2)+5*x+1;
	if(x<=-1||x>1) f=fabs(x-5)/(3*(pow(x,2)+1));
	printf("%.3f", f);
}
