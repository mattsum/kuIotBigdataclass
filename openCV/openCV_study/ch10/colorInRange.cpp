#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "candies.png", IMREAD_COLOR);
    int lowerHue = 40;
    int upperHue = 80;
    int lowerSaturation = 50;
    imshow("src", src);

    cvtColor(src, src, COLOR_BGR2HSV);

    namedWindow("dst");
    createTrackbar("lower Hue", "dst", &lowerHue, 179);
    createTrackbar("upper Hue", "dst", &upperHue, 179);
    createTrackbar("lower Saturation", "dst", &lowerSaturation, 255);
    while (true) {
        Mat dst;
        inRange(src, Scalar(lowerHue, lowerSaturation, 0), Scalar(upperHue, 255, 255), dst);
        imshow("dst", dst);
        if (waitKey(33) == 27)  //break when ESC is PRESSED
            break;
    }
    destroyAllWindows();
    return 0;
}
