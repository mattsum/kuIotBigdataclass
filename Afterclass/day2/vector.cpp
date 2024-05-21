#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

int main() {
    // 벡터 선언 및 초기화
    std::vector<int> vec = {1, 2, 3};

    // 벡터의 크기 출력
    std::cout << "vec.size(): " << vec.size() << std::endl;
    
    // 벡터 비우기
    vec.clear();
    std::cout << "vec.size(): " << vec.size() << std::endl;

    // 벡터가 비어 있는지 확인
    if (vec.empty())
        std::cout << "vec is empty" << std::endl;
    else
        std::cout << "vec is not empty" << std::endl;

    // 문자열 벡터 선언 및 초기화
    std::vector<std::string> strVec = {"one", "two", "three", "4", "5"};
    
    // 요소 접근 및 출력
    std::cout << "first ele: " << strVec[0] << std::endl;
    std::cout << "val at 1: " << strVec.at(1) << std::endl;
    std::cout << "front: " << strVec.front() << std::endl;
    std::cout << "back: " << strVec.back() << std::endl;

    // 벡터 요소 반복 출력
    std::vector<int> intVec = {1, 2, 3, 4, 5};
    for (int i = 0; i < intVec.size(); ++i) {
        std::cout << strVec[i] << std::endl;
    }

    // 반복자 활용하여 벡터 요소 출력
    std::vector<std::string> strVec2 = {"one", "two", "three", "4", "5"};
    for (auto strIt = strVec2.begin(); strIt != strVec2.end(); ++strIt) {
        std::cout << *strIt << std::endl;
    }

    // 벡터에 요소 추가
    std::vector<std::string> addVec = {"ab", "cd"};
    addVec.push_back("ef");
    addVec.insert(addVec.begin() + 2, "2");
    for (size_t i = 0; i < addVec.size(); ++i) {
        std::cout << addVec[i] << ", ";
    }
    std::cout << std::endl;

    // 벡터에서 요소 제거
    std::vector<int> remVec = {1, 2, 3, 4, 5, 6, 7, 8};
    remVec.pop_back();
    for (int i = 0; i < remVec.size(); ++i) {
        std::cout << remVec[i] << ", ";
    }
    std::cout << std::endl;

    remVec.erase(remVec.begin() + 1);
    for (int i = 0; i < remVec.size(); ++i) {
        std::cout << remVec[i] << ", ";
    }
    std::cout << std::endl;

    remVec.erase(remVec.begin() + 1, remVec.begin() + 2);
    for (int i = 0; i < remVec.size(); ++i) {
        std::cout << remVec[i] << ", ";
    }
    std::cout << std::endl;

    return 0;
}

//프로그래머스 문제 풀기
//1.
//2.
//3.도
//4.배열의 유사도
//5.부분문자열 이어 붙여 문자열 만들기


// int main (){
//     //vector - array, list
//     std::vector<int> vec = { 1, 2, 3}; // == std::vector<int> vec = { 1, 2, 3}; 
// }

// //size, clear, empty
// std::cout << "vec.size(): " << vec.size() << std::endl;     //vec.length() x

// vec.clear();
// std::cout << "vec.size(): " << vec.size() << std::endl;

// if (vec.empty())
//     std::cout << "vec is empty" << std::endl;
//     else
//         std::cout << "vec is not empty" << std::endl


// //element access, [], at, front, back
// std::vector <std::string> strVec = {"one", "two", "three", "4", "5"};
// std::cout << "first ele: " << strVec[0] << std::endl;
// std::cout << "val at 1: " << strVec.at(1) << std::endl;
// std::cout << "front: " << strVec.front() << std::endl;
// std::cout << "back: " << strVec.back() << std::endl;

// //백터 요소 접근 연습 - 한 줄씩 출력하기

// std::vector<int> intVec = {1,2,3,4,5};

// for (int i=0; i< intVec.size(); ++i){
//     std::cout << strVec[i] << std::endl;
// }


// //iterator == pointer
// std::vector<std::string> strVec = {"one", "two", "three", "4", "5"};

// std::vector<std::string>::iterator strIt = strVec.begin();
//     //std::cout << *(strIt+1) << std::endl;     // == strVec.begin()
// for (strIt; strIt != strVec.end(); ++strIt){
//     std::cout << *strIt << std::endl;
// }

// //modifiers
// //add
// std::vector<std::string> addVec = {"ab", "cd"};
// addVec.push_back("ef");                     // {"ab", "cd", "ef", "z"}
// addVec.insert(addVec.begin() + 2, "2");     // .insert(iterator, 넣을값 value)

// for (size_t i = 0; i < addVec.size(); ++i){
//     std::cout << addVec[i] << ", ";
// }
// std::cout << "\n";

// //remove
// std::vector<int> remVec = {1, 2, 3, 4, 5, 6, 7, 8};

// remVec.pop_back();     //.pop_back() == .erase(iterator + 1)
// for (int i = 0; i < remVec.size(); ++i){
//     std::cout << remVec[i] << ", ";
// }
// std::cout << "\n";

// remVec.erase(remVec.begin() + 1);
// for (int i = 0; i < remVec.size(); ++i){
//     std::cout << remVec[i] << ", ";
// }
// std::cout << "\n";

// remVec.erase(remVec.begin() + 1, remVec.begin() + 2);
// for (int i = 0; i < remVec.size(); ++i){
//     std::cout << remVec[i] << ", ";
// }
// std::cout << "\n";
