
#ifndef _HEADERNAME_IOSTREAM
#define _HEADERNAME_IOSTREAM
#include <iostream>
#endif

class Matrix
{
public:
	int width;
	int height;
	double **data;

	Matrix();
	Matrix(int h,int w);
	~Matrix();
};
