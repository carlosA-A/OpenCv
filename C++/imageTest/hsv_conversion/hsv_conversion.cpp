#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

vector<Mat>  showSeparatedChannels(vector<Mat> channels);

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst;

  if(!img.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }
  namedWindow("Original",WINDOW_NORMAL);

  imshow("Original", img);

  cvtColor(img, dst, COLOR_RGB2HSV);

  std::vector<Mat> v;

  split(dst, v);

  imshow("Hue", v[0]);
  imshow("Saturation", v[1]);
  imshow("Value", v[2]);

  vector<Mat> separatedChannels = showSeparatedChannels(v);

  imshow("Hue Cl", separatedChannels[0]);
  imshow("Saturation Cl", separatedChannels[1]);
  imshow("Value Cl", separatedChannels[2]);


  waitKey(0);



}

vector<Mat>  showSeparatedChannels(vector<Mat> channels){
  vector<Mat> separatedChannels;

  Mat zer = Mat::zeros(channels[0].size(), channels[0].type());
  for (int i = 0; i < 3; i++) {
    vector<Mat> aux;
    Mat dst;
    for (int j = 0; j < 3; j++) {

      if(i==j){
        aux.push_back(channels[i]);
      }
      else{

        aux.push_back(zer);
      }
    }
    merge(aux, dst);
    separatedChannels.push_back(dst);
  }
  return separatedChannels;

}
