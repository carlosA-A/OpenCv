#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);

  if(!img.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }

  imshow("Original", img);

  std::vector<Mat> channels;

  split(img, channels);     //Split into different color channels

  imshow("Blue channel ", channels[0]);
  imshow("Green channel ", channels[1]);
  imshow("Red channel ", channels[2]);
  waitKey(0);


  return 0;
}
