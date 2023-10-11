#include <stdio.h>
int main()
{
	int a,b;
	printf("hay nhap vao 2 so nguyen khac nhau");
	printf("\nnhap vao so nguyen a= ");
	scanf("%d", &a);
	printf("nhap vao so nguyen b= ");
	scanf("%d", &b);
	printf("so lon hon la %s", (a>b)?"a":"b");
	printf("\nso nho hon la %s", (a<b)?"a":"b");
}
