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
	int x,y;
	for(int i=0;i<nh;i++)
	{
		x=i/scale;
		if(x>=input->height)
			x=input->height-1;
		for(int j=0;j<nw;j++)
		{
			y=j/scale;
			if(y>=input->width)
				y=input->width-1;
			output->data[i][j]=input->data[x][y];
		}
	}
}
