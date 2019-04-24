	
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f;
	int err = fopen_s(&f, "C:\\data\\integer.dat", "r");
	int n = 10;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		fscanf_s(f,"%d", &x);
		//in ra man hinh
		printf("%5d", x);
		s = s + x;
	}
	//dong tep
	fclose(f);
	printf("\n Tong = %d", s);
	_getch();
}
----------Copy file
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f1,*f2;
	int err1 = fopen_s(&f1, "C:\\data\\test_in.txt", "r");
	int err2 = fopen_s(&f2, "C:\\data\\test_out.txt", "w");
	while (!feof(f1))
	{
		char c = fgetc(f1);
		if (c != feof(f1)) fputc(c, f2);
	}
	//dong tep
	fclose(f1);
	fclose(f2);
	printf("\n OK");
	_getch();
}
-------------------Dem ky tu
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f1, *f2;
	int err1 = fopen_s(&f1, "C:\\data\\test_in.txt", "r");
	int err2 = fopen_s(&f2, "C:\\data\\characters.txt", "w");
	int counter[256];
	for (int i = 0; i < 256; i++)
		counter[i] = 0;

	while (!feof(f1))
	{
		char c = fgetc(f1);
		counter[c] ++;
	}
	//write to f2
	for (int i = 0; i < 256; i++)
		if (counter[i] != 0)
			fprintf_s(f2, "\n %c = %d", i, counter[i]);
	//dong tep
	fclose(f1);
	fclose(f2);
	printf("\n OK");
	_getch();
}
----------Random access file--------------
//
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f;
	int err = fopen_s(&f, "C:\\data\\integer1.dat", "wb");
	int n = 10;
	for (int i = 0; i < 10; i++)
	{
		int x;
		printf("\n Nhap so thu %d: ", i);
		scanf_s("%d", &x);
		//ghi vao tep
		fwrite(&x,sizeof(x),1,f);
	}
	//dong tep
	fclose(f);
	_getch();
}

// Lect2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f;
	int err = fopen_s(&f, "C:\\data\\integer1.dat", "rb");
	int n = 10;
	int s = 0;
	for (int i = 0; i <n; i++)
	{
		int x;
		fread(&x, sizeof(x), 1, f);
		//ghi vao tep
		printf("%5d", x);
		s = s + x;
	}
	//dong tep
	printf("\n tong  = %d", s);
	fclose(f);
	_getch();
}

-----------------SEEK-----------------------
//
#include "pch.h"
#include <stdio.h>
#include <conio.h>

void main() {
	FILE *f;
	int err = fopen_s(&f, "C:\\data\\integer1.dat", "rb");
	int n;
	printf("Nhap vi tri can tim n ="); scanf_s("%d", &n);
	//tim vi tri can doc
	fseek(f, n*sizeof(int), SEEK_SET);
	//doc du lieu
	int x;
	fread(&x, sizeof(int), 1, f);
	//in ra man hinh
	printf("\n Phan tu o vi tri %d = %d",n, x);
	fclose(f);
	_getch();
}

#include "pch.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

void create_file(char *filename)
{
	//Ghi vao tep
	FILE *f;
	int err = fopen_s(&f, filename, "wt");
	if (err != NULL)
	{
		printf(" khong mo duoc tep!");
		return;
	}
	int n;
	printf("\n Nhap n =");
	scanf_s("%d", &n);
	fprintf(f, "%d\n", n);
	//ghi cac phan tu
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap pha tu thu %d = ", i);
		float x;
		scanf_s("%f", &x);
		fprintf(f, "%6.2f", x);
	}
	fclose(f);
}
void read_file(char *filename, float a[], int *size)
{
	//Ghi vao tep
	FILE *f;
	int err = fopen_s(&f, filename, "rt");
	if (err != NULL)
	{
		printf(" khong mo duoc tep!");
		return;
	}
	int n;
	fscanf_s(f,"%d", &n);
	*size = n;
	//doc cac phan tu
	for (int i = 0; i < n; i++)
	{
		float x;
		fscanf_s(f,"%f", &x);
		printf("%6.2f", x);
		a[i] = x;
	}
	fclose(f);
}
void search_array(float a[], int size)
{
	float x;
	printf("\n Nhap x = ");
	scanf_s("%f", &x);
	int kt = 0;
	for (int i = 0; i<size; i++)
		if (fabs(a[i]-x) < 0.000001)
		{
			printf("\n Phan tu can tim o vi tri %d", i);
			kt = 1;
			break;
		}
	if (kt == 0)
		printf("\n Khong tim thay!");
	else
		printf("\n tim thay!");

}
void search_min_max(float a[], int size)
{
	int m1 = a[0];
	int m2 = a[0];
	for (int i = 0; i < size; i++)
	{
		if (m1 < a[i]) m1 = a[i];
		if (m2 > a[i]) m2 = a[i];
	}
	printf("\n min = %6.2f, max = %6.2f", m2, m1);
}
void main() {
	char filename[256] = "C:\\data\\mydata.txt";
	float a[1000];
	int size;
	while (true)
	{
		int n;
		printf("\n 1. Tao mang");
		printf("\n 2. Hien thi mang");
		printf("\n 3. Tim kiem");
		printf("\n 4. Tim min - max");
		printf("\n 5. Ket thuc");
		printf("\n Chon n = ");
		scanf_s("%d", &n);
		if (n == 5) break;
		if (n == 1) create_file(filename);
		if (n == 2) read_file(filename, a, &size);
		if (n == 3)search_array(a, size);
		if (n == 4) search_min_max(a, size);
	}	
	_getch();
}
