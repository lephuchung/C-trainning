#include <stdio.h>
int main()
{
	//in ra chu va ma so tu bang ma ASCII
	//khai bao bien
	char ky_tu;
	//thuat toan va dien dap an
	for(ky_tu=65;ky_tu<=90;ky_tu++)
	{
		printf("%d - %c\n", ky_tu, ky_tu);
	}
}
