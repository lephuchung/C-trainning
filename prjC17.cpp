#include <stdio.h>
int main()
{
	//nhap so de biet thu
	//khai bao bien
	int n;
	//nhap du lieu
	printf("nhap vao so n(tu 1 den 7): ");
	scanf("%d", &n);
	//thuat toan va dap an
	switch(n)
	{
		case 1:
			printf("Chu Nhat");
			break;
		case 2:
			printf("Thu Hai");
			break;
		case 3:
			printf("Thu Ba");
			break;
		case 4:
			printf("Thu Tu");
			break;
		case 5:
			printf("Thu Nam");
			break;
		case 6:
			printf("Thu Sau");
			break;
		case 7:
			printf("Thu Bay");
			break;
		default:
			printf("nhap so n sai quy tac");
			break;
	}
}
