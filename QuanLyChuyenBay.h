#ifndef _OBJECT_H
#define _OBJECT_H

#include<iostream>
#include<conio.h>
#include<windows.h>
#include "CauTruc.h"
#include "GiaoDien.h"
using namespace std;

bool NhapDuLieuMB(MayBay *mb, DanhSach_MB &ds, char &c)
{
	char traitren = 218;
	char traiduoi = 192;
	char phaitren = 191;
	char phaiduoi = 217;
	char ngang = 196;
	char doc = 179;
	int  dem = 0;
	KhungThemMB();
	gotoxy(103,20);
	cout << mb->SoHieuMB;
	gotoxy(103,25);
	cout << mb->LoaiMayBay;
	gotoxy(103,30);
	if (mb->SoDong*2 < 10)
	{
		cout << "0" << mb->SoDong*2;
	}
	else
	{
		cout << mb->SoDong*2;
	}
	AnConTro();
	ChangeColor(12);
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
				else // tuong duong i == 3
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
			else // tuong duong i == 2
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
	ChangeColor(15);
	gotoxy(103,20);
	cout << mb->SoHieuMB;
	HienConTro();
	c = getch();
	bool kytu;
	if (c == -32 || c == 0)
	{
		c = getch();
		kytu = 0;
	}
	else
	{
		kytu = 1;
	}
	bool kt = 1;
//	mb->LoaiMayBay = "";
//	mb->SoDay = 2;
//	mb->SoDong = 0;
//	mb->SoHieuMB = "";
	bool thoat = 0;
	while (kt)
	{
		while (c != 27)
		{
			thoat = 0;
			ChangeColor(15);
			if (!kytu)
			{
				if (c == 72) // up
				{
					if (dem >  0)
					{
						ChangeColor(15);
						KhungThemMB();
						gotoxy(103,20);
						cout << mb->SoHieuMB;
						gotoxy(103,25);
						cout << mb->LoaiMayBay;
						if (mb->SoDong != 0)
						{
							gotoxy(103,30);
							if (mb->SoDong*2 < 10)
							{
								cout << "0" << mb->SoDong*2;
							}
							else
							{
								cout << mb->SoDong*2;
							}
						}
						dem--;
						switch (dem)
						{
							case 0:
								{
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,20);
									cout << mb->SoHieuMB;
									break;
								}
							case 1:
								{
									ChangeColor(12);
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
									gotoxy(103,25);
									cout << mb->LoaiMayBay;
									break;
								}
							case 2:
								{
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,30);
									if (mb->SoDong*2 != 0)
									{
										if(mb->SoDong*2 < 10)
										{
											cout << "0" << mb->SoDong*2;
										}
										else
										{
											cout << mb->SoDong*2;
										}
									}
									break;
								}
							case 3:
								{
									ChangeColor(207);
									gotoxy(113,34);
									cout << "XAC NHAN";
									break;
								}
						}
					}
				}
				if (c == 80) // down
				{
					if (dem < 4)
					{
						dem++;
						KhungThemMB();
						gotoxy(103,20);
						cout << mb->SoHieuMB;
						gotoxy(103,25);
						cout << mb->LoaiMayBay;
						if (mb->SoDong != 0)
						{
							gotoxy(103,30);
							if (mb->SoDong*2 < 10)
							{
								cout << "0" << mb->SoDong*2;
							}
							else
							{
								cout << mb->SoDong*2;
							}
						}
						switch (dem)
						{
							case 4:
								{
									ChangeColor(207);
									gotoxy(130,34);
									cout << "HUY";
									break;
								}
							case 1:
								{
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,25);
									cout << mb->LoaiMayBay;
									break;
								}
							case 2:
								{
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,30);
									if (mb->SoDong*2 != 0 )
									{
										if(mb->SoDong*2 >= 10 )
										{
											cout<<mb->SoDong*2;
										}
										else 
										{
											cout << "0" << mb->SoDong*2;
										}
									}
									break;
								}
							case 3:
								{
									ChangeColor(207);
									gotoxy(113,34);
									cout << "XAC NHAN";
									break;
								}
						}
					}
				}
			}
			if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57)) && kytu) // Chu va so
			{
				switch (dem)
				{
					case 0: // So Hieu
						{
							if (mb->SoHieuMB.length() < 15)
							{
								cout << (char) InHoa(c) ;
								mb->SoHieuMB = mb->SoHieuMB + (char) InHoa(c);
							}
							else
							{
								gotoxy(122,20);
								AnConTro();
								cout << "It hon 15 ky tu";
								Sleep(500);
								gotoxy(122,20);
								cout << "                ";
								gotoxy(118,20);
								HienConTro();
							}
						}
						break;
					case 1: // Loai
						{
							if (mb->LoaiMayBay.length() < 40)
							{
								cout << (char) InHoa(c); // xuat ra mang hinh
								mb->LoaiMayBay = mb->LoaiMayBay + (char) InHoa(c); // them trong bo nho
							}
							else
							{
								AnConTro();
								gotoxy(148,25);
								cout << "It hon 40 ky tu";
								Sleep(500);
								gotoxy(148,25);
								cout << "               ";
								gotoxy(143,25);
								HienConTro();
							}
							break;
						}
					case 2:
						{
							int temp = mb->SoDong*2;
							if (mb->SoDong > 0)
							{
								gotoxy(105,30);
							}
							else
							{
								gotoxy(103,30);
							}
							XuLiNhapSo(temp ,c,kytu,2);
							while (temp%2 == 1 || temp > 60 || (temp == 0 && c == 13))
							{
								if (temp == -1)
								{
									thoat = 1;
									break;
								}
								AnConTro();
								gotoxy(109,30);
								cout << "Nhap lai so ghe! So ghe la so chan va 0 < So ghe <= 60";
								Sleep(500);
								gotoxy(109,30);
								cout << "                                                      ";
								gotoxy(103,30);
								cout << "  ";
								temp = 0;
								gotoxy(103,30);
								HienConTro();
								c = getch();
								if (c == -32 || c == 0)
								{
									kytu = 0;
									c = getch();
								}
								else
								{
									kytu = 1;
								}
								if (!((c == 72 || c == 80) && !kytu))
								{
									XuLiNhapSo(temp,c,kytu,2);
								}
								else
								{
									thoat = 1;
									break;
								}
							}
							mb->SoDong = temp/2;
							if (!kytu) // Up/ Down
							{
								mb->SoDong = temp/2;
								thoat = 1;
							}
							if (c == 13)
							{
								thoat = 1;
								c = 80;
								kytu = 0;
							}
							break;
						}
				}
			}
			if (c == 8) // Backspace
			{
				switch (dem)
				{
					case 0:
						{
							if (mb->SoHieuMB.length() > 0)
							{
								AnConTro();
								gotoxy(wherex()-1,wherey());
								cout << " ";
								gotoxy(wherex()-1,wherey());
								HienConTro();
								mb->SoHieuMB.erase(mb->SoHieuMB.length()-1);
							}
							else
							{
								gotoxy(122,20);
								AnConTro();
								cout << "Khong the xoa";
								Sleep(500);
								gotoxy(122,20);
								cout << "             ";
								gotoxy(103,20);
								HienConTro();
							}
							break;
						}
					case 1:
						{
							if (mb->LoaiMayBay.length() > 0)
							{
								AnConTro();
								gotoxy(wherex()-1,wherey());
								cout << " ";
								gotoxy(wherex()-1,wherey());
								HienConTro();
								mb->LoaiMayBay.erase(mb->LoaiMayBay.end()-1);
								HienConTro();
							}
							else
							{
								AnConTro();
								gotoxy(148,25);
								cout << "Khong the xoa";
								Sleep(500);
								gotoxy(148,25);
								cout << "             ";
								gotoxy(103,25);
								HienConTro();
							}
							break;
						}
					case 2:
						{
							int temp = mb->SoDong*2;
							if (mb->SoDong > 0)
							{
								gotoxy(105,30);
							}
							else
							{
								gotoxy(103,30);
							}
							XuLiNhapSo(temp,c,kytu,2);
							while (temp%2 == 1 || temp > 60 || temp == 0)
							{
								if (temp == -1)
								{
									thoat = 1;
									break;
								}
								AnConTro();
								gotoxy(109,30);
								cout << "Nhap lai so ghe! So ghe la so chan va 0 < So ghe <= 60";
								Sleep(500);
								gotoxy(109,30);
								cout << "                                                      ";
								gotoxy(103,30);
								cout << "  ";
								temp = 0;
								gotoxy(103,30);
								HienConTro();
								c = getch();
								if (c == -32 || c == 0)
								{
									kytu = 0;
								}
								else
								{
									kytu = 1;
								}
								XuLiNhapSo(temp,c,kytu,2);
							}
							mb->SoDong = temp/2;
							if (!kytu)
							{
								mb->SoDong = temp/2;
								thoat = 1;
							}
							break;
						}
				}
			}
			if (c == 13)
			{
				bool dung = 0;
				switch (dem)
				{
					case 3:
						{
							if (mb->SoHieuMB.length() == 0)
							{
								thoat = 1;
								dem = 1;
								kytu = 0;
								c = 72;
								break;
							}
							for (int i = 0; i < ds.SoLuong; i++)
							{
								if (mb->SoHieuMB == ds.data[i]->SoHieuMB && mb != ds.data[i]) 
								{
									AnConTro();
									gotoxy(125, 20);
									cout << "Trung so hieu";
									Sleep(500);
									gotoxy(125,20);
									cout << "             ";
									thoat = 1;
									dem = 1;
									kytu = 0;
									c = 72;
									dung = 1;
									break;
								}
								if (dung)
								{
									break;
								}
							}
							if (dung)
							{
								break;
							}
							if (mb->LoaiMayBay.length() == 0)
							{
								thoat = 1;
								dem = 0;
								kytu = 0;
								c = 80;
								break;
							}
							if (mb->SoDong == 0)
							{
								dem = 1;
								kytu = 0;
								c = 80;
								thoat = 1;
								break;
							}
							gotoxy(105,40);
							cout << "THEM THANH CONG";
							Sleep(500);
							ClearManHinhChinh();
							return 1;
						}
					case 4:
						{
							gotoxy(105,40);
							cout << "Ban co chac chan muon huy?";
							gotoxy(105,41);
							cout << "Nhan Y de HUY; Nhan phim bat ky de tiep tuc";
							c = getch();
							if (c == -32 || c == 0)
							{
								kytu = 0;
								c = getch();
							}
							else
							{
								kytu = 1;
							}
							c = (char) InHoa(c);
							if (c == 89 && kytu)
							{
								ClearManHinhChinh();
								gotoxy(93,10); // De ham chinh sua nhan dien case
								return 0;
							}
							{
								gotoxy(105,40);
								cout << "                                 ";
								gotoxy(105,41);
								cout << "                                                ";
								kytu = 0;
								c = 72;
								thoat = 1;
							}
							break;
						}
				}
			}
			if (!thoat)
			{
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
		}
		if (c == 27)
		{
			ChangeColor(15);
			gotoxy(105,40);
			cout << "Ban co chac chan muon thoat?";
			gotoxy(105,41);
			cout << "Nhan Y de THOAT; Nhan phim bat ky de tiep tuc";
			c = getch();
			if (c == -32 || c == 0)
			{
				kytu = 0;
				c = getch();
			}
			else
			{
				kytu = 1;
			}
			c = (char) InHoa(c);
			if (c == 89)
			{
				ClearManHinhChinh();
				return 0;
			}
			gotoxy(105,40);
			cout << "                                                   ";
			gotoxy(105,41);
			cout << "                                                   ";
			c = getch();
			if (c == -32 || c == 0)
			{
				kytu = 0;
				c = getch();
			}
			else
			{
				kytu = 1;
			}
		}
	}
	
}
void ThemMB(DanhSach_MB &dsmb)
{
	char c;
	dsmb.data[dsmb.SoLuong] = new MayBay; 
	if (!NhapDuLieuMB(dsmb.data[dsmb.SoLuong],dsmb,c))
	{
		delete dsmb.data[dsmb.SoLuong];
		return;
	}
	dsmb.SoLuong++;
	return;
}
void XoaMB(DanhSach_MB &ds)
{
	ChangeColor(15);
	if (ds.SoLuong == 0)
	{
		gotoxy(8,8);
		cout << "Khong the xoa";
		return;
	}
	gotoxy(99,17);
	cout << "NHAP THONG TIN";
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
	gotoxy(103,20);
	HienConTro();
	string temp = "";
	char c = getch();
	bool kytu;
	bool timthay = 0;
	if (c == -32 || c == 0)
	{
		c = getch();
		kytu = 0;
	}
	else
	{
		kytu = 1;
	}
	while (1)
	{
		while (c != 27)
		{
			timthay = 0;
			gotoxy(103+temp.length(),20);
			HienConTro();
			if (kytu)
			{
				if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
				{
					if (temp.length() < 15)
					{
						cout << (char) InHoa(c);
						temp = temp + (char) InHoa(c);
					}
					else
					{
						AnConTro();
						gotoxy(122,20);
						cout << "It hon 15 ky tu";
						Sleep(500);
						gotoxy(122,20);
						cout << "                ";
						gotoxy(118,20);
						HienConTro();
					}
				}
				if (c == 8)
				{
					if (temp.length() == 0)
					{
						AnConTro();
						gotoxy(122,20);
						cout << "Khong the xoa";
						Sleep(500);
						gotoxy(122,20);
						cout << "               ";
						gotoxy(103,20);
						HienConTro();
					}
					else
					{
						AnConTro();
						gotoxy(wherex()-1,wherey());
						cout << " ";
						gotoxy(wherex()-1,wherey());
						temp.erase(temp.length()-1);
						HienConTro();
					}
				}
				if (c == 13) // phim enter
				{
					for (int i = 0; i < ds.SoLuong; i++)
					{
						if (ds.data[i]->SoHieuMB == temp)
						{
							// in ra thong tin cua may bay va hoi nguoi dung co muon xoa k
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
							gotoxy(103,25);
							cout << ds.data[i]->LoaiMayBay;
							gotoxy(103,30);
							if (ds.data[i]->SoDong *2 < 10)
							{
								cout << "0" << ds.data[i]->SoDong*2;
							}
							else
							{
								cout << ds.data[i]->SoDong*2;
							}
							gotoxy(103,34);
							cout << "Ban co chac chan muon xoa";
							gotoxy(103,35);
							cout << "Nhan Y de XOA; Nhan phim bat ky de huy";
							c = getch();
							if (c == -32 || c == 0)
							{
								kytu = 0;
								c = getch();
							}
							else
							{
								kytu = 1;
							}
							if (InHoa(c) == 89 && kytu)
							{
								delete ds.data[i];
								for (int j = i+1; j < ds.SoLuong; j++)
								{
									ds.data[j-1] = ds.data[j];
								}
								ds.SoLuong--;
								gotoxy(108,37);
								cout << "Xoa thanh cong!";
								Sleep(500);
								ClearManHinhChinh();
								return;
							}
							gotoxy(92,24);
							// xoa tu loai den cuoi 
							for (int i = 1; i <= 13; i++)
							{
								for (int j = 1; j <= 60; j++ )
								{
									cout << " ";
								}
								gotoxy(wherex()-60,wherey()+1);
							}
							// quay ve so hieu de nhap lai
							gotoxy(103+temp.length(),20);
							HienConTro();
							timthay = 1;
							break;
							
						}
					}
					if (!timthay)
					{
						gotoxy(98,24);
						cout << "Khong co du lieu";
						gotoxy(93,26);
						cout << "Nhan phim bat ky de tiep tuc nhap";
						AnConTro();
					}
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
			if (!timthay)
			{
				gotoxy(98,24);
				cout << "                     ";
				gotoxy(93,26);
				cout << "                                  ";
			}
		}
		AnConTro();
		gotoxy (98,36);
		cout << "Bam co muon thoat";
		gotoxy(98,37);
		cout << "Nhan Y de thoat; Nhan phim bat ky de tiep tuc";
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
		if (InHoa(c) == 89 && kytu)
		{
			ClearManHinhChinh();
			return;
		}
		else
		{
			gotoxy (98,36);
			cout << "                    ";
			gotoxy(98,37);
			cout << "                                                ";
		}
	}
}
void ChinhSuaMB(DanhSach_MB &ds)
{
	ChangeColor(15);
	DanhSach_MB Phu;
	Phu.SoLuong = ds.SoLuong;
	// Copy
	for (int i = 0; i < ds.SoLuong; i++)
	{
		Phu.data[i] = new MayBay;
		Phu.data[i]->SoHieuMB = ds.data[i]->SoHieuMB;
		Phu.data[i]->LoaiMayBay = ds.data[i]->LoaiMayBay;
		Phu.data[i]->SoDong = ds.data[i]->SoDong;
		Phu.data[i]->SoDay = ds.data[i]->SoDay;
	}
	gotoxy(99,17);
	cout << "NHAP THONG TIN";
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
	gotoxy(103,20);
	HienConTro();
	string temp = "";
	char c = getch();
	bool kytu;
	bool timthay = 0;
	bool thoat = 0;
	if (c == -32 || c == 0)
	{
		c = getch();
		kytu = 0;
	}
	else
	{
		kytu = 1;
	}
	while (1)
	{
		while (c != 27)
		{
			thoat = 0;
			timthay = 0;
			gotoxy(103+temp.length(),20);
			HienConTro();
			if (kytu)
			{
				if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
				{
					if (temp.length() < 15)
					{
						cout << (char) InHoa(c);
						temp = temp + (char) InHoa(c);
					}
					else
					{
						AnConTro();
						gotoxy(122,20);
						cout << "It hon 15 ky tu";
						Sleep(500);
						gotoxy(122,20);
						cout << "                ";
						gotoxy(118,20);
						HienConTro();
					}
				}
				if (c == 8)
				{
					if (temp.length() == 0)
					{
						AnConTro();
						gotoxy(122,20);
						cout << "Khong the xoa";
						Sleep(500);
						gotoxy(122,20);
						cout << "               ";
						gotoxy(103,20);
						HienConTro();
					}
					else
					{
						AnConTro();
						gotoxy(wherex()-1,wherey());
						cout << " ";
						gotoxy(wherex()-1,wherey());
						temp.erase(temp.length()-1);
						HienConTro();
					}
				}
				if (c == 13) // phim enter
				{
					for (int i = 0; i < Phu.SoLuong; i++)
					{
						if (Phu.data[i]->SoHieuMB == temp)
						{
							// in ra thong tin cua may bay va hoi nguoi dung co muon xoa k
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
							gotoxy(103,25);
							cout << Phu.data[i]->LoaiMayBay;
							gotoxy(103,30);
							if (Phu.data[i]->SoDong *2 < 10)
							{
								cout << "0" << Phu.data[i]->SoDong*2;
							}
							else
							{
								cout << Phu.data[i]->SoDong*2;
							}
							if (NhapDuLieuMB(Phu.data[i],Phu,c) )
							{
								// save
								delete ds.data[i];
								ds.data[i] = new MayBay;
								ds.data[i]->SoHieuMB = Phu.data[i]->SoHieuMB;
								ds.data[i]->LoaiMayBay = Phu.data[i]->LoaiMayBay;
								ds.data[i]->SoDong = Phu.data[i]->SoDong;
								thoat = 1;
							}
							else
							{
								if ((InHoa(c) == 89 && wherex() == 93 && wherey() == 10))
								{
									gotoxy(92,24);
									for (int i = 1; i <= 18; i++)
									{
										for (int j = 1; j <= 60; j++)
										{
											cout << " ";
										}
										gotoxy(wherex()-60,wherey()+1);
									}
									thoat = 1;
								}
								else
								{
									return;
								}
							}
							timthay = 1;
							break;
							
						}
					}
					if (!timthay)
					{
						gotoxy(98,24);
						cout << "Khong co du lieu";
						gotoxy(93,26);
						cout << "Nhan phim bat ky de tiep tuc nhap";
						AnConTro();
					}
				}
			}
			if (thoat)
			{
				gotoxy(99,17);
				ChangeColor(15);
				cout << "NHAP THONG TIN";
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
			}
			gotoxy(103,20);
			cout << temp;
			HienConTro();
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
			if (!timthay)
			{
				gotoxy(98,24);
				cout << "                     ";
				gotoxy(93,26);
				cout << "                                  ";
			}
		}
		AnConTro();
		gotoxy (98,36);
		cout << "Bam co muon thoat";
		gotoxy(98,37);
		cout << "Nhan Y de thoat; Nhan phim bat ky de tiep tuc";
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
		if (InHoa(c) == 89 && kytu)
		{
			ClearManHinhChinh();
			return;
		}
		else
		{
			gotoxy (98,36);
			cout << "                    ";
			gotoxy(98,37);
			cout << "                                                ";
		}
	}
}
bool NhapDuLieuCB(DanhSach_CB *chuyenbay, List &dscb, DanhSach_MB &dsmb)
{
	KhungCB();
	ChangeColor(12);
	char traitren = 218;
	char traiduoi = 192;
	char phaitren = 191;
	char phaiduoi = 217;
	char ngang = 196;
	char doc = 179;
	string trangthai;
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
	gotoxy(chuyenbay->data.MaCB.length() + 103, 7);
	char c = getch();
	bool kytu;
	if (c == -32 || c == 0)
	{
		c = getch();
		kytu = 0;
	}
	else
	{
		kytu = 1;
	}
	int dem = 0;
	bool kt = 0;
	while (1)
	{
		while (c != 27)
		{
			kt = 0;
			if (!kytu)
			{
				if (c == 72) // Up
				{
					if (dem > 0)
					{
						AnConTro();
						ChangeColor(15);
						KhungCB();
						gotoxy(103,7);
						cout << chuyenbay->data.MaCB;
						gotoxy(103,12);
						if (chuyenbay->data.NgayKhoiHanh.Ngay != 0)
						{
							if (chuyenbay->data.NgayKhoiHanh.Ngay <= 9)
							{
								cout << "0" << chuyenbay->data.NgayKhoiHanh.Ngay;
							}
							else
							{
								cout << chuyenbay->data.NgayKhoiHanh.Ngay;
							}
						}
						gotoxy(103,17);
						if (chuyenbay->data.NgayKhoiHanh.Thang != 0)
						{
							if (chuyenbay->data.NgayKhoiHanh.Thang  <= 9)
							{
								cout << "0" << chuyenbay->data.NgayKhoiHanh.Thang;
							}
							else
							{
								cout << chuyenbay->data.NgayKhoiHanh.Thang;
							}
						}
						gotoxy(102,22);
						if (chuyenbay->data.NgayKhoiHanh.Nam != 0)
						{
							cout << chuyenbay->data.NgayKhoiHanh.Nam;
						}
						gotoxy(103,27);
						if (chuyenbay->data.NgayKhoiHanh.Gio <= 9)
						{
							cout << "0" << chuyenbay->data.NgayKhoiHanh.Gio;
						}
						else
						{
							cout << chuyenbay->data.NgayKhoiHanh.Gio;
						}
						gotoxy(103,32);
						cout << chuyenbay->data.SanBayDen;
						gotoxy(103,37);
						cout << trangthai;
						gotoxy(103,42);
						cout << chuyenbay->data.SoHieuMB;
						dem--;
						switch (dem)
						{
							case 0: // MaCB
								{
									AnConTro();
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,7);
									cout << chuyenbay->data.MaCB;
									HienConTro();
									break;
								}
							case 1: // Ngay
								{
									ChangeColor(12);
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
									gotoxy(103,12);
									ChangeColor(15);
									if (chuyenbay->data.NgayKhoiHanh.Ngay != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Ngay <= 9)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Ngay;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Ngay;
										}
									}
									HienConTro();
									break;
								}
							case 2: // Thang
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(103,17);
									if (chuyenbay->data.NgayKhoiHanh.Thang != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Thang <= 9)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Thang;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Thang;
										}
									}
									HienConTro();
									break;
								}
							case 3: // Nam
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(102,22);
									ChangeColor(15);
									if (chuyenbay->data.NgayKhoiHanh.Nam != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Nam < 10)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Nam;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Nam;
										}
									}
									HienConTro();
									break;
								}
							case 4: // Gio
								{
									ChangeColor(12);
									gotoxy(96,27);
									AnConTro();
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
									ChangeColor(15);
									gotoxy(103,27);
									if (chuyenbay->data.NgayKhoiHanh.Gio < 10)
									{
										cout << "0" << chuyenbay->data.NgayKhoiHanh.Gio;
									}
									else
									{
										cout << chuyenbay->data.NgayKhoiHanh.Gio;
									}
									HienConTro();
									break;
								}
							case 5: // Diem den
								{
									AnConTro();
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,32);
									cout << chuyenbay->data.SanBayDen;
									HienConTro();
									break;
								}
							case 6: // Trang thai
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(103,37);
									{
										ChangeColor(15);
										gotoxy(103,37);
										cout << "          ";
										gotoxy(103,37);
										cout  <<  trangthai;
									}
									HienConTro();
									break;
								}
							case 7: // So Hieu
								{
									AnConTro();
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,42);
									cout << chuyenbay->data.SoHieuMB;
									HienConTro();
									break;
								}
							case 8: // Xac nhan
								{
									ChangeColor(192);
									gotoxy(97,46);
									cout << "XAC NHAN";
									break;
								}
						}
					}
				}
				if (c == 80) // Down
				{
					if (dem < 9)
					{
						AnConTro();
						ChangeColor(15);
						KhungCB();
						gotoxy(103,7);
						cout << chuyenbay->data.MaCB;
						gotoxy(103,12);
						if (chuyenbay->data.NgayKhoiHanh.Ngay != 0)
						{
							if (chuyenbay->data.NgayKhoiHanh.Ngay <= 9)
							{
								cout << "0" << chuyenbay->data.NgayKhoiHanh.Ngay;
							}
							else
							{
								cout << chuyenbay->data.NgayKhoiHanh.Ngay;
							}
						}
						gotoxy(103,17);
						if (chuyenbay->data.NgayKhoiHanh.Thang != 0)
						{
							if (chuyenbay->data.NgayKhoiHanh.Thang  <= 9)
							{
								cout << "0" << chuyenbay->data.NgayKhoiHanh.Thang;
							}
							else
							{
								cout << chuyenbay->data.NgayKhoiHanh.Thang;
							}
						}
						gotoxy(102,22);
						if (chuyenbay->data.NgayKhoiHanh.Nam != 0)
						{
							cout << chuyenbay->data.NgayKhoiHanh.Nam;
						}
						gotoxy(103,27);
						if (chuyenbay->data.NgayKhoiHanh.Gio <= 9)
						{
							cout << "0" << chuyenbay->data.NgayKhoiHanh.Gio;
						}
						else
						{
							cout << chuyenbay->data.NgayKhoiHanh.Gio;
						}
						gotoxy(103,32);
						cout << chuyenbay->data.SanBayDen;
						gotoxy(103,37);
						cout << trangthai;
						gotoxy(103,42);
						cout << chuyenbay->data.SoHieuMB;
						dem++;
						switch (dem)
						{
							case 9: // Huy
								{
									ChangeColor(192);
									gotoxy(114,46);
									cout << "HUY";
									break;
								}
							case 1: // Ngay
								{
									ChangeColor(12);
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
									gotoxy(103,12);
									ChangeColor(15);
									if (chuyenbay->data.NgayKhoiHanh.Ngay != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Ngay <= 9)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Ngay;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Ngay;
										}
									}
									HienConTro();
									break;
								}
							case 2: // Thang
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(103,17);
									ChangeColor(15);
									if (chuyenbay->data.NgayKhoiHanh.Thang != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Thang <= 9)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Thang;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Thang;
										}
									}
									HienConTro();
									break;
								}
							case 3: // Nam
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(102,22);
									ChangeColor(15);
									if (chuyenbay->data.NgayKhoiHanh.Nam != 0)
									{
										if (chuyenbay->data.NgayKhoiHanh.Nam < 10)
										{
											cout << "0" << chuyenbay->data.NgayKhoiHanh.Nam;
										}
										else
										{
											cout << chuyenbay->data.NgayKhoiHanh.Nam;
										}
									}
									HienConTro();
									break;
								}
							case 4: // Gio
								{
									ChangeColor(12);
									gotoxy(96,27);
									AnConTro();
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
									ChangeColor(15);
									gotoxy(103,27);
									if (chuyenbay->data.NgayKhoiHanh.Gio < 10)
									{
										cout << "0" << chuyenbay->data.NgayKhoiHanh.Gio;
									}
									else
									{
										cout << chuyenbay->data.NgayKhoiHanh.Gio;
									}
									HienConTro();
									break;
								}
							case 5: // Diem den
								{
									AnConTro();
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,32);
									cout << chuyenbay->data.SanBayDen;
									HienConTro();
									break;
								}
							case 6: // Trang thai
								{
									AnConTro();
									ChangeColor(12);
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
									gotoxy(103,37);
									
									{
										ChangeColor(15);
										gotoxy(103,37);
										cout << "          ";
										gotoxy(103,37);
										cout << trangthai;
									}
									HienConTro();
									break;
								}
							case 7: // So Hieu
								{
									AnConTro();
									ChangeColor(12);
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
									ChangeColor(15);
									gotoxy(103,42);
									cout << chuyenbay->data.SoHieuMB;
									HienConTro();
									break;
								}
							case 8: // Xac nhan
								{
									ChangeColor(192);
									gotoxy(97,46);
									cout << "XAC NHAN";
									break;
								}
						}
					}
				}
			}
			else
			{
				if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57) || c == 32)
				{
					ChangeColor(15);
					switch (dem)
					{
						case 0: // MaCB
							{
								if (chuyenbay->data.MaCB.length() < 15)
								{
									if (c != 32)
									{
										ChangeColor(15);
										cout << (char) InHoa(c);
										chuyenbay->data.MaCB = chuyenbay->data.MaCB + (char) InHoa(c);
									}
								}
								else
								{
									AnConTro();
									gotoxy(122,7);
									cout << "It hon 15 ky tu";
									Sleep(500);
									gotoxy(122,7);
									cout << "                ";
									gotoxy(118,7);
									HienConTro();
								}
								break;
							}
						case 1: // Ngay
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
								if (chuyenbay->data.NgayKhoiHanh.Thang == 0)
								{
									while (chuyenbay->data.NgayKhoiHanh.Ngay == 0 || chuyenbay->data.NgayKhoiHanh.Ngay > 31)
									{
										AnConTro();
										gotoxy(109,12);
										cout << "Ngay khong hop le";
										Sleep(500);
										gotoxy(109,12);
										cout << "                  ";
										chuyenbay->data.NgayKhoiHanh.Ngay = 0;
										gotoxy(103,12);
										cout << "   ";
										gotoxy(103,12);
										HienConTro();
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
										XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
									}
								}
								else
								{
									while (chuyenbay->data.NgayKhoiHanh.Ngay == 0 || chuyenbay->data.NgayKhoiHanh.Ngay > SoNgayTrongThang(chuyenbay->data.NgayKhoiHanh.Thang,chuyenbay->data.NgayKhoiHanh.Nam))
									{
										AnConTro();
										gotoxy(109,12);
										cout << "Ngay khong hop le";
										Sleep(500);
										gotoxy(109,12);
										cout << "                  ";
										chuyenbay->data.NgayKhoiHanh.Ngay = 0;
										gotoxy(103,12);
										cout << "   ";
										gotoxy(103,12);
										HienConTro();
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
										XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
									}
								}
								break;
							}
						case 2: // Thang
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Thang,c,kytu,2);
								while (chuyenbay->data.NgayKhoiHanh.Thang == 0 || chuyenbay->data.NgayKhoiHanh.Thang > 12)
								{
									AnConTro();
									gotoxy(109,17);
									cout << "Thang khong hop le";
									Sleep(500);
									gotoxy(109,17);
									cout << "                    ";
									gotoxy(103,17);
									cout << "   ";
									gotoxy(103,17);
									HienConTro();
									chuyenbay->data.NgayKhoiHanh.Thang = 0;
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
									XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Thang,c,kytu,2);
								}
								break;
							}
						case 3: // Nam
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Nam,c,kytu,4);
								while (chuyenbay->data.NgayKhoiHanh.Nam == 0)
								{
									AnConTro();
									gotoxy(111,22);
									cout << "Nam >= 0";
									Sleep(500);
									gotoxy(111,22);
									cout << "         ";
									gotoxy(102,22);
									cout << "    ";
									gotoxy(103,22);
									HienConTro();
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
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Nam,c,kytu,4);
								break;
							}
						case 4: // Gio
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Gio,c, kytu, 2);
								while (chuyenbay->data.NgayKhoiHanh.Gio > 23)
								{
									AnConTro();
									gotoxy(109,27);
									cout << "Gio khong hop le";
									Sleep(500);
									gotoxy(109,27);
									cout << "                 ";
									gotoxy(103,27);
									cout << "  ";
									chuyenbay->data.NgayKhoiHanh.Gio = 0;
									gotoxy(103,27);
									HienConTro();
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
									XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Gio,c,kytu,2);
								}
								break;
							}
						case 5: // Diem den
							{
								if (chuyenbay->data.SanBayDen.length() < 20 )
								{
									if (c != 32)
									{
										cout << (char) InHoa(c);
										chuyenbay->data.SanBayDen = chuyenbay->data.SanBayDen + (char) InHoa(c);
									}	
								}
								else
								{
									AnConTro();
									gotoxy(127,32);
									cout << "It hon 20 ky tu";
									Sleep(500);
									gotoxy(127,32);
									cout << "                ";
									gotoxy(123,32);
									HienConTro();
								}
								break;
							}
						case 6: // Trang thai
							{
								if (trangthai.length() < 10)
								{
									if (c == 32)
									{
										if (trangthai[trangthai.length()-1] != 32)
										{
											cout << c;
											trangthai = trangthai + (char) c;
										}
									}
									else
									{
										if (!(c >= 48 && c <= 57))
										{
											cout << (char) InHoa(c);
											trangthai = trangthai+(char) InHoa(c);
										}
									}
								}
								else
								{
									AnConTro();
									gotoxy(117,37);
									cout << "It hon 10 ky tu";
									Sleep(500);
									gotoxy(117,37);
									cout << "                ";
									gotoxy(113,wherey());
									HienConTro();
								}
								break;
							}
						case 7: // So Hieu
							{
								if (chuyenbay->data.SoHieuMB.length() < 15)
								{
									if (c != 32)
									{
										cout << (char) InHoa(c);
										chuyenbay->data.SoHieuMB = chuyenbay->data.SoHieuMB + (char) InHoa(c);
									}
								}
								else
								{
									AnConTro();
									gotoxy(122,42);
									cout << "It hon 15 ky tu";
									Sleep(500);
									gotoxy(122,42);
									cout << "               ";
									gotoxy(118,42);
									HienConTro();
								}
								break;
							}
					}
				}
				if (c == 8) // BackSpace
				{
					switch (dem)
					{
						case 0: // MaCB
							{
								ChangeColor(15);
								if (chuyenbay->data.MaCB.length() != 0)
								{
									AnConTro();
									gotoxy(wherex()-1,wherey());
									cout << " ";
									gotoxy(wherex()-1,wherey());
									HienConTro();
									chuyenbay->data.MaCB.erase(chuyenbay->data.MaCB.end()-1);
								}
								else
								{
									AnConTro();
									gotoxy(122,7);
									cout << "Khong the xoa";
									Sleep(500);
									gotoxy(122,7);
									cout << "              ";
									gotoxy(103,7);
									HienConTro();
								}
								break;
							}
						case 1: // Ngay
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
								if (chuyenbay->data.NgayKhoiHanh.Thang == 0)
								{
									while (chuyenbay->data.NgayKhoiHanh.Ngay == 0 || chuyenbay->data.NgayKhoiHanh.Ngay > 31)
									{
										AnConTro();
										gotoxy(109,12);
										cout << "Ngay khong hop le";
										Sleep(500);
										gotoxy(109,12);
										cout << "                  ";
										chuyenbay->data.NgayKhoiHanh.Ngay = 0;
										gotoxy(103,12);
										cout << "   ";
										gotoxy(103,12);
										HienConTro();
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
										XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
									}
								}
								else
								{
									while (chuyenbay->data.NgayKhoiHanh.Ngay == 0 || chuyenbay->data.NgayKhoiHanh.Ngay > SoNgayTrongThang(chuyenbay->data.NgayKhoiHanh.Thang,chuyenbay->data.NgayKhoiHanh.Nam))
									{
										AnConTro();
										gotoxy(109,12);
										cout << "Ngay khong hop le";
										Sleep(500);
										gotoxy(109,12);
										cout << "                  ";
										chuyenbay->data.NgayKhoiHanh.Ngay = 0;
										gotoxy(103,12);
										cout << "   ";
										gotoxy(103,12);
										HienConTro();
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
										XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Ngay,c,kytu,2);
									}
								}
								break;
							}
						case 2: // Thang
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Thang,c,kytu,2);
								while (chuyenbay->data.NgayKhoiHanh.Thang == 0 || chuyenbay->data.NgayKhoiHanh.Thang > 12)
								{
									AnConTro();
									gotoxy(109,17);
									cout << "Thang khong hop le";
									Sleep(500);
									gotoxy(109,17);
									cout << "                    ";
									gotoxy(103,17);
									cout << "   ";
									gotoxy(103,17);
									HienConTro();
									chuyenbay->data.NgayKhoiHanh.Thang = 0;
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
									XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Thang,c,kytu,2);
								}
								break;
							}
						case 3: // Nam
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Nam,c,kytu,4);
								while (chuyenbay->data.NgayKhoiHanh.Nam == 0)
								{
									AnConTro();
									gotoxy(111,22);
									cout << "Nam >= 0";
									Sleep(500);
									gotoxy(111,22);
									cout << "         ";
									gotoxy(103,22);
									cout << "    ";
									gotoxy(103,22);
									HienConTro();
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
									XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Nam,c,kytu,4);
								}
								break;
							}
						case 4: // Gio
							{
								XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Gio,c, kytu, 2);
								while (chuyenbay->data.NgayKhoiHanh.Gio > 23)
								{
									AnConTro();
									gotoxy(109,27);
									cout << "Gio khong hop le";
									Sleep(500);
									gotoxy(109,27);
									cout << "                 ";
									gotoxy(103,27);
									cout << "  ";
									chuyenbay->data.NgayKhoiHanh.Gio = 0;
									gotoxy(103,27);
									HienConTro();
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
									XuLiNhapSo(chuyenbay->data.NgayKhoiHanh.Gio,c,kytu,2);
								}
								break;
							}
						case 5: // Diem den
							{
								if (chuyenbay->data.SanBayDen.length() != 0)
								{
									AnConTro();
									gotoxy(wherex()-1,wherey());
									cout << " ";
									gotoxy(wherex()-1,wherey());
									HienConTro();
									chuyenbay->data.SanBayDen.erase(chuyenbay->data.SanBayDen.length()-1);
								}
								else
								{
									AnConTro();
									gotoxy(127,32);
									cout << "Khong the xoa";
									Sleep(500);
									gotoxy(127,32);
									cout << "              ";
									gotoxy(103,32);
									HienConTro();
								}
								break;
							}
						case 6: // Trang thai
							{
								if (trangthai.length() != 0)
								{
									AnConTro();
									gotoxy(wherex()-1,wherey());
									cout << " ";
									gotoxy(wherex()-1,wherey());
									HienConTro();
									trangthai.erase(trangthai.length()-1);
								}
								else
								{
									AnConTro();
									gotoxy(117,37);
									cout << "Khong the xoa";
									Sleep(500);
									gotoxy(117,37);
									cout << "              ";
									gotoxy(103,37);
									HienConTro();
								}
								break;
							}
						case 7: // So Hieu
							{
								if (chuyenbay->data.SoHieuMB.length() != 0)
								{
									AnConTro();
									gotoxy(wherex()-1,wherey());
									cout << " ";
									gotoxy(wherex()-1,wherey());
									HienConTro();
									chuyenbay->data.SoHieuMB.erase(chuyenbay->data.SoHieuMB.length()-1);
								}
								else
								{
									AnConTro();
									gotoxy(122,42);
									cout << "Khong the xoa";
									Sleep(500);
									gotoxy(122,42);
									cout << "              ";
									gotoxy(103,42);
									HienConTro();
								}
								break;
							}
					}
				}
				if (c == 13)
				{
					ChangeColor(15);
					switch (dem)
					{
						case 8: // Xac nhan
							{
								if (chuyenbay->data.MaCB.length() == 0)
								{
									dem = 1;
									c = 72;
									kytu = 0;
									kt = 1;
								//	AnConTro();
									break;
								}
								bool kt1 = 0;
								for (DanhSach_CB *p = dscb.pHead; p != NULL; p = p->pNext)
								{
									if (p->data.MaCB == chuyenbay->data.MaCB && p != chuyenbay)
									{
										dem = 1;
										c = 72;
										kytu = 0;
										kt = 1;
										AnConTro();
										gotoxy(122,7);
										cout << "Trung Ma CB";
										Sleep(500);
										gotoxy(122,7);
										cout << "            ";
										kt1 = 1;
										break;
									}
								}
								if (kt1)
								{
									break;
								}
				/* ngay */		if (chuyenbay->data.NgayKhoiHanh.Ngay > SoNgayTrongThang(chuyenbay->data.NgayKhoiHanh.Thang,chuyenbay->data.NgayKhoiHanh.Nam) || chuyenbay->data.NgayKhoiHanh.Ngay == 0)
								{
									AnConTro();
									gotoxy(109,12);
									cout << "Ngay khong hop le!";
									Sleep(500);
									gotoxy(109,12);
									cout << "                   ";
									c = 72;
									dem = 2;
									kytu = 0;
									kt = 1;
									break;
								}
								if (chuyenbay->data.NgayKhoiHanh.Thang == 0)
								{
									AnConTro();
									gotoxy(109,17);
									cout << "Thang khong hop le!";
									Sleep(500);
									c = 72;
									dem = 3;
									kytu = 0;
									kt = 1;
									break;
								}
								if (chuyenbay->data.NgayKhoiHanh.Nam == 0)
								{
									AnConTro();
									gotoxy(109,22);
									cout << "Nam khong hop le!";
									Sleep(500);
									gotoxy(109,22);
									cout << "                 ";
									c = 72;
									dem = 4;
									kytu = 0;
									kt = 1;
									break;
								}
								if (chuyenbay->data.SanBayDen.length() == 0)
								{
									AnConTro();
									gotoxy(123,32);
									cout << "Khong bo trong";
									Sleep(500);
									gotoxy(123,32);
									cout << "               ";
									c = 72;
									dem = 6;
									kytu = 0;
									kt = 1;
									break;
								}
								if (chuyenbay->data.TrangThai == -1)
								{
									AnConTro();
									gotoxy(114,37);
									cout << "Trang thai khong hop le";
									Sleep(500);
									gotoxy(114,37);
									cout << "                       ";
									dem = 7;
									c = 72;
									kytu = 0;
									kt = 1;
									break;
								}
								int i = 0;
								for (i = 0; i < dsmb.SoLuong; i++)
								{
									if (chuyenbay->data.SoHieuMB == dsmb.data[i]->SoHieuMB)
									{
										break;
									}
								}
								if (i == dsmb.SoLuong)
								{
									AnConTro();
									gotoxy(121,42);
									cout << "So hieu khong ton tai";
									Sleep(500);
									gotoxy(121,42);
									cout << "                       ";
									c = 72;
									dem = 8;
									kytu = 0;
									kt = 1;
									break;
								}
								gotoxy(120,50);
								cout << "Them thanh cong";
								Sleep(1000);
								ClearManHinhChinh();
								return 1;
								break;
							}
						case 9 : // Huy
							{
								gotoxy(150,40);
								ChangeColor(15);
								cout << "Ban co chac chan muon huy?";
								gotoxy(150,41);
								cout << "Nhan Y de HUY; Nhan phim bat ky de tiep tuc";
								c = getch();
								if (c == -32 || c == 0)
								{
									kytu = 0;
									c = getch();
								}
								else
								{
									kytu = 1;
								}
								c = (char) InHoa(c);
								if (c == 89 && kytu)
								{
									ClearManHinhChinh();
									gotoxy(93,10); // De ham chinh sua nhan dien case // vl :v
									return 0;
								}
								{
									gotoxy(150,40);
									cout << "                                 ";
									gotoxy(150,41);
									cout << "                                                ";
									kytu = 0;
									c = 72;
//									thoat = 1;
								} 
								break;
							}
					}
				}
			}
			if (trangthai[0] == 23 || trangthai[trangthai.length()-1] == 23)
			{
				if (trangthai[0] == 23)
				{
					for (int i = 0; i < trangthai.length()-1; i++)
					{
						trangthai[i] = trangthai[i+1];
					}
				}
				trangthai.erase(trangthai.length()-1);
			}
			if  (trangthai ==  "HUY CHUYEN")
			{
				chuyenbay->data.TrangThai = 0;
			}
			else
			if (trangthai == "CON VE")
			{
				chuyenbay->data.TrangThai = 1;
			}
			else
			if (trangthai == "HET VE")
			{
				chuyenbay->data.TrangThai = 2;
			}
			else
			if (trangthai == "HOAN TAT")
			{
				chuyenbay->data.TrangThai = 3;
			}
			if (!kt)
			{
				c = getch();
				if (c == -32 || c == 0)
				{
					c = getch();
					kytu  = 0;
				}
				else
				{
					kytu = 1;
				}
			}
		}
		if (c == 27)
		{
			ChangeColor(15);
			gotoxy(130,40);
			cout << "Ban co chac chan muon thoat?";
			gotoxy(130,41);
			cout << "Nhan Y de THOAT; Nhan phim bat ky de tiep tuc";
			c = getch();
			if (c == -32 || c == 0)
			{
				kytu = 0;
				c = getch();
			}
			else
			{
				kytu = 1;
			}
			c = (char) InHoa(c);
			if (c == 89)
			{
				ClearManHinhChinh();
				return 0;
			}
			gotoxy(130,40);
			cout << "                                                   ";
			gotoxy(130,41);
			cout << "                                                   ";
			c = getch();
			if (c == -32 || c == 0)
			{
				kytu = 0;
				c = getch();
			}
			else
			{
				kytu = 1;
			}
		}
	}
}

