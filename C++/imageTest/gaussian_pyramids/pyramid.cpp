#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst1,dst2,dst3,dst4;

  //Gaussian pyramid implementation
  pyrDown(img, dst1);
  pyrDown(dst1,dst2);

  pyrUp(dst2,dst3);
  pyrUp(dst3,dst4);
  //Display Images
  imshow("Original", img);
  imshow("PyrDown1", dst1);
  imshow("PyrDown2", dst2);
  imshow("PyrUp1", dst3);
  imshow("PyrUp2", dst4);
  waitKey(0);
  return 0;
}
