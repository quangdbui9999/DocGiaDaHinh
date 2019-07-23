#include "NguoiLon.h"
#include "Ngay.h"
#include "DocGia.h"

NguoiLon::NguoiLon(void)
{
}

NguoiLon::~NguoiLon(void)
{
}

void NguoiLon::Nhap(int loai)
{
	DocGia::Nhap(2);
	cout<<"Nhap so chung minh nhan dan: ";
	flushall();
	getline(cin,socmnd);
}

void NguoiLon::Xuat()
{
	DocGia::Xuat();
	cout<<"So chung minh nhan dan: "<<this->socmnd<<endl;
}

float NguoiLon::TinhPhiDocGia(int thang)
{
	return this->sosachmuon * 2000;
}

int NguoiLon::LoaiDocGia()
{
	return 2;
}