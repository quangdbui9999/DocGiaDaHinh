#pragma once
#include "Ngay.h"

#include <iostream>
#include <string>
using namespace std;

class DocGia
{
private:
	string hoten;
	string gioitinh;
	Ngay ngaysinh;
protected:
	int sosachmuon;
public:
	DocGia(void);
	~DocGia(void);
	void ChonDocGia();
	virtual void Nhap(int loai);
	virtual void Xuat();
	virtual float TinhPhiDocGia(int thang) = 0;
	virtual int LoaiDocGia() = 0;
	string LayGioiTinh();
	string LayHoTen();
	string LayHo();
	string LayTen();
	int LayNam50Tuoi();
	int LayThangNay();
	int LayTuoi();
};