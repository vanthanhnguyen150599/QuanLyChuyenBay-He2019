#include<iostream>
#include<fstream>
#include"CauTruc.h"
#include"GiaoDien.h"
#include"QuanLyChuyenBay.h"
using namespace std;
int main()
{
	fullscreen();
	KhungNgoai();
	DanhSach_MB mb;
	List cb;
	DocFileMB(mb);
	DocFileCB(cb);
//	cout << cb.pHead->data.SoHieuMB;
//	cout << mb.data[0]->SoHieuMB;
	int kt = Menu(kt);
	while (kt != 0)
	{
		switch (kt)
		{
			case 1:
				{
					ThemMB(mb);
					break;
				}
			case 2:
				{
					XoaMB(mb);
					break;
				}
			case 3:
				{
					ChinhSuaMB(mb);
					break;
				}
			case 4:
				{
					// Ten ham thuc hien chuc nang
					break;
				}
			case 5:
				{
					break;
				}
			case 6:
				{
					break;
				}
			case 7:
				{
					break;
				}
			case 8:
				{
					break;
				}
			case 9:
				{
					break;
				}
			case 10:
				{
					break;
				}
			case 11:
				{
					break;
				}
			case12:
				{
					break;
				}
		}
		kt = Menu(kt);
	}
	return 0;
}
