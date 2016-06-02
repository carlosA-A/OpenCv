#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {
  Mat img_rgb = imread(argv[1],CV_LOAD_IMAGE_COLOR);
  Mat img_gry, img_cny,img_pyr,img_pyr2;

  cvtColor(img_rgb, img_gry,COLOR_BGR2GRAY);
  pyrDown(img_gry, img_pyr);
  pyrDown(img_pyr,img_pyr2);
  namedWindow("Example Gray", WINDOW_AUTOSIZE);
  namedWindow("Example Canny", WINDOW_AUTOSIZE);
   imshow("Example Gray", img_pyr2);
  Canny(img_pyr2, img_cny, 10, 100,3,true );
  rectangle(img_cny, cvPoint(0,0),  cvPoint(10,10), CV_RGB(0,0,255), 1, 8 );

  imshow("Example Canny", img_cny);


  waitKey(0);

  return 0;
}
