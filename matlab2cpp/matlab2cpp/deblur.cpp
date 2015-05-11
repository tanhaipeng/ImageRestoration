#include "deblur.h"

void deblur(Matrix *input,Matrix *&output,int ms,int iter,int psf )
{
	double scale;
	double Matrix;
	// multi-scale iteration
	for(int i=0;i<ms;i++)
	{
		scale=1.0/ms; 
		//imresize(input,simg,scale);				// image resize

	}
}


void imresize( Matrix *input,Matrix *&output,double scale)
{
	// 缩放后大小
	int nh=input->height*scale+0.5;
	int nw=input->width*scale+0.5;
	output=new Matrix(nh,nw);

	// 最近邻插值
	for(int i=0;i<nh;i++)
	{
		for(int j=0;j<nw;j++)
		{
			output->data[i][j]=input->data[(int)(i/scale)][(int)(j/scale)];
		}
	}
}
