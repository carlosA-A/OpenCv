#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1],IMREAD_GRAYSCALE);

  if(img.empty()){
    std::cout << "Could not open image" << std::endl;
    return -1;
  }

  namedWindow("Original",0);
  imshow("Original", img);

  //Create a mask for image

  Mat mask(img.rows,img.cols,CV_8UC1,Scalar(0,0,0));        //Creaetes a new image with the same size as original image and sets background black
  circle(mask, Point(img.rows/2,img.cols/2), 150,255,-1);    //Creates a white circle in the mask

  namedWindow("Mask",0);
  imshow("Mask", mask);


  //Perform And

  Mat r;
  bitwise_and(img, mask, r);  // The logical operation is only applied in those pixels in which the mask value is not zero
                              //if there are non-zero pixels in img and mask at the same spot, they get set in mask
  //Fill otside with white
  const uchar white = 255;
  for (int i = 0; i < r.rows; i++) {
    for (int j = 0; j < r.cols; j++) {
        if (!mask.at<uchar>(i,j)) {
            r.at<uchar>(i,j) = white;
        }

    }
  }


  namedWindow("Result",0);
  imshow("Result", r);

  waitKey(0);
  return 0;
}
