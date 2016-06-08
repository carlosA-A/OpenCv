#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat mask,dst,dst2;

  cvtColor(img, mask, COLOR_RGB2GRAY);

  threshold(mask, mask, 5, 255, THRESH_BINARY_INV);    //Set threshold to change all color over 15 to black while everything under it to 255(white)
  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }

  inpaint(img, mask, dst, 10,INPAINT_TELEA );
  inpaint(img, mask, dst2, 10,INPAINT_NS );

  imshow("Original", img);
  imshow("Mask", mask);
  imshow("Inpainted Telea", dst);
  imshow("Inpainted NS", dst2);

  waitKey(0);


  return 0;
}
