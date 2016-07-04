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

      if(!image.data){
        std::cout << "Error opening image" << std::endl;
        return -1;
      }


      try{
          Mat gray_image;

          //transform RGB image into grayscale
          cvtColor( image, gray_image, CV_BGR2GRAY );
          //Write gray image into local directorie
          imwrite("GrayImage.jpg",gray_image );

          //Create a window to be populated with image
          namedWindow("color",WINDOW_AUTOSIZE);

          namedWindow("gray",WINDOW_AUTOSIZE);
          //Display image
          imshow("color",image);
          imshow("gray",gray_image);
          //Close windows when a button is pressed
          waitKey(0);
          destroyAllWindows();

    }
    catch(cv::Exception& e){
      std::cout << "Failure to load\n"<< std::endl;
    }
  }

  return 0;
}
