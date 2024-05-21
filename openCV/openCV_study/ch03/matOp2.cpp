#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 이미지 파일을 읽어옵니다.
    Mat img1 = imread(folder + "cat.bmp");

    // img1의 복사본을 만듭니다.
    // img2와 img3는 img1과 같은 이미지 데이터를 공유합니다.
    Mat img2 = img1;
    Mat img3 = img1;

    // img1의 복사본을 만듭니다.
    // img4는 img1과 다른 이미지 데이터를 가지고 있습니다.
    Mat img4 = img1.clone();

    // img1의 데이터를 img5에 복사합니다.
    // img5는 img1과 다른 이미지 데이터를 가지고 있습니다.
    Mat img5;
    img1.copyTo(img5);

    // img1의 모든 픽셀을 노란색(0, 255, 255)으로 설정합니다.
    img1.setTo(Scalar(0, 255, 255));

    // 이미지를 화면에 표시합니다.
    imshow("img1", img1); // 모든 픽셀이 노란색으로 설정되었습니다.
    imshow("img2", img2); // img2는 img1과 같은 이미지 데이터를 공유합니다.
    imshow("img3", img3); // img3도 img1과 같은 이미지 데이터를 공유합니다.
    imshow("img4", img4); // img4는 img1과 다른 이미지 데이터를 가지고 있습니다.
    imshow("img5", img5); // img5도 img1과 다른 이미지 데이터를 가지고 있습니다.

    // 키 입력을 기다립니다.
    waitKey(0);

    return 0;
}
