#include "deblur.h"

void deblur(Matrix *input,Matrix *&output,int ms,int iter,int psf )
{
	double scale;
	Matrix *simg=NULL;
	Matrix *L=NULL;
	// multi-scale iteration
	for(int i=1;i<=ms;i++)
	{
		scale=1.0/ms; 
		// imresize(input,simg,scale);				// image resize
		imresize( input, simg, scale);

		if(i==1)
		{
			L=im2double(input);
		}
		else
		{

		}

		delete simg;
	}
}


void imresize( Matrix *input, Matrix *&output, double scale)
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

Matrix* im2double( Matrix *&input )
{
	Matrix *temp=new Matrix(input->height,input->width);
	for(int i=0;i<input->height;i++)
		for(int j=0;j<input->width;j++)
			input->data[i][j]=input->data[i][j]/255.0;
	return temp;
}
