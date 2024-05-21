#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";
int main(){
    String name;
    int age;
    Point pt1;
    vector<int> v;
    Mat mat1;

    FileStorage fs;
    fs.open(folder + "mydata.json", FileStorage::WRITE);
    if (!fs.isOpened()) 
    {
        cerr << "File open failed!" << endl;
        return 1;
    }
    fs["name"] >> name;
    fs["age"] >> age;
    fs["point"] >> pt1;
    fs["v"] >>  v;
    fs["mat1"] >>  mat1;

    fs.release();

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "point: " << pt1 << endl;
    cout << "v: {";
        for (auto i : v)
        {
            cout << i << ", ";    //for(int i =0; i < v.size(); i++) 알고리즘
        }
    cout << "}" << endl;
    cout << "mat1: " << mat1 << endl;
    
    return 0;
}