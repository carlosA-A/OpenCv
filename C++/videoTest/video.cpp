#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  VideoCapture open("small.mp4");


  if (!open.isOpened()) { //check if video device has been initialised
  cout << "cannot open camera";
  }

  while (true) {
    Mat cameraFrame;
    open.read(cameraFrame);
    if (!cameraFrame.data){

      break;
    }
    imshow("cam", cameraFrame);
    if (waitKey(30) >= 0)
    break;

  }


  return 0;
}
