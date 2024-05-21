#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 이미지 파일을 읽어옵니다.
    Mat img1 = imread(folder+"cat.bmp");

    // ROI(Region of Interest)를 정의합니다. (x, y, width, height)
    Rect roi(220, 120, 200, 200);

    // 이미지에서 ROI 부분을 선택하여 새로운 Mat 객체(img2)로 복사합니다.
    Mat img2 = img1(roi);

    // img2의 복사본을 만듭니다.
    Mat img3 = img1(roi).clone();

    // img2의 픽셀값을 반전시킵니다.
    img2 = ~img2;

    // img1의 전체 영역을 노란색으로 설정합니다.
    img1.setTo(Scalar(0, 255, 255)); // (B, G, R)

    // 이미지를 화면에 표시합니다.
    imshow("img1", img1); // 전체 영역이 노란색으로 설정되었습니다.
    imshow("img2", img2); // 선택한 ROI의 픽셀값이 반전되었습니다.
    imshow("img3", img3); // 선택한 ROI의 복사본입니다.

    // 키 입력을 기다립니다.
    waitKey(0);

    return 0;
}
