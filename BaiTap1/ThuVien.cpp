#include "ThuVien.h"
#include "Ngay.h"
#include "DocGia.h"
#include "NguoiLon.h"
#include "TreEm.h"
#include "HuuTri.h"

ThuVien::ThuVien(void)
{
}

ThuVien::~ThuVien(void)
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		delete khach[i];
	}
	khach.clear();
}

void ThuVien::Nhap()
{
	int n, i, loai;
	cout<<"Nhap so luong doc gia: ";
	cin>>n;
	for (i = 0; i < n; i++)
	{
		DocGia* docgia;
		cout<<"---------------------------------:\n";
		cout<<"         1) Tre em\n";
		cout<<"       2) Nguoi lon\n";
		cout<<"     3) Nguoi Huu Tri\n";
		cout<<"---------------------------------:\n";
		cout<<"Moi ban lua chon loai doc gia: ";
		cin>>loai;
		if (loai == 1)
		{
			docgia = new TreEm;
		}
		else if (loai == 2)
		{
			docgia = new NguoiLon;
		}
		else if (loai == 3)
		{
			docgia = new HuuTri;
		}
		docgia->Nhap(loai);
		khach.push_back(docgia);
		cout<<"\n\n";
	}
}

void ThuVien::Xuat()
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		khach[i]->Xuat();
		cout<<"\n\n";
	}
}

float ThuVien::TinhTongPhiDocGia(int thang)
{
	float sum = 0;
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		sum = sum + khach[i]->TinhPhiDocGia(thang);
	}
	return sum;
}

int ThuVien::SoDocGia()
{
	return khach.size();
}

int ThuVien::SoDocGiaTreEm()
{
	int i, dem = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 1)
		{
			dem = dem + 1;
		}
	}
	return dem;
}

int ThuVien::SoDocGiaNguoiLon()
{
	int i, dem = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 2)
		{
			dem = dem + 1;
		}
	}
	return dem;
}

int ThuVien::SoDocGiaNam()
{
	int i, dem = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LayGioiTinh() == "Nam")
		{
			dem = dem + 1;
		}
	}
	return dem;
}

int ThuVien::SoDocGiaNu()
{
	int i, dem = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (stricmp(khach[i]->LayGioiTinh().c_str(),"Nu")==0)
		{
			dem = dem + 1;
		}
	}
	return dem;
}

int ThuVien::SoDocGiaTreEmNu()
{
	int i, dem = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (stricmp(khach[i]->LayGioiTinh().c_str(),"Nu") == 0 && khach[i]->LoaiDocGia() == 1)
		{
			dem = dem + 1;
		}
	}
	return dem;
}

float ThuVien::PhiDocGiaTreEm(int thang)
{
	int i;
	float sum = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 1)
		{
			sum = sum + khach[i]->TinhPhiDocGia(thang);
		}
	}
	return sum;
}

float ThuVien::PhiDocGiaNguoiLon(int thang)
{
	int i;
	float sum = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 2)
		{
			sum = sum + khach[i]->TinhPhiDocGia(thang);
		}
	}
	return sum;
}

float ThuVien::PhiDocGiaHuuTri(int thang)
{
	int i;
	float sum = 0;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 3)
		{
			sum = sum + khach[i]->TinhPhiDocGia(thang);
		}
	}
	return sum;
}

void ThuVien::DocGiaThanh(string ten)
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 2 && khach[i]->LayHoTen().find(ten) >= 0)
		{
			khach[i]->Xuat();
			cout<<"\n";
		}
	}
}

void ThuVien::DocGiaTenThanh(string ten)
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LoaiDocGia() == 2 && khach[i]->LayTen() == ten)
		{
			khach[i]->Xuat();
			cout<<"\n";
		}
	}
}

void ThuVien::DocGiaHoHo(string ho)
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LayHo() == ho)
		{
			khach[i]->Xuat();
			cout<<"\n";
		}
	}
}

void ThuVien::TreEmSinhThang5()
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LayThangNay() == 1 && khach[i]->LoaiDocGia() == 1)
		{
			khach[i]->Xuat();
			cout<<"\n";
		}
	}
}

void ThuVien::DocGiaDuoi50Tuoi()
{
	int i;
	for (i = 0; i < khach.size(); i++)
	{
		if (khach[i]->LayNam50Tuoi() == 2)
		{
			khach[i]->Xuat();
			cout<<"\n";
		}
	}
}

void ThuVien::MeNuChinh()
{
	cout<<"\n--------------------------------------------------------------\n";
	cout <<"           MOI BAN LUA CHON MENU DE THUC HIEN:\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"               1) Nhap.\n";
	cout<<"               2) Xuat.\n";
	cout<<"               3) So luong doc gia trong thu vien.\n";
	cout<<"               4) Phi Doc Gia.\n";
	cout<<"               5) Tim ten.\n";
	cout<<"               6) Tim ngay.\n";
	cout<<"               7) Exit.\n";
	cout<<"--------------------------------------------------------------\n\n";
}

void ThuVien::MeNu3()
{
	cout<<"\n--------------------------------------------------------------\n";
	cout <<"           MOI BAN LUA CHON MENU DE THUC HIEN:\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"               1) Tre em.\n";
	cout<<"               2) Nguoi lon.\n";
	cout<<"               3) Tre em nu.\n";
	cout<<"               4) Doc Gia Nam.\n";
	cout<<"               5) Doc Gia Nu.\n";
	cout<<"               6) Tong Doc Gia.\n";
	cout<<"               7) Exit.\n";
	cout<<"--------------------------------------------------------------\n\n";
}

void ThuVien::MeNu4()
{
	cout<<"\n--------------------------------------------------------------\n";
	cout <<"           MOI BAN LUA CHON MENU DE THUC HIEN:\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"               1) Tre em sau 6 thang.\n";
	cout<<"               2) Nguoi lon sau 6 thang.\n";
	cout<<"               3) Nguoi huu tri sau 6 thang.\n";
	cout<<"               4) Tong phi Doc Gia sau 6 thang.\n";
	cout<<"               5) Exit.\n";
	cout<<"--------------------------------------------------------------\n\n";
}

void ThuVien::MeNu5()
{
	cout<<"\n--------------------------------------------------------------\n";
	cout <<"           MOI BAN LUA CHON MENU DE THUC HIEN:\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"               1) Doc Gia co ho la Ho.\n";
	cout<<"               2) Doc Gia co ten la Thanh (thay giao).\n";
	cout<<"               3) Doc Gia co ten la Thanh (Duy Quang).\n";
	cout<<"               4) Exit.\n";
	cout<<"--------------------------------------------------------------\n\n";
}

void ThuVien::MeNu6()
{
	cout<<"\n--------------------------------------------------------------\n";
	cout <<"           MOI BAN LUA CHON MENU DE THUC HIEN:\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"               1) Tre em sinh trong thang nay.\n";
	cout<<"               2) Doc Gia duoi 50 tuoi.\n";
	cout<<"               3) Exit.\n";
	cout<<"--------------------------------------------------------------\n\n";
}