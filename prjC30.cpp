#include <stdio.h>

int checknhuan(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0)) return 1;
	return 0;
}
int checksongaycuathang(int m,int y)
{
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			return 31;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			return 30;
		}
		case 2:
		{
			if(checknhuan(y)==1) return 29;	
			else return 28;
		}
	}
	printf("\n");
}
int sttngay(int d, int m, int y)
{
	int kq=d,i;
	for(i=1;i<m;i++)
	{
		kq+=checksongaycuathang(i,y);
	}
	return kq;
}
void ngaytruoc(int d, int m, int y)
{
	if(d==1)
	{
		if(m==1)
		{
			if(y==1) 
			{
			printf("khong ton tai ngay can tim\n");
			}
			else
			{
				d=31;
				m=12;
				y--;
				printf("ngay truoc la: %d %d %d \n",d,m,y);
			}
		}
		else
		{
			d=checksongaycuathang(m-1,y);
			m--;
			printf("ngay truoc la: %d %d %d \n",d,m,y);
		}
	}
	else 
	{
		d--;
		printf("ngay truoc la: %d %d %d \n",d,m,y);
	}
}
void ngaysau(int d, int m, int y)
{
	if(d==checksongaycuathang(m,y))
	{
		if(m==12)
		{
			d=1;
			m=1;
			y++;
		}
		else
		{
			d=1;
			m++;
		}
	}
	else 
	{
		d++;
	}
	printf("ngay sau do la %d %d %d", d, m, y);
}
int main()
{
	//khai bao bien
	int d,m,y;
	//nhap du lieu
	do
	{
		printf("nhap ngay thang nam: ");
		scanf("%d%d%d", &d,&m,&y);
	}
	while(d<1||d>31||m<1||m>12||y<1);
	//kiem tra so ngay trong 1 thang
	printf("so ngay cua thang %d la %d \n", m,checksongaycuathang(m,y));
	//tinh ngay bao nhieu trong nam
	printf("so thu tu cua ngay nay trong nam la: %d \n",sttngay(d,m,y));
	//tim ngay truoc ngay vua nhap
	ngaytruoc(d,m,y);
	//tim ngay sau ngay vua nhap
	ngaysau(d,m,y);
}
