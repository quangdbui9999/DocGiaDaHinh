#pragma once
#include "Ngay.h"
#include "DocGia.h"

#include <iostream>
#include <string>
using namespace std;

class TreEm : public DocGia
{
private:
	string nguoibaolanh;
public:
	TreEm(void);
	~TreEm(void);
	void Nhap(int loai);
	void Xuat();
	float TinhPhiDocGia(int thang);
	int LoaiDocGia();
};