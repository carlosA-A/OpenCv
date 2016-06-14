#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//Tranfer color from one image into another
int main(int argc, char const *argv[]) {

  Mat src,tar,src_lab,tar_lab;
  src = imread(argv[1]);
  tar = imread(argv[2]);


  if(!src.data||!tar.data){
    std::cout << "Error opening image" << std::endl;
    return -1;
  }

  imshow("Original Source1", src);
  imshow("Original Source2", tar);

//Transform image into CIE Lab
  cvtColor(src, src_lab, COLOR_BGR2Lab);
  cvtColor(tar, tar_lab, COLOR_BGR2Lab);

  src_lab.convertTo(src_lab,CV_32F);
  tar_lab.convertTo(tar_lab,CV_32F);

  //Find the mean and standard deviation of each channel for each image

  Mat src_mean,tar_mean,src_stdd,tar_stdd;

  meanStdDev(src_lab, src_mean, src_stdd);
  meanStdDev(tar_lab, tar_mean, tar_stdd);

  //Split into individual channels
  std::vector<Mat> src_channels;
  std::vector<Mat> tar_channels;

  split(src_lab, src_channels);
  split(tar_lab, tar_channels);

  for (int i = 0; i < 3; i++) {
    //Substract the mean for the tar images

    tar_channels[i] -= tar_mean.at<double>(i);
    //get a ratio from the deviation between tar and src

    tar_channels[i] *= tar_stdd.at<double>(i)/src_stdd.at<double>(i);
    //Add src mean

    tar_channels[i] += src_mean.at<double>(i);

  }
  //Change type, merge channels and transform to bgr again

  Mat final,finalRGB;
  merge(tar_channels, final);
  final.convertTo(final, CV_8UC1);
  cvtColor(final, finalRGB, COLOR_Lab2BGR);
  imshow("Color transfered", finalRGB);

  waitKey(0);



  return 0;
}
