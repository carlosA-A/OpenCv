#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst,mrp;
  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }
  Mat M =(Mat_<double>(2,3)<<1,0,200,0,1,150);  //Create a 2-by-3 array with the values for the translation, 200 pixels displaced horizontally, and 150 vertically
  warpAffine(img, dst, M, img.size());

  imshow("Original", img);
  imshow("translation", dst);
  waitKey(0);

  return 0;
}
