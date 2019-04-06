#include "pch.h"
#include <iostream>


#include <windows.h> 

int rq1, rq2, rq3, rq4;
int gq1, gq2, gq3, gq4;
int bq1, bq2, bq3, bq4;
int r1, r2, r3, r4;
int g1, g2, g3, g4;
int b1, b2, b3, b4;
int counter = 0;
void x() {
	rq1 = 0;
	gq1 = 0;
	bq1 = 0;

	for (int i = 40; i < 680; i = i + 200)
	{
		for (int j = 10; j < 380; j = j + 120)
		{
			int locationx1 = 1 + i;
			int locationy1 = 1 + j;
			HDC dc = ::GetDC(0);
			COLORREF Color = ::GetPixel(dc, locationx1, locationy1);
			int r1 = GetRValue(Color);
			rq1 = rq1 + r1;
			int g1 = GetGValue(Color);
			gq1 = gq1 + g1;
			int b1 = GetBValue(Color);
			bq1 = bq1 + b1;

			int locationx2 = 1 + i;
			int locationy2 = 381 + j;

			COLORREF Color1 = ::GetPixel(dc, locationx2, locationy2);
			int r2 = GetRValue(Color1);
			rq2 = rq2 + r2;
			int g2 = GetGValue(Color1);
			gq2 = gq2 + g2;
			int b2 = GetBValue(Color1);
			bq2 = bq2 + b2;

			int locationx3 = 681 + i;
			int locationy3 = 1 + j;

			COLORREF Color2 = ::GetPixel(dc, locationx3, locationy3);
			int r3 = GetRValue(Color2);
			rq3 = rq3 + r3;
			int g3 = GetGValue(Color2);
			gq1 = gq3 + g3;
			int b3 = GetBValue(Color2);
			bq3 = bq3 + b3;

			int locationx4 = 681 + i;
			int locationy4 = 381 + j;

			COLORREF Color3 = ::GetPixel(dc, locationx4, locationy4);
			int r4 = GetRValue(Color3);
			rq4 = rq4 + r4;
			int g4 = GetGValue(Color3);
			gq4 = gq4 + g4;
			int b4 = GetBValue(Color3);
			bq4 = bq4 + b4;


			counter++;
			//std::cout << r1 << g1 << b1 << std::endl;
		};
	};

	rq1 = rq1 / counter;
	gq1 = gq1 / counter;
	bq1 = bq1 / counter;

	rq2 = rq2 / counter;
	gq2 = gq2 / counter;
	bq2 = bq2 / counter;

	rq3 = rq3 / counter;
	gq3 = gq3 / counter;
	bq3 = bq3 / counter;

	rq4 = rq4 / counter;
	gq4 = gq4 / counter;
	bq4 = bq4 / counter;
	counter = 0;

}

/*
 *
 *HDC dc = ::GetDC(0);
COLORREF Color = ::GetPixel(dc, 1000, 1000);
int r = GetRValue(Color);
int g = GetGValue(Color);
int b = GetBValue(Color);
//::ReleaseDC(0, dc);


*/
int main()
{
	std::cout<<"Siema";<<std::endl;
	while (1)
	{
		x();
		std::cout << rq1 <<"|"<< gq1 << "|" << bq1 << std::endl;
		std::cout << rq2 << "|" << gq2 << "|" << bq2 << std::endl;
		std::cout << rq3 << "|" << gq3 << "|" << bq3 << std::endl;
		std::cout << rq4 << "|" << gq4 << "|" << bq4 << std::endl;
		std::cout << "________________________________" << std::endl;
	}
}