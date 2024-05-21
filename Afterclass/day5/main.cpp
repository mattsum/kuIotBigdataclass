#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>



int main(){
    //STL queue

    std::queue<int> iQueue;

    //modify
    iQueue.push(1);
    iQueue.push(4);
    iQueue.push(8);

    //peek first and last element
    //std::cout << "iQueue.front(): " << iQueue.front() << std::endl;
    //std::cout << "iQueue.back(): " << iQueue.back() << std::endl;

    iQueue.pop();
    std::cout << "iQueue.front(): " << iQueue.front() << std::endl;
    std::cout << "iQueue.back(): " << iQueue.back() << std::endl;

    //size
    std::cout << "iQueue.empty(): " << iQueue.empty() << std::endl;
    std::cout << "iQueue.size(): " << iQueue.size() << std::endl;

    //vector 안의 최대/최소값 구하기
    std::vector<int> vec= { 3, 2, 5, 1, 7, 6 };
    int max = *max_element(vec.begin(), vec.end());
    int min = *min_element(vec.begin(), vec.end());
    std::cout << "max: " << max << std::endl;
    std::cout << "min: " << min << std::endl;

    //vector 정렬하기
    sort(vec.begin(), vec.end());
    for(size_t i=0; i<vec.size(); ++i){
        std::cout << vec[i] << std::endl;
    }
    sort(vec.begin(), vec.end(), std::greater<int>());
    for(size_t i=0; i<vec.size(); ++i){
        std::cout << vec[i] << std::endl;
    }

return 0;

}