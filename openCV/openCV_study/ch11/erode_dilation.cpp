#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "milkdrop.bmp", IMREAD_COLOR);
    Mat bin;
    threshold(src, bin, 128, 255, THRESH_BINARY);
    
    Mat erodeMat, dilateMat;
    erode(bin, erodeMat, Mat());
    dilate(bin, dilateMat, Mat());

    imshow("bin", bin);
    imshow("erodeMat", erodeMat);
    imshow("dilateMat", dilateMat);
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}
