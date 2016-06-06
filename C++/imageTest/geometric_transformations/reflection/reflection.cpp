#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst1,dst2;
  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }
  //Horizontal reflection
  Mat H = (Mat_<double>(2,3)<<-1,0,img.cols,0,1,0);
  warpAffine(img, dst1, H, img.size());

  //Vertical Reflection
  Mat V = (Mat_<double>(2,3)<<1,0,0,0,-1,img.rows);
  warpAffine(img, dst2, V, img.size());

  imshow("Original", img);
  imshow("Horizontal Reflection", dst1);
  imshow("Vertical reflection", dst2);

  waitKey(0);
  return 0;
}
