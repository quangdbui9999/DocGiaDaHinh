#pragma once
#include "Ngay.h"
#include "DocGia.h"

#include <iostream>
#include <string>
using namespace std;

class HuuTri : public DocGia
{
public:
	HuuTri(void);
	~HuuTri(void);
	void Nhap(int loai);
	void Xuat();
	float TinhPhiDocGia(int thang);
	int LoaiDocGia();
};