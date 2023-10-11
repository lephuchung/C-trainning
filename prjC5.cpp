#include <stdio.h>
int main()
{
	float a,b;
	printf("nhap vao du lieu cho 2 so a va b: ");
	scanf("%f %f", &a, &b);
	float tong = a + b;
	printf("\n%f + %f = %f", a, b, tong);
	float hieu = a - b;
	printf("\n%f - %f = %f", a, b, hieu);
	float tich = a * b;
	printf("\n%f * %f = %f", a, b, tich);
	float thuong = a / b;
	printf("\n%f / %f = %f", a, b, thuong);
	float phan_du = ((int)a) % ((int)b);
	printf("\n%f chia lay du %f = %f", a, b, phan_du);
	a++;
	printf("\n a++ = %f",a);
	b--;
	printf("\n b-- = %f",b);
}
