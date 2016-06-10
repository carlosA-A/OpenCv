#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[]) {

  Mat img = imread(argv[1]);
  Mat dst;
  Mat noisy = img.clone();
  Mat noise(noisy.size(),noisy.type());
  randn(noise, 0, 50);
  noisy += noise;

  fastNlMeansDenoisingColored(noisy, dst, 30,30,7 ,21);

  imshow("Original", img);
  imshow("Noisy",noisy);
  imshow("Denoised", dst);
  waitKey(0);

  return 0;
}
