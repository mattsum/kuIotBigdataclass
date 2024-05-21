#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    
    vector<Mat> dsts;
    
    for (int sigma = 1; sigma <= 10; sigma += 1) {
        Mat dst;
        GaussianBlur(src, dst, Size(0, 0), sigma);
        dsts.push_back(dst);
    }

    imshow("src", src);
    int i = 0;
    //type casting int to String
    
    for (auto dst : dsts){
        imshow("dst" + to_string(i + 1), dst);
        i++;
    }
    waitKey();
    destroyAllWindows();
    return 0;
}
