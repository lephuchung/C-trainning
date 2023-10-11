#include <stdio.h>

int main()
{
	//mang mot chieu
	//khai bao mang
	int l[6];
	float p[1];
	char h[2003];
	//khai bao mang va gan gia tri ban dau
	int ph[25] = {};
	float d[4] = {1, 2, 3, 4};
	char q[2003];
	//gan du lieu vao mang
	//mang bat dau tu 0 (d0=1;d1=2;d2=3;d3=4)
	printf("0 - %f\n", d[0]);
	printf("1 - %f\n", d[1]);
	printf("2 - %f\n", d[2]);
	printf("3 - %f\n", d[3]);
	d[2]=1;
	printf("0 - %f\n", d[0]);
	printf("1 - %f\n", d[1]);
	printf("2 - %f\n", d[2]);
	printf("3 - %f\n", d[3]);
}
