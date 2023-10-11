#include <stdio.h>
int main()
{
	//bien dich ma morse
	//khai bao bien
	int n,i=0;
	char c;
	//nhap du lieu
	printf("nhap vao chu muon bien dich: ");
	//scanf("%c", &c);
	//thuat toan
	while(i<1000)
	{
		scanf("%c", &c);
		n= c-96;
		switch(n)
		{
			case 1:
			{
				printf(".- ");
				break;
			}
			case 2:
			{
				printf("-... ");
				break;
			}
			case 3:
			{
				printf("-.-. ");
				break;
			}
			case 4:
			{
				printf("-.. ");
				break;
			}
			case 5:
			{
				printf(". ");
				break;
			}
			case 6:
			{
				printf("..-. ");
				break;
			}
			case 7:
			{
				printf("--. ");
				break;
			}
			case 8:
			{
				printf(".... ");
				break;
			}
			case 9:
			{
				printf(".. ");
				break;
			}
			case 10:
			{
				printf(".--- ");
				break;
			}
			case 11:
			{
				printf("-.- ");
				break;
			}
			case 12:
			{
				printf(".-.. ");
				break;
			}
			case 13:
			{
				printf("-- ");
				break;
			}
			case 14:
			{
				printf("-. ");
				break;
			}
			case 15:
			{
				printf("--- ");
				break;
			}
			case 16:
			{
				printf(".--. ");
				break;
			}
			case 17:
			{
				printf("--.- ");
				break;
			}
			case 18:
			{
				printf(".-. ");
				break;
			}
			case 19:
			{
				printf("... ");
				break;
			}
			case 20:
			{
				printf("- ");
				break;
			}
			case 21:
			{
				printf("..- ");
				break;
			}
			case 22:
			{
				printf("...- ");
				break;
			}
			case 23:
			{
				printf(".-- ");
				break;
			}
			case 24:
			{
				printf("-..- ");
				break;
			}
			case 25:
			{
				printf("-.-- ");
				break;
			}
			case 26:
			{
				printf("--.. ");
				break;
			}
			default:
			{
				printf("/");
				break;
			}
		}
		i++;
	}
}
