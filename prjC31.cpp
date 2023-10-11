#include <stdio.h>

void swap_thamtri(int a,int b)
{
	int tam=a;
	a=b;
	b=tam;
}
void swap_thamchieu(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
int main()
{
	//truyen tham tri va truyen tham chieu
	//khai bao bien
	int a,b;
	//nhap du lieu
	printf("nhap vao so a la: ");
	scanf("%d", &a);
	printf("nhap vao so b la: ");
	scanf("%d", &b);
	//goi ham va dien dap an
	printf("truoc khi hoan vi a=%d, b=%d\n",a,b);
	swap_thamtri(a,b);
	printf("sau hoan vi bang truyen tham tri, a=%d, b=%d\n",a,b);
	swap_thamchieu(a,b);
	printf("sau hoan vi bang truyen tham chieu, a=%d, b=%d\n",a,b);
}
