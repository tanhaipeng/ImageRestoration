#ifndef _HEADERNAME_IOSTREAM
#define _HEADERNAME_IOSTREAM
#include <iostream>
#endif

#include "deblur.h"

using namespace std;

// image deblurring (去模糊)
// author:tanhaipeng
// date:2015.5.8

int main()
{
	Matrix *matrix1=new Matrix(5000,5000);
	Matrix *matrix2;
	imresize(matrix1,matrix2,0.5);
	system("pause");
	return 0;
}

