#include "DocGia.h"
#include "Ngay.h"

DocGia::DocGia(void)
{
}

DocGia::~DocGia(void)
{
}

void DocGia::ChonDocGia()
{
	cout<<"---------------------------------:\n";
	cout<<"         1) Tre em\n";
	cout<<"       2) Nguoi lon\n";
	cout<<"     3) Nguoi Huu Tri\n";
	cout<<"---------------------------------:\n";
}

void DocGia::Nhap(int loai)
{
	cout<<"Nhap ho ten: ";
	flushall();
	getline(cin,this->hoten);
	do
	{
		cout<<"Nhap gioi tinh: ";
		cin>>this->gioitinh;
	}while(this->gioitinh != "Nam" && this->gioitinh != "Nu");
	cout<<"Nhap ngay - thang - nam sinh:";
	if (loai == 1)
		ngaysinh.NhapNgayTreEm();
	else if (loai == 2)
		ngaysinh.NhapNgayNguoiLon();
	else if (loai == 3)
		ngaysinh.NhapNgayHuuTri();
	cout<<"Nhap so sach muon: ";
	cin>>this->sosachmuon;
}

void DocGia::Xuat()
{
	cout<<"Ho ten: "<<this->hoten<<endl;;
	cout<<"Gioi tinh: "<<this->gioitinh<<endl;
	cout<<"Ngay - thang - nam sinh: \n";
	ngaysinh.XuatNgay();
	cout<<"So sach muon: "<<this->sosachmuon<<endl;;
}

string DocGia::LayGioiTinh()
{
	return this->gioitinh;
}

string DocGia::LayHoTen()
{
	return this->hoten;
}

string DocGia::LayHo()
{
	int i, j, cach = 0;
	string chuoi;
	for (i = 0; i < this->hoten.length() - 1; i++)
	{
		if (this->hoten[i] == 32)// so 32 la dau cach
		{
			cach = i;
			break;
		}
	}
	for (j = 0; j < cach; j++)
	{
		chuoi = chuoi + this->hoten[j];
	}
	return chuoi;
}

string DocGia::LayTen()
{
	int i, j, cach = 0;
	string chuoi; 
	for (i = this->hoten.length()-1; i >= 0; i--)
	{ i = 
		if (this->hoten[i] == 32)
		{
			cach = i;
			break;
		}
	}
	for (j = cach + 1; j < this->hoten.length(); j++)
	{
		chuoi = chuoi + this->hoten[j];
	}
	return chuoi;
}

int DocGia::LayThangNay()
{
	if (this->ngaysinh.LayThang5() == 1)
		return 1;
	return 0;
}

int DocGia::LayTuoi()
{
	int tuoi;
	tuoi = 2013 - this->ngaysinh.LayNam();
	return tuoi;
}

int DocGia::LayNam50Tuoi()
{
	int tuoi;
	tuoi = 2013 - this->ngaysinh.LayNam();
	if (tuoi >= 1 && tuoi < 50)
		return 2;
	else if (tuoi >= 51 && tuoi <= 100)
		return 1;
	return 0;
}