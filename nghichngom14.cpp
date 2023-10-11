#include <stdio.h>
void binary(int x) 
{
	if (x==0) return;
	else {
		int u = x%2;
		binary(x/2);
		printf("%d",u);
	}
}
int main() 
{
	//chuyen he 10 ve he 2
	//khai bao bien
	int x;
	//goi ham va dien dap an
	INTEGER:
	printf("Nhap so bat ky(x>0): ");
	scanf("%d", &x);
	if (x<0) {
		printf("Ban phai nhap so lon hon 0");
		goto INTEGER;
	}
	binary(x);
}
	
	


