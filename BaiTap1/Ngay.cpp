#include "Ngay.h"

Ngay::Ngay(void)
{
}

Ngay::~Ngay(void)
{
}

int Ngay::ktnam()
{

	int year = this->nam;
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;//neu la nam nhuan
	return 0;//khong phai la nam nhuan
}

int Ngay::ktngay()
{
	int kt = this->ktnam();
	int date = this->ngay;
	int month = this->thang;
	int year = this->nam;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{

		if(date >= 1 && date <= 31)
			return 1;//toi da 31 ngay
		return 0;
	}
	else
	{
		if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			if(date >= 1 && date <=30)
				return 1;//toi da 30 ngay
			return 0;
		}
		else
		{
			if(kt == 1 /*nam nhuan */ && (date >= 1 && date <= 29) || kt == 0 /*nam thuong */&& (date >= 1 && date <= 28))
				return 1;
			return 0;
		}
	}
}

void Ngay::NhapNgayNguoiLon()
{
	Ngay kt;
	do
	{
		do
		{
			cout<<endl<<"Nhap ngay = ";
			cin>>this->ngay;
		}while(ngay < 1 || ngay > 31);//chi duoc nhap tu 1 den 31
		do
		{
			cout<<"Nhap thang = ";
			cin>>this->thang;
		}while(thang < 1 || thang > 12);//chi duoc nhap tu 1 den 12
		do
		{
			cout<<"Nhap nam = ";
			cin>>this->nam;
		}while(nam < 1890 || nam > 2013);
		kt.ngay = this->ngay;
		kt.thang = this->thang;
		kt.nam = this->nam;
	}while(kt.ktngay() == 0);//neu nhap sai dieu kien nhap lai cho dung
}

void Ngay::NhapNgayTreEm()
{
	Ngay kt;
	do
	{
		do
		{
			cout<<endl<<"Nhap ngay = ";
			cin>>this->ngay;
		}while(ngay < 1 || ngay > 31);//chi duoc nhap tu 1 den 31
		do
		{
			cout<<"Nhap thang = ";
			cin>>this->thang;
		}while(thang < 1 || thang > 12);//chi duoc nhap tu 1 den 12
		do
		{
			cout<<"Nhap nam = ";
			cin>>this->nam;
		}while(nam < 2001 || nam > 2013);
		kt.ngay = this->ngay;
		kt.thang = this->thang;
		kt.nam = this->nam;
	}while(kt.ktngay() == 0);
}

void Ngay::NhapNgayHuuTri()
{
	Ngay kt;
	do
	{
		do
		{
			cout<<endl<<"Nhap ngay = ";
			cin>>this->ngay;
		}while(ngay < 1 || ngay > 31);//chi duoc nhap tu 1 den 31
		do
		{
			cout<<"Nhap thang = ";
			cin>>this->thang;
		}while(thang < 1 || thang > 12);//chi duoc nhap tu 1 den 12
		do
		{
			cout<<"Nhap nam = ";
			cin>>this->nam;
		}while(nam < 1800 || nam > 1962);
		kt.ngay = this->ngay;
		kt.thang = this->thang;
		kt.nam = this->nam;
	}while(kt.ktngay() == 0);
}

void Ngay::XuatNgay()
{
	cout<<"Xuat ngay - thang - nam: ";
	if (this->ngay >= 1 && this->ngay <= 9)
	{//xuat dinh dang 01 - 09 neu ngay < 10
		cout<<"0"<<this->ngay<<"-";
	}
	else
	{
		cout<<this->ngay<<"-";
	}
	if (this->thang >= 1 && this->thang <= 9)
	{//xuat thang 01 den 09 neu thang < 10

		cout<<"0"<<this->thang;
	}
	else
	{

		cout<<this->thang;
	}
	cout<<"-"<<this->nam<<endl;
}

int Ngay::LayThang5()
{
	if (this->thang == 5)
		return 1;
	return 0;
}

int Ngay::LayNam()
{
	return this->nam;
}