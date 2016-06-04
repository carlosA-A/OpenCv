#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);

  //Apply filters
  Mat dst1,dst2;

  GaussianBlur(img, dst1, Size(9,9), 0, 0);
  medianBlur(img, dst2, 9);
  imshow("Original", img);
  imshow("GaussianBlur", dst1);
  imshow("MedianBlur", dst2);
  waitKey(0);
  return 0;
}
