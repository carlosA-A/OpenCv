#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat src,src2,src_lab,tar_lab;
  src = imread(argv[1]);
  tar = imread(argv[2]);


  if(!src.data||!tar.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }
  namedWindow("Original",WINDOW_NORMAL);

  imshow("Original Source1", src);
  imshow("Original Source2", tar);

//Transform image into CIE Lab
  cvtColor(src, src_lab, COLOR_BGR2Lab);
  cvtColor(tar, tar_lab, COLOR_BGR2Lab);

  src_lab.convertTo(OutputArray m, int rtype{#, double alpha{#, double beta#}#})




  return 0;
}
