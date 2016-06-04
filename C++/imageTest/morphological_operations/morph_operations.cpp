#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst1,dst2,dst3,dst4;

  //Range to detect color red in image
  inRange(img, Scalar(0,0,100), Scalar(30,40,255), dst1);
  //Kernel to help detect a circle of around 15 pixels by 15 in image
  Mat element = getStructuringElement(MORPH_ELLIPSE, Size(15,15));

  //Dilate image to add more pixels closer to our element
  dilate(dst1, dst2, element);
  //Erode image to take away noise
  erode(dst2,dst3,element);

  imshow("Original", img);
  imshow("Range", dst1);
  imshow("Dilate", dst2);
  imshow("Eroded", dst3);
  waitKey(0);
  return 0;
}
