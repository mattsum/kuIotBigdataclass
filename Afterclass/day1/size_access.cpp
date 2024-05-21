//size, access연습, C의 index 출력하기 length();
//: )
#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string str = "abcdefg";
    for(int i = 0; i < str.size(); ++i) {
        if (str[i] == 'c') {
            std::cout << "index of c: " << i << std::endl;
        }
    }
    return 0;
}
