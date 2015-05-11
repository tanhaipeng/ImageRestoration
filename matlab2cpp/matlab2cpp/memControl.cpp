#include "memControl.h"

Matrix::Matrix( int h,int w ):height(h),width(w)
{
	// 二维数组分配空间
	data=new double *[height];
	for(int i=0;i<height;i++)
		data[i]=new double[width];
}

Matrix::Matrix():height(0),width(0)
{
	data=NULL;
}

Matrix::~Matrix()
{
	// 释放数组内存
	for(int i=0;i<height;i++)
		delete []data[i];
	delete []data;
}

