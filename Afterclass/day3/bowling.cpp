#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::vector<int>> frame; // 각 프레임의 투구 점수를 저장하는 벡터
    std::vector<int> frame10; // 10번째 프레임의 점수를 저장하는 벡터
    std::vector<int> scores; // 각 프레임까지의 총점을 저장하는 벡터

    frame.push_back({0,0}); // 첫 번째 프레임 초기화
    scores.push_back(0); // 첫 번째 프레임의 총점 초기화

    std::string input;
    int score;

    // 1번째 프레임부터 9번째 프레임까지의 점수 계산
    for (size_t i = 1; i < 10; ++i) {
        frame.push_back({0,0}); // 새로운 프레임 초기화

        // 1번째 투구 점수 입력
        std::cout << i << "프레임 1번째 투구: ";
        std::getline(std::cin, input);
        score = std::stoi(input);
        frame[i][0] = score;

        // 이전 프레임이 스페어일 때 보너스 점수 계산
        if (frame[i-1][0] != 10 && frame[i-1][0] + frame[i-1][1] == 10) {
            scores[i-1] = scores[i-2] + 10 + frame[i][0];
            std::cout << "=============================" << std::endl;
            std::cout << i-1 << "프레임 점수: " << scores[i-1] << std::endl;
            std::cout << "=============================" << std::endl;
        }

        // 이전 두 프레임이 스트라이크일 때 보너스 점수 계산
        if(i > 2 && frame[i-2][0] == 10 && frame[i-1][0] == 10) {
            scores[i-2] = scores[i-3] + 10 + 10 + frame[i][0];
            std::cout << "=============================" << std::endl;
            std::cout << i-2 << "프레임 점수: " << scores[i-2] << std::endl;
            std::cout << "=============================" << std::endl;
        }

        // 2번째 투구 점수 입력
        if(frame[i][0] != 10) {
            std::cout << i << "프레임 2번째 투구: ";
            std::getline(std::cin, input);
            score = std::stoi(input);
            frame[i][1] = score;

            // 이전 프레임이 스트라이크일 때 보너스 점수 계산
            if (frame[i-1][0] == 10) {
                scores[i-1] = scores[i-2] + 10 + frame[i][0] + frame[i][1];
                std::cout << "=============================" << std::endl;
                std::cout << i-1 << "프레임 점수: " << scores[i-1] << std::endl;
                std::cout << "=============================" << std::endl;
            }

            // 현재 프레임의 점수 계산
            if (frame[i][0] + frame[i][1] < 10) {
                scores[i] = scores[i-1] + frame[i][0] + frame[i][1];
                std::cout << "=============================" << std::endl;
                std::cout << i << "프레임 점수: " << scores[i] << std::endl;
                std::cout << "=============================" << std::endl;
            }
        }
    }

    // 10번째 프레임 점수 입력
    std::cout << "10프레임 1번째 투구: ";
    std::getline(std::cin, input);
    score = std::stoi(input);
    frame10.push_back(score);

    // 9번째 프레임이 스페어일 때 보너스 점수 계산
    if (frame[9][0] != 10 && frame[9][0] + frame[9][1] == 10) {
        scores[9] = scores[8] + 10 + frame10[0];
        std::cout << "=============================" << std::endl;
        std::cout << " 9프레임 점수: " << scores[9] << std::endl;
        std::cout << "=============================" << std::endl;
    }
    // 8번째 프레임과 9번째 프레임이 스트라이크인 경우 보너스 점수 계산
    if (frame[8][0] != 10 && frame[8][0] + frame[8][1] == 10) {
        scores[8] = scores[7] + 10 + 10 + frame10[0];
        std::cout << "=============================" << std::endl;
        std::cout << " 8프레임 점수: " << scores[8] << std::endl;
        std::cout << "=============================" << std::endl;
    }

    // 10번째 프레임 2번째 투구 점수 입력
    std::cout << "10프레임 2번째 투구: ";
    std::getline(std::cin, input);
    score = std::stoi(input);
    frame10.push_back(score);

    // 9번째 프레임이나 10번째 프레임이 스페어일 때 보너스 점수 계산
    if (frame[9][0] + frame[9][1] >= 10 || frame10[0] + frame10[1] >= 10) {
        scores[9] = scores[8] + 10 + frame10[0] + frame10[1];
        std::cout << "=============================" << std::endl;
        std::cout << " 9프레임 점수: " << scores[9] << std::endl;
        std::cout << "=============================" << std::endl;
    }

    // 10번째 프레임의 총점 계산
    if (frame10[0] + frame10[1] >= 10) {
        std::cout << "10프레임 3번째 투구: ";
        std::getline(std::cin, input);
        score = std::stoi(input);
        frame10.push_back(score);

        scores[10] = scores[9] + frame10[0] + frame10[1] + frame10[2];
        std::cout << "=============================" << std::endl;
        std::cout << "10프레임 점수: " << scores[10] << std::endl;
        std::cout << "=============================" << std::endl;
    } else {
        scores[10] = scores[9] + frame10[0] + frame10[1];
        std::cout << "=============================" << std::endl;
        std::cout << "10프레임 점수: " << scores[10] << std::endl;
        std::cout << "=============================" << std::endl;
    }

    return 0;
}
