#include <stdio.h>
int main()
{
	int x1, y1;
	char c, d;
	float x2, y2, z2;
	printf("\nnhap vao ki tu d ");
	scanf("%c", &d);
	printf("\nki tu d la: %c", d);
	printf("\nnhap vao gia tri nguyen x1 ");
	scanf("%d", &x1);
	printf("\ngia tri cua x1 la: %d", x1);
	printf("\nnhap vao so nguyen y1 va ki tu c ");
	scanf("%d %c", &y1, &c);
	printf("\ngia tri cua so nguyen y1 là %d va ki tu c là %c", y1, c);
	printf("\nnhap vao 3 so thuc x2 y2 z2 ");
	scanf("%f %f %f", &x2, &y2, &z2);
	printf("\nso thuc x2, y2, z2 lan luot la %f, %f, %f ", x2, y2, z2);
}
