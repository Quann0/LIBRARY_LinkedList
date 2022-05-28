#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


struct sach
{
	int Vitri;
	int Namxuatban; 
	char Tentacgia[30];
	char Masach[30];
	char Tensach[100];
	char Tinhtrang[100];
};

typedef struct sach sach_t;

struct Thuvien
{
	sach_t data;
	struct Thuvien *pNext;
};

typedef struct Thuvien* tv;

tv taoNode(int vitri);
void Indong(int n);
void themsau(tv *a,int vitri);
void in(sach_t s);
void inds(tv a);
void in1sachtrongds(tv a);
void pressAnyKey();
void docFile();
void ghiFile(tv a, char file[]);
void Suathongtinsach(tv tv1);
void Suathongtin(tv a,int vitri);
void swap(tv b, tv c);
void sapxep(tv a,int x);
void XoaDau(tv* a);
void thaydoivitrisaukhixoa(tv a);
void Xoasachbatky(tv *a, int x);
