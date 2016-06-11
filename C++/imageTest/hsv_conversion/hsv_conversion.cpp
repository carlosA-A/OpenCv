#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

vector<Mat>  showSeparatedChannels(vector<Mat> channels);

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);

  if(!img.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }
  namedWindow("Original",WINDOW_NORMAL);

  imshow("Original", img);



}
