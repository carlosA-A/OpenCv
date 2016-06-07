#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst,mrp;
  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }

                              ///Warp image by an angle of pi/3
  double m = 1/tan(M_PI/3);
  Mat W = (Mat_<double>(2,3)<<1,m,0,0,1,0);
  warpAffine(img, dst, W, Size(img.cols+0.5*img.cols,img.rows));

  imshow("Original", img);
  imshow("translation", dst);
  waitKey(0);

  return 0;
}
