#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);

    float data[] = {1.f/9, 1.f/9, 1.f/9, 1.f/9, 1.f/9, 1.f/9, 1.f/9, 1.f/9, 1.f/9};
    Mat emboss(3, 3, CV_32F, data);

    Mat dst;
    filter2D(src, dst, -1, emboss, Point(-1, -1), 0);
    
    imshow("src", src);
    imshow("dst", dst);

    waitKey();
    destroyAllWindows();
    return 0;
}
