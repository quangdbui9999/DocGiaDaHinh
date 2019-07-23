#pragma once
#include <iostream>
using namespace std;

class Ngay
{

private://bien cuc bo
	int ngay;
	int thang;
	int nam;
public://phuong thuc
	Ngay(void);
	~Ngay(void);
	int ktngay();//so ngay toi da trong thang
	int ktnam();//kiem tra nam nhaun
	void NhapNgayNguoiLon();
	void NhapNgayTreEm();
	void NhapNgayHuuTri();
	void XuatNgay();
	int LayThang5();
	int LayNam();
};