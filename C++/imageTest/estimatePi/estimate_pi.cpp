#include <opencv2/opencv.hpp>
#include <iostream>
#define SIDE 400    //Side of a square
#define NPIXELS 4*8000

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  int i,j; //spots to set random positions to

  Mat square1(SIDE,SIDE,CV_8UC1,Scalar(0,0,0));   //black square
  Mat square2 = square1.clone();    //clone of first square

  circle(square1, Point(SIDE/2,SIDE/2), SIDE/2, 255, -1);   //white cirlce enclosed in square

  imshow("Square 1", square1);



  //crete 8000 white dots in second square at random positions
  for (int k = 0; k < NPIXELS; k++) {
    i = rand()%SIDE;
    j = rand()%SIDE;

    square2.at<uchar>(i,j) = 255;
  }
  imshow("Square 2", square2);

  Mat r;
  bitwise_and(square1, square2, r);
  imshow("Result", r);

  int Acircle = countNonZero(r);
  int Asquare = countNonZero(square2);

  float pi = 4*(float)Acircle/Asquare;

  std::cout << "PI is aproximately: "<< pi << std::endl;

  waitKey(0);

  return 0;
}
