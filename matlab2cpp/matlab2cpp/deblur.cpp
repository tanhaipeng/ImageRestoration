#include "deblur.h"


void deblur( double **input,double **output,int height,int width,int ms,int iter,int psf )
{
	double scale;
	double **simg;
	// multi-scale iteration
	for(int i=0;i<ms;i++)
	{
		scale=1.0/ms; 
		//imresize(input,simg,scale);				// image resize


	}
}


void imresize( double **input,double **&simg,double scale )
{

}
