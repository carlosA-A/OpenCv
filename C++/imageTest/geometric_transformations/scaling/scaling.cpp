#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  if(!img.data){
    std::cout << "Image could not be opened" << std::endl;
    return -1;
  }
  Mat dst1;
  resize(img, dst1, Size(0,0),0.50,0.50);

  imshow("Original", img);
  imshow("Resized", dst1);
  waitKey(0);

  return 0;
}
