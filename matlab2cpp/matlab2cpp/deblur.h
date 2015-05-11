
// deblur main function
// input: blur image
// output: clear image
// height: image height
// width: image width
// scale: multi-scale number
// iter: iteration number
// psf: blur kernel size

void deblur(double **input,double **output,int height,int width,int scale,int iter,int psf);