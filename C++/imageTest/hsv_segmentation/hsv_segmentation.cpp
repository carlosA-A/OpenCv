#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#define LOWER_BOUND (0,10,60)
#define UPPER_BOUND (20,150,255)


using namespace std;
using namespace cv;

///// Detect skin in picture, range for skin is going to have a lower boundry of (0,10,60) and upper of (20,150,255)

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst,dst2;

  if(!img.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }
  namedWindow("Original",WINDOW_NORMAL);

  imshow("Original", img);

  cvtColor(img, dst, COLOR_BGR2HSV);

  inRange(dst, LOWER_BOUND, UPPER_BOUND,dst2);

  imshow("Detect skin", dst2);

  waitKey(0);

  return 0;
}
