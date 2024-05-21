#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

// 이미지 데이터가 저장된 폴더 경로
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

using namespace cv;
using namespace std;

int main() {
    // 포인트(Point) 예제
    // Point 클래스는 2차원 평면에서의 점을 나타내는 클래스입니다.
    // pt1과 pt2 객체를 생성하고 좌표를 설정합니다.
    Point pt1;
    pt1.x = 5;
    pt1.y = 10;
    Point pt2(10, 20);

    // pt1과 pt2의 좌표를 출력합니다.
    cout << pt1 << endl;
    cout << pt2 << endl;

    // 두 점의 합을 계산하고 출력합니다.
    cout << pt1 + pt2 << endl;

    // 사이즈(Size) 예제
    // Size 클래스는 2차원 평면에서의 크기를 나타내는 클래스입니다.
    // sz1과 sz2 객체를 생성하고 너비(width)와 높이(height)를 설정합니다.
    Size sz1;
    sz1.width = 10;
    sz1.height = 20;
    Size sz2(100, 200);

    // sz1과 sz2의 값을 출력하고, 면적(area)과 종횡비(aspect ratio)를 출력합니다.
    cout << sz1 << sz2 << sz1.area() << sz1.aspectRatio() << endl;

    return 0;
}
