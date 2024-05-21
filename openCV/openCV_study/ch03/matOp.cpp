#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 빈 행렬을 생성하고 Scalar를 사용하여 픽셀 값을 설정합니다.
    // Scalar는 각 채널의 값을 지정합니다. 여기서는 (B, G, R) 형식입니다.
    Mat img1;
    img1 = Scalar(10, 0, 0);

    // 크기가 400x600이고 8비트 단일 채널(흑백) 이미지를 생성합니다.
    Mat img2(400, 600, CV_8UC1);

    // 크기가 400x600이고 8비트 3채널(컬러) 이미지를 생성합니다.
    Mat img3(400, 600, CV_8UC3);

    // 크기가 640x400인 8비트 3채널(컬러) 이미지를 생성합니다.
    Mat img4(Size(640, 400), CV_8UC3);

    // 크기가 400x640이고 모든 픽셀을 0(검정색)으로 설정한 흑백 이미지를 생성합니다.
    Mat img5(400, 640, CV_8UC1, Scalar(0));

    // 크기가 400x640이고 모든 픽셀을 255(흰색)으로 설정한 흑백 이미지를 생성합니다.
    Mat img6(400, 640, CV_8UC1, Scalar(255));

    // 이미지를 화면에 표시합니다.
    imshow("img2", img2);
    imshow("img3", img3);
    imshow("img4", img4);
    imshow("img5", img5);
    imshow("img6", img6);

    // 키 입력을 기다립니다.
    waitKey(0);

    return 0;
}
