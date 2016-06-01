#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  VideoCapture stream1("small.mp4");
  stream1.set(CV_CAP_PROP_FRAME_WIDTH , 352);
  stream1.set(CV_CAP_PROP_FRAME_HEIGHT , 288);


  if (!stream1.isOpened()) { //check if video device has been initialised
  cout << "cannot open camera";
  }

  while (true) {
    Mat cameraFrame;
    stream1.read(cameraFrame);
    imshow("cam", cameraFrame);
    if (waitKey(30) >= 0)
    break;

  }


  return 0;
}
