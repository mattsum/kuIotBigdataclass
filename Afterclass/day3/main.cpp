#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int get_gcd(int a, int b){
    int res = std::min(a,b);
    while (res != 0){       // res > 0
        if (a % res == 0 && b % res == 0){
            break;
        --res;    
        }
    return res;
    }
}

int get_gcd_euc(int a,  int b) {
    // 재귀함수 
    // ........과정
    if (a==0)
        return b;
    if (b==0)
        return a;

    if (a==1 || b==1)
        return 1;
    
    if (a==b)
        return a;

    if (a > b)
        return get_gcd_euc(a-b, b);
    else if (a < b)
        return get_gcd_euc(b-a, a);
    else
        return a;
        
    return 0;
}

int main()
{
    // GCD

    std::string a, b;
    int num1, num2;

    // 입력받기 
    while (true) {
        std::cout << "enter num 1: ";
        std::getline(std::cin, a);
        std::cout << "enter num 2: ";
        std::getline(std::cin, b);

        // 숫자변환 - std::stoi(..); string -> int
        try {
            num1 = std::stoi(a);
            num2 = std::stoi(b);
        } catch (std::exception &e) {
            std::cout << "failure due to:" << e.what() << std::endl;
        }
    }
    
    int gcd = get_gcd(num1, num2);
    std ::cout << "the greatest common divisor of " << num1 << " and " << num2 << " is " << gcd;

    // GCD _ Euclidean Algorithm

    // LCM
    int lcm = num1 * num2 / get_gcd(num1, num2);

    std::cout << "The lowest common multiple of " << num1 << " and " << num2 << " is " << lcm;

    return 0;
}


// int get_gcd(int a, int b){
//     int res = std::min(a,b);
//     while (res != 0){       //res > 0
//         if (a % res == 0 && b % res == 0){
//             break;
//         --res;    
//         }
//     return res;
//     }
// }

// int get_gcd_euc(int a,  int b) {
//     //재귀함수 
//     //........과정
//     if (a==0)
//         return b;
//     if (b==0)
//         return a;

//     if (a==1 || b==1)
//         return 1;
    
//     if (a==b)
//         return a;

//     if (a > b)
//         return get_gcd_euc(a-b, b);
//     else if (a < b)
//         return get_gcd_euc(b-a, a);
//     else
//         return a;
        
//     return 0;
// }
// int main()
// {
//     //GCD

//     std::string a, b;
//     int num1, num2;

//     //입력받기 
//     while (true) {
//         std::cout << "enter num 1: ";
//         std::getline(std::cin, a);
//         std::cout << "enter num 2: ";
//         std::getline(std::cin, b);

//         //숫자변환 - std::stoi(..); string -> int
//         try {
//             num1 = std::stoi(a);
//             num2 = std::stoi(b);
//         } catch (std::exception &e) {
//             std::cout << "failure due to:" << e.what() << std::endl;
//         }
//     }
    
//     int gcd = get_gcd(num1, num2);
//     std ::cout << "the greateset common divisor of " << num1 << " and " << num2 << " is " << ged;
// }

// //GCD _ Euclidean Algorithm
// //

// //LCM
// int 1cm = num1 * num2 / get_gcd(num1, num2);

// std::cout << "The lowest common multiple of " << num1 << " and " << num2 << " is " << 1cm;
