#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1],CV_LOAD_IMAGE_GRAYSCALE);

  if (!img.data){

    std::cout << "Could not open image" << std::endl;
    return -1;
  }
  Mat sbl,lap;

  Sobel(img, sbl, -1, 1, 1);    //Apply Sobel
  Laplacian(img, lap, -1, 1, 1);  //Apply Laplacian


  //Show results
  imshow("Original", img);
  imshow("Sobel applied", sbl);
  imshow("Laplacian Applied", lap);
  waitKey(0);

  return 0;
}
