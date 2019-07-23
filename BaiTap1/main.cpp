#include "Ngay.h"
#include "DocGia.h"
#include "NguoiLon.h"
#include "TreEm.h"
#include "HuuTri.h"
#include "ThuVien.h"

void main()
{
	int chon, chon3, chon4, chon5, chon6;
	ThuVien thuvien;
	ThuVien library;
	do
	{
		thuvien.MeNuChinh();
		do
		{
			printf("Moi ban lua chon menu: ");
			scanf("%d",&chon);
		}while(chon < 1 || chon > 7);
		switch (chon)
		{
		case 1:
			{
				library.Nhap();
			}
			break;
		case 2:
			{
				library.Xuat();
			}
			break;
		case 3:
			{
				do
				{
					thuvien.MeNu3();
					do
					{
						printf("Moi ban lua chon menu: ");
						scanf("%d",&chon3);
					}while(chon3 < 1 || chon3 > 7);
					switch (chon3)
					{
					case 1:
						{					
							cout<<"So luong doc gia tre em trong thu vien: "<<library.SoDocGiaTreEm()<<".\n";
						}
						break;
					case 2:
						{
							cout<<"So luong doc gia nguoi lon trong thu vien: "<<library.SoDocGiaNguoiLon()<<".\n";
						}
						break;
					case 3:
						{
							cout<<"So luong doc gia tre em la nu trong thu vien: "<<library.SoDocGiaTreEmNu()<<".\n";
						}
						break;
					case 4:
						{
							cout<<"So luong doc gia la nam trong thu vien: "<<library.SoDocGiaNam()<<".\n";
						}
						break;
					case 5:
						{
							cout<<"So luong doc gia la nu trong thu vien: "<<library.SoDocGiaNu()<<".\n";
						}
						break;
					case 6:
						{
							cout<<"So luong doc gia trong thu vien: "<<library.SoDocGia()<<".\n";
						}
						break;
					case 7:
						{
						}
						break;
					}
				}while(chon3!=7);
			}
			break;
		case 4:
			{
				do
				{
					thuvien.MeNu4();
					do
					{
						printf("Moi ban lua chon menu: ");
						scanf("%d",&chon4);
					}while(chon4 < 1 || chon4 > 5);
					switch (chon4)
					{
					case 1:
						{	
							cout<<"Tong phi doc gia tre em sau 6 thang: "<<library.PhiDocGiaTreEm(6)<<" dong.\n";
						}
						break;
					case 2:
						{
							cout<<"Tong phi doc gia nguoi lon sau 6 thang: "<<library.PhiDocGiaNguoiLon(6)<<" dong.\n";
						}
						break;
					case 3:
						{
							cout<<"Tong phi doc gia nguoi huu tri sau 6 thang: "<<library.PhiDocGiaHuuTri(6)<<" dong.\n";
						}
						break;
					case 4:
						{
							cout<<"Tong phi doc gia trong thu vien: "<<library.TinhTongPhiDocGia(6)<<" dong.\n";
						}
						break;
					case 5:
						{
						}
						break;
					}
				}while(chon4!=5);
			}
			break;
		case 5:
			{
				do
				{
					thuvien.MeNu5();
					do
					{
						printf("Moi ban lua chon menu: ");
						scanf("%d",&chon5);
					}while(chon5 < 1 || chon5 > 4);
					switch (chon5)
					{
					case 1:
						{
							cout<<"\nNhung doc gia co ho la Ho\n";
							library.DocGiaHoHo("Ho");
						}
						break;
					case 2:
						{
							cout<<"\nNhung doc gia nguoi lon ten Thanh (cach cua thay)\n";
							library.DocGiaThanh("Thanh");
						}
						break;
					case 3:
						{
							cout<<"\nNhung doc gia nguoi lon ten Thanh (cach cua em)\n";
							library.DocGiaTenThanh("Thanh");
						}
						break;
					case 4:
						{
						}
						break;
					}
				}while(chon5!=4);
			}
			break;
		case 6:
			{
				do
				{
					thuvien.MeNu6();
					do
					{
						printf("Moi ban lua chon menu: ");
						scanf("%d",&chon6);
					}while(chon6 < 1 || chon6 > 3);
					switch (chon6)
					{
					case 1:
						{
							cout<<"\nNhung tre em sinh trong thang 5\n";
							library.TreEmSinhThang5();
						}
						break;
					case 2:
						{
							cout<<"\nNhung doc gia duoi 50 tuoi\n";
							library.DocGiaDuoi50Tuoi();
						}
						break;
					case 3:
						{
						}
						break;
					}
				}while(chon6!=3);
			}
			break;
		case 7:
			{
			}
			break;
		}
	}while(chon!=7);
}