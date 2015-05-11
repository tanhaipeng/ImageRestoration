

// deblur main function
// input: blur image
// output: clear image
// height: image height
// width: image width
// ms: multi-scale number
// iter: iteration number
// psf: blur kernel size

void deblur(double **input,double **output,int height,int width,int ms,int iter,int psf);


// image resize main fun
// input: image
// simg: resize image
// scale: 
void imresize(double **input,double **&simg,double scale);