#include "pch.h"
#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

int rq1, rq2, rq3, rq4;
int gq1, gq2, gq3, gq4;
int bq1, bq2, bq3, bq4;
void send_data(char dioda, int r, int g, int b);

void stop() {
	send_data('a', 0, 0, 0);
	send_data('b', 0, 0, 0);
	send_data('c', 0, 0, 0);
	send_data('d', 0, 0, 0);
}

void lg() {

	rq1 = 0;
	gq1 = 0;
	bq1 = 0;

	int locationx1 = 260;
	int locationy1 = 120;
	HDC dc = ::GetDC(0);
	COLORREF Color = ::GetPixel(dc, locationx1, locationy1);
	int r1 = GetRValue(Color);
	rq1 = rq1 + r1;
	int g1 = GetGValue(Color);
	gq1 = gq1 + g1;
	int b1 = GetBValue(Color);
	bq1 = bq1 + b1;

	locationx1 = 520;
	locationy1 = 280;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx1, locationy1);
	r1 = GetRValue(Color);
	rq1 = rq1 + r1;
	g1 = GetGValue(Color);
	gq1 = gq1 + g1;
	b1 = GetBValue(Color);
	bq1 = bq1 + b1;

	locationx1 = 260;
	locationy1 = 280;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx1, locationy1);
	r1 = GetRValue(Color);
	rq1 = rq1 + r1;
	g1 = GetGValue(Color);
	gq1 = gq1 + g1;
	b1 = GetBValue(Color);
	bq1 = bq1 + b1;

	locationx1 = 520;
	locationy1 = 120;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx1, locationy1);
	r1 = GetRValue(Color);
	rq1 = rq1 + r1;
	g1 = GetGValue(Color);
	gq1 = gq1 + g1;
	b1 = GetBValue(Color);
	bq1 = bq1 + b1;
	rq1 = rq1 / 4;
	gq1 = gq1 / 4;
	bq1 = bq1 / 4;
	send_data('a', rq1, gq1, bq1);
}

void pd() {

	rq2 = 0;
	gq2 = 0;
	bq2 = 0;

	int locationx2 = 940;
	int locationy2 = 500;
	HDC dc = ::GetDC(0);
	COLORREF Color = ::GetPixel(dc, locationx2, locationy2);
	int r1 = GetRValue(Color);
	rq2 = rq2 + r1;
	int g1 = GetGValue(Color);
	gq2 = gq2 + g1;
	int b1 = GetBValue(Color);
	bq2 = bq2 + b1;

	locationx2 = 1100;
	locationy2 = 660;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq2 = rq2 + r1;
	g1 = GetGValue(Color);
	gq2 = gq2 + g1;
	b1 = GetBValue(Color);
	bq2 = bq2 + b1;

	locationx2 = 940;
	locationy2 = 660;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq2 = rq2 + r1;
	g1 = GetGValue(Color);
	gq2 = gq2 + g1;
	b1 = GetBValue(Color);
	bq2 = bq2 + b1;

	locationx2 = 1100;
	locationy2 = 500;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq2 = rq2 + r1;
	g1 = GetGValue(Color);
	gq2 = gq2 + g1;
	b1 = GetBValue(Color);
	bq2 = bq2 + b1;
	rq2 = rq2 / 4;
	gq2 = gq2 / 4;
	bq2 = bq2 / 4;
	send_data('b', rq2, gq2, bq2);
}

void pg() {

	rq3 = 0;
	gq3 = 0;
	bq3 = 0;

	int locationx2 = 940;
	int locationy2 = 120;
	HDC dc = ::GetDC(0);
	COLORREF Color = ::GetPixel(dc, locationx2, locationy2);
	int r1 = GetRValue(Color);
	rq3 = rq3 + r1;
	int g1 = GetGValue(Color);
	gq3 = gq3 + g1;
	int b1 = GetBValue(Color);
	bq3 = bq3 + b1;

	locationx2 = 1100;
	locationy2 = 280;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq3 = rq3 + r1;
	g1 = GetGValue(Color);
	gq3 = gq3 + g1;
	b1 = GetBValue(Color);
	bq3 = bq3 + b1;

	locationx2 = 940;
	locationy2 = 280;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq3 = rq3 + r1;
	g1 = GetGValue(Color);
	gq3 = gq3 + g1;
	b1 = GetBValue(Color);
	bq3 = bq3 + b1;

	locationx2 = 1100;
	locationy2 = 120;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq3 = rq3 + r1;
	g1 = GetGValue(Color);
	gq3 = gq3 + g1;
	b1 = GetBValue(Color);
	bq3 = bq3 + b1;
	rq3 = rq3 / 4;
	gq3 = gq3 / 4;
	bq3 = bq3 / 4;
	send_data('c', rq3, gq3, bq3);
}

