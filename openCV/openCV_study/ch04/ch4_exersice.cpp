#include "opencv2/opencv.hpp"
#include <iostream>
#include <fstream>
#include <vector>

using namespace cv;
using namespace std;

std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";

struct MyData {
    Point ptOld;
    Point ptNew;
    Mat img;
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    bool flag = false;
};

void onMouse(int event, int x, int y, int flags, void* userdata) {
    MyData* myData = static_cast<MyData*>(userdata);
    if (event == EVENT_LBUTTONDOWN) {
        myData->ptOld = Point(x, y);
        Vec3b pixel = myData->img.at<Vec3b>(y, x);
        cout << "BGR values at clicked point: " << static_cast<int>(pixel[0]) << ", " << static_cast<int>(pixel[1]) << ", " << static_cast<int>(pixel[2]) << endl;

        // BGR 값을 파일에 저장
        ofstream outFile("mouseBGRvector.json", ios::app); // 파일을 추가 모드로 열기
        if (outFile.is_open()) {
            outFile << static_cast<int>(pixel[0]) << " " << static_cast<int>(pixel[1]) << " " << static_cast<int>(pixel[2]) << endl;
            outFile.close();
        }
    } else if (event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)) {
        myData->flag = true;
        myData->ptNew = Point(x, y);
    } else if (event == EVENT_LBUTTONUP) {
        myData->flag = false;
    }
}

int main() {
    MyData myData;
    myData.img = imread(folder + "lenna.bmp", IMREAD_COLOR);

    namedWindow("img");
    setMouseCallback("img", onMouse, &myData);

    TickMeter tm;
    tm.start();

    while (true) {
        Mat img_clone = myData.img.clone(); // 원본 이미지 복사
        if (myData.flag) {
            rectangle(img_clone, myData.ptOld, myData.ptNew, myData.green, 2); // 사각형 그리기
        }
        imshow("img", img_clone);
        if (waitKey(1) == 27) break; // ESC 키를 누르면 종료
    }

    tm.stop();
    cout << "Elapsed time: " << tm.getTimeSec() << " seconds" << endl;

    return 0;
}
