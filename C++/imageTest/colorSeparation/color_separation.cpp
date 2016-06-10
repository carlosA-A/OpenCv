#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);

  if(!img.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }
  namedWindow("Original",WINDOW_NORMAL);

  imshow("Original", img);

  std::vector<Mat> channels;

  split(img, channels);     //Split into different color channels

  //Display images Grayscale
  namedWindow("Blue channel",WINDOW_NORMAL);
  imshow("Blue channel ", channels[0]);
  namedWindow("Green channel",WINDOW_NORMAL);
  imshow("Green channel", channels[1]);
  namedWindow("Red channel",WINDOW_NORMAL);
  imshow("Red channel", channels[2]);

  //Show seperate bgr colors

  vector<Mat> separatedChannels = showSeparatedChannels(channels);  //Displays bgr colors previously displayed in grayscale in color

  namedWindow("Blue color",WINDOW_NORMAL);
  imshow("Blue color ", separatedChannels[0]);
  namedWindow("Green color",WINDOW_NORMAL);
  imshow("Green color", separatedChannels[1]);
  namedWindow("Red color",WINDOW_NORMAL);
  imshow("Red color", separatedChannels[2]);

  waitKey(0);


  return 0;
}