void ld() {
	rq4 = 0;
	gq4 = 0;
	bq4 = 0;

	int locationx2 = 260;
	int locationy2 = 500;
	HDC dc = ::GetDC(0);
	COLORREF Color = ::GetPixel(dc, locationx2, locationy2);
	int r1 = GetRValue(Color);
	rq4 = rq4 + r1;
	int g1 = GetGValue(Color);
	gq4 = gq4 + g1;
	int b1 = GetBValue(Color);
	bq4 = bq4 + b1;

	locationx2 = 520;
	locationy2 = 660;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq4 = rq4 + r1;
	g1 = GetGValue(Color);
	gq4 = gq4 + g1;
	b1 = GetBValue(Color);
	bq4 = bq4 + b1;

	locationx2 = 260;
	locationy2 = 660;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq4 = rq4 + r1;
	g1 = GetGValue(Color);
	gq4 = gq4 + g1;
	b1 = GetBValue(Color);
	bq4 = bq4 + b1;

	locationx2 = 520;
	locationy2 = 500;
	dc = ::GetDC(0);
	Color = ::GetPixel(dc, locationx2, locationy2);
	r1 = GetRValue(Color);
	rq4 = rq4 + r1;
	g1 = GetGValue(Color);
	gq4 = gq4 + g1;
	b1 = GetBValue(Color);
	bq4 = bq4 + b1;
	rq4 = rq4 / 4;
	gq4 = gq4 / 4;
	bq4 = bq4 / 4;
	send_data('d', rq4, gq4, bq4);
}

void send_data(char dioda,int r, int g, int b) {
	char bytes_to_send[10];
	bytes_to_send[0] = dioda;
	bytes_to_send[1] = r;
	bytes_to_send[2] = g;
	bytes_to_send[3] = b;

	HANDLE hSerial;
	DCB dcbSerialParams = { 0 };
	COMMTIMEOUTS timeouts = { 0 };

	hSerial = CreateFile(L"\\\\.\\COM5", GENERIC_READ | GENERIC_WRITE, 0, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	if (hSerial == INVALID_HANDLE_VALUE)
	{
		fprintf(stderr, "Error\n");
	}

	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

	if (GetCommState(hSerial, &dcbSerialParams) == 0)
	{
		fprintf(stderr, "Error getting device state\n");
		CloseHandle(hSerial);
	}

	dcbSerialParams.BaudRate = CBR_9600;
	dcbSerialParams.ByteSize = 8;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;

	if (SetCommState(hSerial, &dcbSerialParams) == 0)
	{
		fprintf(stderr, "Error setting device parameters\n");
		CloseHandle(hSerial);
	}

	timeouts.ReadIntervalTimeout = 50;
	timeouts.ReadTotalTimeoutConstant = 50;
	timeouts.ReadTotalTimeoutMultiplier = 10;
	timeouts.WriteTotalTimeoutConstant = 50;
	timeouts.WriteTotalTimeoutMultiplier = 10;

	if (SetCommTimeouts(hSerial, &timeouts) == 0)
	{
		fprintf(stderr, "Error setting timeouts\n");
		CloseHandle(hSerial);
	}

	DWORD bytes_written, total_bytes_written = 0;

	if (!WriteFile(hSerial, bytes_to_send, 10, &bytes_written, NULL))
	{
		fprintf(stderr, "Error\n");
		CloseHandle(hSerial);
	}
	
	if (CloseHandle(hSerial) == 0)
	{
		fprintf(stderr, "Error\n");
	}

	}

void start() {
	std::cout << "Komunikacja rozpoczeta" << std::endl;
	while (1) {
		lg();
		pd();
		pg();
		ld();
		if (GetKeyState('2') & 0x8000)
		{
			stop();
			break;
		}
	}
}

int main()
{
	int n;
	std::cout << "1. Start" << std::endl;
	std::cout << "2. Przytrzymaj 2, zeby zakonczyc program" << std::endl;
	std::cin >> n;
	switch (n) 
	{
	case 1: start();
	}
	return 0;
}