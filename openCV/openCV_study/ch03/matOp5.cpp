#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 행렬을 초기화하는 데 사용할 데이터 배열을 선언합니다.
    float data[] = {1, 1, 2, 3};

    // 2x2 크기의 32비트 부동 소수점 단일 채널(Mat)을 생성하고, 초기화 데이터로 초기화합니다.
    Mat mat1(2, 2, CV_32FC1, data);
    cout << "mat1:\n" << mat1 << endl;

    // mat1의 역행렬을 계산하여 mat2에 할당합니다.
    Mat mat2 = mat1.inv();
    cout << "mat2:\n" << mat2 << endl;

    // mat1의 전치 행렬을 출력합니다.
    cout << "mat1.t():\n" << mat1.t() << endl;

    // mat1에 스칼라 값을 더하여 출력합니다.
    cout << "mat1 + 3:\n" << mat1 + 3 << endl;

    // mat1과 mat2를 더하여 출력합니다.
    cout << "mat1 + mat2:\n" << mat1 + mat2 << endl;

    // mat1과 mat2를 뺀 결과를 출력합니다.
    cout << "mat1 - mat2:\n" << mat1 - mat2 << endl;

    // mat1과 mat2를 곱한 결과를 출력합니다. [행렬 곱셈]
    cout << "mat1 * mat2:\n" << mat1 * mat2 << endl;

    return 0;
}

