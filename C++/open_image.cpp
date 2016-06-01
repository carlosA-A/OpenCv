#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  if( argc>2){
    std::cout << "Could not open Image" << std::endl;

  }else{
      Mat image;
      image = imread(argv[1],IMREAD_COLOR);


      try{
          Mat gray_image;
          cvtColor( image, gray_image, CV_BGR2GRAY );

          imwrite("GrayImage.jpg",gray_image );

          namedWindow("color",WINDOW_AUTOSIZE);

          namedWindow("gray",WINDOW_AUTOSIZE);

          imshow("color",image);
          imshow("gray",gray_image);
          waitKey(0);

    }
    catch(cv::Exception& e){
      std::cout << "Failure to load\n"<< std::endl;
    }
  }

  return 0;
}
