#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "tekapo.bmp");
    Mat M = Mat_<double>({2,3}, {1, 0, 100, 0, 1, 50});

    Mat dst;
    warpAffine(src, dst, M, Size());


    imshow("src", src);
    imshow("dst", dst);
    waitKey();
    destroyAllWindows();
    return 0;
}
