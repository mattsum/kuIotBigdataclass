#include "opencv2/opencv.hpp"
#include <iostream>

std::string folder = "/home/matt/바탕화면/kuIotBigdataclass/openCV/openCV_study/data/";
using namespace cv;
using namespace std;

int main(void){
    // 프레임, 2배 크기의 프레임, 재구성된 프레임을 저장할 Mat 객체 선언
    Mat frame, doubleFrame, reshapedFrame;
    
    // 비디오 캡처 객체 생성 및 비디오 파일 열기
    VideoCapture cap(folder + "vtest.avi");
    if (!cap.isOpened()) 
    {
        cerr << "Video open failed.\n"; // 비디오 열기 실패 시 에러 메시지 출력
        return -1;
    }
    
    // 비디오 프레임의 너비와 높이 출력
    cout << "Frame width: " << cap.get(CAP_PROP_FRAME_WIDTH) << endl;
    cout << "Frame height: " << cap.get(CAP_PROP_FRAME_HEIGHT) << endl;
    
    // 프레임 크기의 2배로 사이즈 설정
    Size sz1(cap.get(CAP_PROP_FRAME_WIDTH), cap.get(CAP_PROP_FRAME_HEIGHT));
    std::vector<int> shape = {sz1.width/ 2,sz1.height * 2};
    
    // 비디오의 프레임 속도(FPS)와 코덱 설정
    double fps = cap.get(CAP_PROP_FPS);
    int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
    
    // 프레임 당 지연 시간 설정
    int delay = cvRound(1000/fps);

    // 비디오 출력 객체 생성
    VideoWriter outputVideo(folder+"output1.avi", fourcc, fps, sz1 * 2);
    
    // 비디오 프레임을 읽어와 처리하는 반복문
    while (true) {
        cap >> frame; // 비디오 프레임 읽기
        resize(frame, doubleFrame, sz1 * 2); // 프레임 크기를 2배로 조절하여 doubleFrame에 저장
        reshapedFrame = frame.reshape(3, shape); // frame을 shape에 맞춰서 재구성하여 reshapedFrame에 저장
        
        // 각각의 프레임을 창에 표시
        imshow("frame", frame);
        imshow("doubleFrame", doubleFrame);
        outputVideo << doubleFrame; // 2배 크기의 프레임을 outputVideo에 저장
        imshow("reshapedFrame", reshapedFrame);
        
        // 사용자 입력을 기다림 (ESC 키를 누르면 종료)
        if (waitKey(delay) == 27) 
            break;
    }
    
    // 모든 창을 닫고 프로그램 종료
    destroyAllWindows();
    return 0;
}
