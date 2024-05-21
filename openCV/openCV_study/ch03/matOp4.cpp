#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 포인트 예제
    // 3x4 크기의 8비트 단일 채널(Mat)을 생성하고 모든 요소를 0으로 초기화합니다.
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);

    // 첫 번째 방법: at<>() 함수 사용하여 각 요소에 접근하여 증가시킵니다.
    cout << "Before Mat1: " << mat1 << endl;
    for (int j = 0; j < mat1.rows; j++) {
        for (int i = 0; i < mat1.cols; i++) {
            mat1.at<uchar>(j, i)++;
        }
    }
    cout << "After Mat1: " << mat1 << endl;

    // 두 번째 방법: ptr<>() 함수를 사용하여 행의 포인터에 직접 접근하여 증가시킵니다.
    for (int j = 0; j < mat1.rows; j++) {
        uchar *p = mat1.ptr<uchar>(j);
        for (int i = 0; i < mat1.cols; i++) {
            p[i]++;
        }
    }
    cout << "After Mat1: " << mat1 << endl;

    // 세 번째 방법: begin<>() 및 end<>() 함수를 사용하여 반복자를 사용하여 각 요소에 접근하여 증가시킵니다.
    for (auto it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++) {
        (*it)++;
    }
    cout << "After Mat1: " << mat1 << endl;

    return 0;
}
