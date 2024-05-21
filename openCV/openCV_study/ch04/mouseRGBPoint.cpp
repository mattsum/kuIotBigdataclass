    // -----------------------------------------------------------
    //                  최과장님이 내주신 최종실습
    // -----------------------------------------------------------
    // 1.레나 이미지를 윈도우에 표시합니다.
    // 2.마우스가 클릭된 위치를 기준으로 사각형을 그립니다.
    // 3.마우스 클릭시 클릭된 위치의 BGR 값을 출력합니다.
    // 4.BGR 값을 저장하고 마지막으로 최적화를 위해 시간을 측정합니다.
    
    // 5.ch04까지 배운거 다 종합적으로 해 실습하기

#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";
void onMouse(int event, int x, int y, int flags, void *);

struct MyData {
	Point ptOld;
	Point ptNew;
	Mat img;
	Mat background;
	Scalar white = Scalar(255, 255, 255);
	Scalar yellow = Scalar(0, 255, 255);
	Scalar blue = Scalar(255, 0, 0);
	Scalar green = Scalar(0, 255, 0);
	Scalar red = Scalar(0, 0, 255);
	vector<Vec3b> mouseBGR;
	bool flag = false;
};

int main() {
	MyData myData;
	FileStorage fs;
	myData.img = imread(folder + "lenna.bmp", IMREAD_COLOR);
	myData.background = myData.img.clone();

	namedWindow("img");
	setMouseCallback("img", onMouse, (void *)&myData);

	imshow("img", myData.img);
	int keycode = waitKey(0);
	if (keycode == 27) {
		fs.open(folder + "mouseRGBPoint.json", FileStorage::WRITE);
		fs << "mouseBGR" << myData.mouseBGR;
		fs.release();
	}
	destroyAllWindows();
	return 0;
}

void onMouse(int event, int x, int y, int flags, void *myData) {
	MyData *ptr = (MyData *)myData;
	switch (event) {
	case EVENT_LBUTTONDOWN:
		ptr->ptOld = Point(x, y);
		cout << "Event Left Button Down: " << ptr->background.at<Vec3b>(y, x)
			 << endl;
		ptr->mouseBGR.push_back(ptr->background.at<Vec3b>(y, x));
		cout << "mouseBGR: ";
		for (auto i : ptr->mouseBGR)
			cout << i << " ";
		cout << endl;
		ptr->flag = true;
		break;
	case EVENT_LBUTTONUP:
		ptr->flag = false;
		break;
	case EVENT_MOUSEMOVE:
		if (EVENT_FLAG_LBUTTON) {
			ptr->background.copyTo(ptr->img);
			rectangle(ptr->img,
					  Rect(Point(x - 25, y - 25), Point(x + 25, y + 25)),
					  ptr->white, 5);
			imshow("img", ptr->img);
			ptr->ptOld = Point(x, y);
		}
		break;
	}
}