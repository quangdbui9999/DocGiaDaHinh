#include "TreEm.h"
#include "Ngay.h"
#include "DocGia.h"

TreEm::TreEm(void)
{
}

TreEm::~TreEm(void)
{
}

void TreEm::Nhap(int loai)
{
	DocGia::Nhap(1);
	cout<<"Nhap ten nguoi bao lanh: ";
	flushall();
	getline(cin,nguoibaolanh);
}

void TreEm::Xuat()
{
	DocGia::Xuat();
	cout<<"Ten nguoi bao lanh: "<<this->nguoibaolanh<<endl;
}

float TreEm::TinhPhiDocGia(int thang)
{
	return 20000 * thang;
}

int TreEm::LoaiDocGia()
{
	return 1;
}