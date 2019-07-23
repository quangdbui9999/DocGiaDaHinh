#pragma once
#include "Ngay.h"
#include "DocGia.h"
#include "NguoiLon.h"
#include "TreEm.h"
#include "HuuTri.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ThuVien
{
private:
	vector<DocGia*>khach;
public:
	ThuVien(void);
	~ThuVien(void);
	void Nhap();
	void Xuat();
	float TinhTongPhiDocGia(int thang);
	int SoDocGia();
	int SoDocGiaTreEm();
	int SoDocGiaTreEmNu();
	int SoDocGiaNguoiLon();
	int SoDocGiaNam();
	int SoDocGiaNu();
	float PhiDocGiaTreEm(int thang);
	float PhiDocGiaNguoiLon(int thang);
	float PhiDocGiaHuuTri(int thang);
	void DocGiaTenThanh(string ten);
	void DocGiaThanh(string ten);
	void DocGiaHoHo(string ho);
	void TreEmSinhThang5();
	void DocGiaDuoi50Tuoi();
	void MeNuChinh();
	void MeNu3();
	void MeNu4();
	void MeNu5();
	void MeNu6();
};