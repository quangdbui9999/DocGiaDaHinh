#include "HuuTri.h"
#include "Ngay.h"
#include "DocGia.h"

HuuTri::HuuTri(void)
{
}

HuuTri::~HuuTri(void)
{
}

void HuuTri::Nhap(int loai)
{
	DocGia::Nhap(3);
}

void HuuTri::Xuat()
{
	DocGia::Xuat();
}

float HuuTri::TinhPhiDocGia(int thang)
{
	int tuoi = this->LayTuoi();
	int i, laisuat = 0, tien = 0;
	if (tuoi >= 51 && tuoi <= 100)
	{
		laisuat = (tuoi - 50) * 2;
		tien = (50000 * thang) - (50000 * thang * laisuat / 100);
	}
	return tien;
}

int HuuTri::LoaiDocGia()
{
	return 3;
}