#pragma once
#include "Ngay.h"
#include "DocGia.h"

#include <iostream>
#include <string>
using namespace std;

class NguoiLon : public DocGia
{
private:
	string socmnd;
public:
	NguoiLon(void);
	~NguoiLon(void);
	void Nhap(int loai);
	void Xuat();
	float TinhPhiDocGia(int thang);
	int LoaiDocGia();
};