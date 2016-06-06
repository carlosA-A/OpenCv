#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst;


  if(!img.data){

    std::cout << "Cannot open image" << std::endl;
    return -1;

  }
  Point2f img_pts[3];
  img_pts[3] = Point(410,120);
  img_pts[2] = Point(195,140);
  img_pts[1] = Point(220,750);
  img_pts[0] = Point(400,750);

  Point2f dst_pts[3];
  dst_pts[3] = Point(530,120);
  dst_pts[2] = Point(160,100);
  dst_pts[1] = Point(220,750);
  dst_pts[0] = Point(400,750);

  Mat M = getPerspectiveTransform(img_pts, dst_pts);

  warpPerspective(img, dst,M, img.size());

  imshow("Original", img);
  imshow("Transformed",dst);
  waitKey(0);



  return 0;
}
