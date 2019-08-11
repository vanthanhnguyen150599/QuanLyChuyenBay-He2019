#ifndef _GRAPH_H // 1 man hinh dai 210, rong 52
#define _GRAPH_H
#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>
#include<conio.h >
#include<ctime>
using namespace std;
void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
// ==================== DUA CON TRO DEN VI TRI =============================
void gotoxy(int x, int y) // Di chuyen toa do con tro trong he toa do De-cat
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}
//=====================TRA VE VI TRI X CUA CON TRO==============================
int wherex()
{
HANDLE hConsoleOutput;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
return screen_buffer_info.dwCursorPosition.X;
}
//=========================TRA VE VI TRI Y CUA CON TRO============================
int wherey( void )
{
HANDLE hConsoleOutput;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
return screen_buffer_info.dwCursorPosition.Y;
}
// ============= DOI MAU CHU ================
void ChangeColor(int k)
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, k);
}
//==============================AN CO TRO MAN HINH CONSOLE=======================
void AnConTro()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
//==============================HIEN CON TRO MAN HINH CONSOLE================
void HienConTro()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void KhungNgoai()
{
	AnConTro();
	char tren = 223;
	char duoi = 220;
	char doc = 219;
	for (int i = 1; i <= 55; i++)
	{
		for (int j = 1; j <= 196; j++)
		{
			if (i == 1 || i == 55)
			{
				if (i == 1)
				{
					if ( j != 1 && j != 196 && j != 40)
					{
						cout << tren;
					}
					else
					{
						cout << doc;
					}
				}
				else
				{
					if (i == 55)
					{
						if (j != 1 && j != 196 && j != 40)
						{
							cout << duoi;
						}
						else
						{
							cout << doc;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 196)
				{
					cout << doc;
				}
				else
				{
					if (j == 40)
					{
						cout << doc;
					}
					else
					{
						cout << " ";
					}
				}
			}
		}
		gotoxy(0,wherey()+1);
//		cout << endl;
	}
}
int Menu(int a)
{
	ChangeColor(15);
	AnConTro();
	string Menu[12];
	Menu[0] = "             THEM MAY BAY             ";
	Menu[1] = "              XOA MAY BAY             ";
	Menu[2] = "           CHINH SUA MAY BAY          ";
	Menu[3] = "           THEM CHUYEN BAY            ";
	Menu[4] = "             XOA CHUYEN BAY           ";
	Menu[5] = "         CHINH SUA CHUYEN BAY         ";
	Menu[6] = "               DAT VE                 ";
	Menu[7] = "               HUY VE                 ";
	Menu[8] = "DANH SACH HANH KHACH THUOC CHUYEN BAY ";
	Menu[9] = "   CHUYEN BAY KHOI HANH TRONG NGAY    ";
	Menu[10]= "   CAC VE CON TRONG CUA CHUYEN BAY    ";
	Menu[11]= "       THONG KE LUOT THUC HIEN        ";
	for (int i = 0; i < 12; i++)
	{
		gotoxy(1,15+2*i);
		cout << Menu[i];
	}
	int dem;
	if (a > 0)
	{
		dem = a - 1;
	}
	else
	{
		dem = 0;
	}
	gotoxy(1,15+2*dem);
	ChangeColor(224);
	cout << Menu[dem];
	char c = getch();
	bool kytu;
	if (c == -32 || c == 0)
	{
		kytu = 0;
		c = getch();
	}
	else
	{
		kytu = 1;
	}
	while (c != 13 && c != 27)
	{
		if (c == 72 && !kytu)
		{
			if (dem > 0)
			{
				ChangeColor(15);
				gotoxy(1,15+2*dem);
				cout << Menu[dem];
				dem--;
				ChangeColor(224);
				gotoxy(1,15+2*dem);
				cout << Menu[dem];
			}
		}
		if (c == 80 && !kytu)
		{
			if (dem < 11)
			{
				ChangeColor(15);
				gotoxy(1,15+2*dem);
				cout << Menu[dem];
				dem++;
				ChangeColor(224);
				gotoxy(1,15+2*dem);
				cout << Menu[dem];
			}
		}
		c = getch();
		if (c == -32 || c == 0)
		{
			c = getch();
			kytu = 0;
		}
		else
		{
			kytu = 1;
		}
	}
	HienConTro();
	if (c == 27)
	{
		return 0; // Exit
	}
	return dem+1;
}
void KhungThemMB()
{
	ChangeColor(15);
	char traitren = 218;
	char traiduoi = 192;
	char phaitren = 191;
	char phaiduoi = 217;
	char ngang = 196;
	char doc = 179;
	gotoxy(92,20); // So Hieu
	cout << "So Hieu  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 19)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 19)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 19)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-19,wherey()+1);
	}
	gotoxy(95,25);
	cout << "Loai  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 44; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 44)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 44)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 44)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-44,wherey()+1);
	}
	gotoxy(93,30); // So ghe
	cout << "So Ghe  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 6)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 6)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 6)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-6,wherey()+1);
	}
	gotoxy(113,34);
	cout << "XAC NHAN";
	gotoxy(130,34);
	cout << "HUY";
}
int InHoa(char x)
{
	if (x >= 97 && x <= 122)
	{
		x = x - 32;
	}
	return (int) x;
}
int luythua10(int somu)
{
	int so = 1;
	for (int i = 1; i <= somu; i++)
	{
		so = so*10;
	}
	return so;
}
void XuLiNhapSo(int &so,char &c, bool &kytu, int gioihanchuso)
{
	// Di chuyen lai dung vi tri
	bool motso;
//	cout << "adad";
	if (so < 10 && (c == 8))
	{
		motso = 1;
	}
	else
	{
		motso = 0;
	}
	while (c != 13)
	{
		if ((c >= 48 && c <= 57) && kytu && so < 10)
		{
			if (so*10 + (int) c - 48 < luythua10(gioihanchuso))
			{
				cout << c;
				so = so*10 + (int) c-48;
				motso = 0;
			}
		}
		if (c == 8)
		{
			if (so > 0 && !motso)
			{
				AnConTro();
				gotoxy(wherex()-1,wherey());
				cout << " ";
				gotoxy(wherex()-1,wherey());
				HienConTro();
				so = so/10;
			}
			if (so > 0 && motso)
			{
				AnConTro();
				gotoxy(wherex()-2,wherey());
				cout << "  ";
				gotoxy(wherex()-2,wherey());
				HienConTro();
				so = so/10;
			}
		}
		if (c == 27 )
		{
			so = -1;
			return;
		}
		if ((c == 72 || c == 80) && !kytu)
		{
			return;
		}
		c = getch ();
		if(c == -32 || c == 0)
		{
			kytu = 0;
			c = getch();
		}
		else
		{
			kytu=1;
		}
		
	}
	return;
}
void ClearManHinhChinh()
{
	gotoxy(41,1);
	for (int i = 1; i <= 53; i++)
	{
		for (int j = 1; j <= 154; j++)
		{
			cout << " ";
		}
		gotoxy(wherex()-154,wherey()+1);
	}
	AnConTro();
}
bool KiemTraGio(int gio)
{
	if (gio > 23)
	{
		return 0;
	}
	return 1;
}
int SoNgayTrongThang(int thang, int nam)
{
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		return 31;
	}
	if (thang == 2)
	{
		if (nam%4 == 0 )
		{
			return 29;
		}
		return 28;
	}
	return 30;
}
bool KiemTraNgayThang(int ngay, int thang, int nam)
{
	if (thang > 12)
	{
		return 0;
	}
	if (ngay > SoNgayTrongThang(thang,nam))
	{
		return 0;
	}
	return 1;
}
bool SoSanhThoiGianVoiHeThong(int gio, int ngay, int thang, int nam)
{
	time_t hientai = time(0);
	tm *thoigian = localtime(&hientai);
	if (nam < thoigian->tm_year + 1900)
	{
		return 0;
	}
	if (nam > thoigian->tm_year + 1900)
	{
		return 1;
	}
	if (thang < 1 + thoigian->tm_mon)
	{
		return 0;
	}
	if (thang > 1+thoigian->tm_mon)
	{
		return 1;
	}
	if (ngay < thoigian->tm_mday)
	{
		return 0;
	}
	if (ngay > thoigian->tm_mday)
	{
		return 1;
	}
	if (gio*60 <= (thoigian->tm_hour)*60 + thoigian->tm_min )
	{
		return 0;
	}
	return 1;
}
void KhungCB()
{
	char traitren = 218;
	char traiduoi = 192;
	char phaitren = 191;
	char phaiduoi = 217;
	char ngang = 196;
	char doc = 179;
	ChangeColor(15);
	gotoxy(86,7);
	cout << "Ma Chuyen Bay  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 19)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 19)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 19)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-19,wherey()+1);
	}
	gotoxy(95,12);
	cout << "Ngay  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 6)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 6)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 6)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-6,wherey()+1);
	}
	gotoxy(94,17);
	cout << "Thang  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 6)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 6)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 6)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-6,wherey()+1);
	}
	gotoxy(96,22);
	cout << "Nam  ";
	gotoxy(wherex(),wherey()-1);
		for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 6)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 6)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 6)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-6,wherey()+1);
	}
	gotoxy(96,27);
	cout << "Gio  ";
	gotoxy(wherex(),wherey()-1);
		for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 6)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 6)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 6)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-6,wherey()+1);
	}
	gotoxy(91,32);
	cout << "Diem den  ";
	gotoxy(wherex(),wherey()-1);
		for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 24; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 24)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 24)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 24)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-24,wherey()+1);
	}
	gotoxy(89,37);
	cout << "Trang thai  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 14; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 14)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 14)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 14)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-14,wherey()+1);
	}
	gotoxy(92,42);
	cout << "So Hieu  ";
	gotoxy(wherex(),wherey()-1);
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (i == 1 || i == 3)
			{
				if (i == 1)
				{
					if (j == 1)
					{
						cout << traitren;
					}
					else
					{
						if (j == 19)
						{
							cout << phaitren;
						}
						else
						{
							cout << ngang;
						}
					}
				}
				else
				{
					if (j == 1)
					{
						cout << traiduoi;
					}
					else
					{
						if (j == 19)
						{
							cout << phaiduoi;
						}
						else
						{
							cout << ngang;
						}
					}
				}
			}
			else
			{
				if (j == 1 || j == 19)
				{
					cout << doc;
				}
				else
				{
					cout << " ";
				}
			}
		}
		gotoxy(wherex()-19,wherey()+1);
	}
	gotoxy(97,46);
	cout << "XAC NHAN";
	gotoxy(114,46);
	cout << "HUY";
}

#endif
