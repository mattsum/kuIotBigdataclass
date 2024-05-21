#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";
void on_brightness(int pos, void *userdata);

int main() {
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    Mat original = src.clone();
    Mat src2 = src.clone();
    src = src * 2.f;                //첫번째 방법
    src2 = src2 + (src2 - 128) * 1.f;   //두번째 방법
    cout << "original mean : " << mean(original) << endl;

    imshow("original", original);
    imshow("src", src);
    imshow("src2", src2);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
