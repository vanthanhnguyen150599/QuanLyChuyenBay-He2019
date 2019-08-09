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
							XuLiNhapSo(temp ,c,kytu);
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
									XuLiNhapSo(temp,c,kytu);
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
							XuLiNhapSo(temp,c,kytu);
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
								XuLiNhapSo(temp,c,kytu);
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
bool NhapDuLieuCB(DanhSach_CB *chuyenbay, List &dscb)
{
	KhungCB();
}
void ThemCB(List &dscb)
{
	dscb.pTail->pNext = new DanhSach_CB;
	if (!NhapDuLieuCB(dscb.pTail->pNext,dscb))
	{
		delete dscb.pTail->pNext;
		dscb.pTail->pNext = NULL;
		return;
	}
	dscb.pTail = dscb.pTail->pNext;
	return;
}
#endif
