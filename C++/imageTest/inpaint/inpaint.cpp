#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat mask = Mat::zeros(img.size(), CV_8U);
  Mat dst;

  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }

  inpaint(img, mask, dst, 10,INPAINT_TELEA );

  imshow("Original", img);
  imshow("Mask", mask);
  imshow("Inpainted", dst);
  waitKey(0);


  return 0;
}