void ThemCB(List &dscb, DanhSach_MB &dsmb)
{
	if (dscb.pHead == NULL && dscb.pTail == NULL)
	{
		dscb.pHead = new DanhSach_CB;
		dscb.pTail = dscb.pHead;
		if (!NhapDuLieuCB(dscb.pTail,dscb,dsmb))
		{
			delete dscb.pTail;
			dscb.pTail = NULL;
			dscb.pHead = NULL;
			return;
		}
		return;
	}
	dscb.pTail->pNext = new DanhSach_CB;
	if (!NhapDuLieuCB(dscb.pTail->pNext,dscb,dsmb))
	{
		delete dscb.pTail->pNext;
		dscb.pTail->pNext = NULL;
		return;
	}
	dscb.pTail = dscb.pTail->pNext;
	return;
}
void XoaCB(List &dscb)
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
	string temp;
	gotoxy(103,7);
	HienConTro();
	char c = getch();
	bool kytu;
	if (c == -32 || c == 0)
	{
		c = getch();
		kytu = 0;
	}
	else
	{
		kytu = 1;
	}
	bool kt = 0;
	bool timthay = 0;
	while (1)
	{
		while (c != 27)
		{
			timthay = 0;
			kt  = 0;
			if (kytu)
			{
				if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >=48 && c <= 57))
				{
					if (temp.length() < 15)
					{
						cout << (char) InHoa(c);
						temp = temp + (char) InHoa(c);
					}
					else
					{
						AnConTro();
						gotoxy(122,7);
						cout << "It hon 15 ky tu";
						Sleep(500);
						gotoxy(122,7);
						cout << "                ";
						gotoxy(118,7);
						HienConTro();
					}
				}
				if (c == 8)
				{
					if (temp.length() != 0)
					{
						AnConTro();
						gotoxy(wherex()-1,wherey());
						cout << " ";
						gotoxy(wherex()-1,wherey());
						HienConTro();
						temp.erase(temp.length()-1);
					}
					else
					{
						AnConTro();
						gotoxy(122,7);
						cout << "Khong the xoa";
						Sleep(500);
						gotoxy(122,7);
						cout << "             ";
						gotoxy(103,7);
						HienConTro();
					}
				}
				if (c == 13)
				{
					DanhSach_CB *p;
					for (p = dscb.pHead; p != NULL; p = p->pNext)
					{
						if (p->data.MaCB == temp)
						{
							timthay = 1;
							AnConTro();
							KhungCB();
							gotoxy(103,7);
							cout << p->data.MaCB;
							gotoxy(103,12);
							if (p->data.NgayKhoiHanh.Ngay != 0)
							{
								if (p->data.NgayKhoiHanh.Ngay <= 9)
								{
									cout << "0" << p->data.NgayKhoiHanh.Ngay;
								}
								else
								{
									cout << p->data.NgayKhoiHanh.Ngay;
								}
							}
							gotoxy(103,17);
							if (p->data.NgayKhoiHanh.Thang != 0)
							{
								if (p->data.NgayKhoiHanh.Thang  <= 9)
								{
									cout << "0" << p->data.NgayKhoiHanh.Thang;
								}
								else
								{
									cout << p->data.NgayKhoiHanh.Thang;
								}
							}
							gotoxy(102,22);
							if (p->data.NgayKhoiHanh.Nam != 0)
							{
								cout <<p->data.NgayKhoiHanh.Nam;
							}
							gotoxy(103,27);
							if (p->data.NgayKhoiHanh.Gio <= 9)
							{
								cout << "0" <<p->data.NgayKhoiHanh.Gio;
							}
							else
							{
								cout << p->data.NgayKhoiHanh.Gio;
							}
							gotoxy(103,32);
							cout << p->data.SanBayDen;
							gotoxy(103,37);
							switch (p->data.TrangThai)
							{
								case 0:
									{
										cout << "HUY CHUYEN";
										break;
									}
								case 1:
									{
										cout << "CON VE";
										break;
									}
								case 2:
									{
										cout << "HET VE";
										break;
									}
								case 3:
									{
										cout << "HOAN TAT";	
										break;
									}
							}
							gotoxy(103,42);
							cout << p->data.SoHieuMB;
							gotoxy(103,50);
							cout << "Ban co chac chan muon xoa";
							gotoxy(103,51);
							cout << "Nhan Y de XOA; Nhan phim bat ky de huy";
							c = getch();
							if (c == -32 || c == 0)
							{
								kytu = 0;
								c = getch();
							}
							else
							{
								kytu = 1;
							}
							if (InHoa(c) == 89)
							{
								if (p == dscb.pHead)
								{
									if (p == dscb.pTail)
									{
										dscb.pTail = NULL;
										delete p;
										dscb.pHead = NULL;
									}
									else
									{
										dscb.pHead = dscb.pHead->pNext;
										delete p;
									}
								}
								else
								{
									if (p->pNext == NULL)
									{
										DanhSach_CB *tam;
										for (tam = dscb.pHead; tam->pNext != p; tam = tam->pNext);
										delete p;
										tam->pNext = NULL;
										dscb.pTail = tam;
									}
									else
									{
										DanhSach_CB *tam;
										for (tam = dscb.pHead; tam->pNext != p; tam = tam->pNext);
										tam->pNext = p->pNext;
										delete p;
									}
								}
								temp = "";
							}
						
							{
								AnConTro();
								gotoxy(42,10);
								for (int i = 1; i <= 43; i++)
								{
									for (int j = 1; j <= 120; j++)
									{
										cout << " ";
									}
									gotoxy(wherex()-120,wherey()+1);
								}
								gotoxy(103,7);
								cout << "               ";
								gotoxy(103,7);
								cout << temp;
								HienConTro();
							}
						}
					}
					if  (!timthay)
					{
						AnConTro();
						gotoxy(103,10);
						cout << "Khong tim thay du lieu";
						Sleep(1000);
						gotoxy(103,10);
						cout << "                      ";
						gotoxy(103,7);
						cout << temp;
						HienConTro();
					}
				}
			}
			c = getch();
			if (c == -32 || c == 0)
			{
				kytu = 0;
				c = getch();
			}
			else
			{
				kytu = 1;
			}
		}
		ChangeColor(15);
		gotoxy(130,40);
		cout << "Ban co chac chan muon thoat?";
		gotoxy(130,41);
		cout << "Nhan Y de THOAT; Nhan phim bat ky de tiep tuc";
		c = getch();
		if (c == -32 || c == 0)
		{
			kytu = 0;
			c = getch();
		}
		else
		{
			kytu = 1;
		}
		c = (char) InHoa(c);
		if (c == 89)
		{
			ClearManHinhChinh();
			return ;
		}
		gotoxy(130,40);
		cout << "                                                   ";
		gotoxy(130,41);
		cout << "                                                   ";
		c = getch();
		if (c == -32 || c == 0)
		{
			kytu = 0;
			c = getch();
		}
		else
		{
			kytu = 1;
		}
		gotoxy(103+temp.length(),7);
		HienConTro();
	}
}
#endif
