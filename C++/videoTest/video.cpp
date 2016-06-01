#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;


int g_slider_position = 0;
int g_run = 1, g_dontset =0; //Start out in single step mode

VideoCapture g_cap;

void onTrackSlide(int pos, void *){

  g_cap.set(CAP_PROP_POS_FRAMES, pos);
  if(!g_dontset){
    g_run = 1;
  }
  g_dontset = 0;
}

int main(int argc, char const *argv[]) {

  namedWindow("Example2_4",WINDOW_AUTOSIZE);
  g_cap.open("small.mp4");

  int frames = (int) g_cap.get(CAP_PROP_FRAME_COUNT);
  int tmpw = (int) g_cap.get(CAP_PROP_FRAME_WIDTH);
  int tmph = (int) g_cap.get(CAP_PROP_FRAME_HEIGHT);

  std::cout << "Video has "<< frames <<
  " frames of dimensions:("<<tmpw<<","<<tmph<<")." << std::endl;
  createTrackbar("Position", "Example2_4", &g_slider_position,frames,onTrackSlide);

  Mat frame;

  while(1){

    if(g_run!=0){

      g_cap>>frame;
      if(!frame.data) break;
      int current_pos = (int) g_cap.get(CAP_PROP_POS_FRAMES);
      g_dontset = 1;

      setTrackbarPos("Position", "Example2_4", current_pos);
      imshow("Example2_4", frame);
      g_run = 1;

    }
    char c = (char) waitKey(10);
    if(c == 's'){
      g_run = 1;
      std::cout << "Single step, run = "<<g_run << std::endl;
    }
    else if(c == 'r'){
      g_run = -1;
      std::cout << "Run mode, run = "<<g_run << std::endl;
    }
    else if (c == 27){
      break;
    }
  }



  return 0;
}
