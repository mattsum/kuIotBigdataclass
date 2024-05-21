#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

int main() {
    Mat src = imread(folder + "lenna.bmp", IMREAD_COLOR);
    Mat gray, addgray;
    cvtColor(src, gray, COLOR_BGR2GRAY);

    add(gray, 50, addgray);
    subtract(gray, 50, addgray);
    addgray = gray + 50;
	addgray = gray - 50;
    imshow("src", src);
	imshow("gray", gray);
    imshow("addgray", addgray);
    waitKey(0);


	destroyAllWindows();
	return 0;
}