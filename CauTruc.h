#pragma once
#define MAXLIST 300
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Date
{
	
	int Ngay = 0;;
	int Thang = 0;
	int Nam = 0;
	int Gio = 0;
};

struct MayBay
{
	string SoHieuMB;
	string LoaiMayBay;
	int SoDay = 2;
	int SoDong;
};
struct DanhSach_MB
{
	MayBay* data[MAXLIST];
	int SoLuong;
};

struct DanhSachVe
{
	string CMND;
	string MaVe;
};
struct ChuyenBay
{
	string MaCB = "";
	Date NgayKhoiHanh;
	string SanBayDen = "";
	string SoHieuMB;
	int TrangThai = -1;//0:huy chuyen,1:con ve ,2:het ve ,3:hoan tat ?
	DanhSachVe* data;
};
struct DanhSach_CB
{
	ChuyenBay data;
	DanhSach_CB* pNext = NULL;
};
struct List
{
	DanhSach_CB* pHead = NULL;
	DanhSach_CB* pTail = NULL;
};

struct HanhKhach
{
	string CMND;
	string Ho;
	string Ten;
	bool Phai;
};
struct NODE_TREE
{
	HanhKhach data;
	NODE_TREE* pLeft = NULL;
	NODE_TREE* pRight =NULL;
};
typedef NODE_TREE* TREE;

void Them1ChuyenBayVao_Cuoi_DanhSach(List &dscb ,DanhSach_CB *cb)
{    // neu danh sach rong 
    if(dscb.pHead == NULL && dscb.pTail == NULL)
    {
    		dscb.pHead = new DanhSach_CB;
    		dscb.pTail = new DanhSach_CB;
    	    dscb.pHead = cb; // node dau cung chinh la node cuoi va la node cb
    	    dscb.pTail = cb;
//		  	cout << cb->data.SoHieuMB;
	}
	else 
	{
		dscb.pTail->pNext = new DanhSach_CB;
		dscb.pTail->pNext= cb;// cho con tro pTail lien ket den node cb
     	dscb.pTail = cb;// cap nhat lai cb la node pTail
	}
     
} /*
int ChuoiThanhSo(string a)
{
	int so = 0;
	for (int i = 0; i < a.length(); i++)
	{
		so = so*10 + a[i]-48;
	}
	return so;
}
*/
// ham doc file cua May Bay 
void DocFileMB(DanhSach_MB &mb)
{
	int dem = 0;
	ifstream filein;
	filein.open("Danhsachmaybay.txt");
	filein >> mb.SoLuong;
	while (!filein.eof())
	{
		mb.data[dem] = new MayBay;
		filein >> mb.data[dem]->SoHieuMB;
		filein >> mb.data[dem]->LoaiMayBay;
		filein >> mb.data[dem]->SoDay;
		filein >> mb.data[dem]->SoDong;
		dem++;
	}
}
void DocFileCB(List & cb)
{
	ifstream filein;
	filein.open("Danhsachchuyenbay.txt");
	string tam;
	DanhSach_CB *temp;
	while (!filein.eof())
	{
		temp = NULL;
		temp = new DanhSach_CB;
//		cout << temp << " ";
		filein >> temp->data.MaCB;
//		cout << (temp->data.MaCB) << " ";
		filein >> temp->data.NgayKhoiHanh.Ngay;
		filein >> temp->data.NgayKhoiHanh.Thang;
		filein >> temp->data.NgayKhoiHanh.Nam;
		filein >> temp->data.NgayKhoiHanh.Gio;
		filein >> temp->data.SanBayDen;
		filein >> temp->data.SoHieuMB;
//		cout << temp->data.SoHieuMB << " ";
//		cout << temp->data.SanBayDen;
		filein >> temp->data.TrangThai;
//		cout << temp->data.TrangThai << " ";
		Them1ChuyenBayVao_Cuoi_DanhSach(cb,temp);
	}
}
void XuatFileMB(DanhSach_MB &mb)
{
	ofstream fileout;
	fileout.open("Danhsachmaybay.txt");
	fileout <<  mb.SoLuong;
	for (int i = 0; i < mb.SoLuong; i++)
	{
		fileout << endl;
		fileout << mb.data[i]->SoHieuMB << endl;
		fileout << mb.data[i]->LoaiMayBay << endl;
		fileout << mb.data[i]->SoDay << endl;
		fileout << mb.data[i]->SoDong;
	}
	fileout.close();
}
void XuatFileCB (List &cb)
{
	ofstream fileout;
	fileout.open("Danhsachchuyenbay.txt");
	for (DanhSach_CB *p = cb.pHead; p != NULL; p = p->pNext)
	{
		if (p != cb.pHead) fileout << endl;
		fileout << p->data.MaCB << endl;
		fileout << 	p->data.NgayKhoiHanh.Ngay << " ";
		fileout << p->data.NgayKhoiHanh.Thang << " ";
		fileout << p->data.NgayKhoiHanh.Nam << " ";
		fileout << p->data.NgayKhoiHanh.Gio << endl;
		fileout << p->data.SanBayDen << endl;
		fileout << p->data.SoHieuMB << endl;
		fileout << p->data.TrangThai;
	}
}
