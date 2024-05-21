//modifiers

#include <iostream>
#include <string>

int main() {
    // Add modifiers
    // Add
    std::string addStr = "abc";
    addStr += "123";
    std::cout << "addStr: " << addStr << std::endl;

    // Append
    std::string appendStr = "qwe";
    appendStr.append("456");
    std::cout << "appendStr: " << appendStr << std::endl;

    // Push
    std::string pushStr = "123";
    pushStr.push_back('a');
    std::cout << "pushStr: " << pushStr << std::endl;

    // Insert
    std::string insStr = "it is true";
    insStr.insert(6, "not ");
    std::cout << "insStr: " << insStr << std::endl;

    // Remove
    // Erase
    std::string eraseStr = "An example sentence";
    eraseStr.erase(2, 8);
    std::cout << "eraseStr: " << eraseStr << std::endl;
    eraseStr.erase(eraseStr.begin()+1);
    std::cout << "eraseStr: " << eraseStr << std::endl;

    // Pop
    std::string popStr = "boxes";
    popStr.pop_back();
    std::cout << "popStr: " << popStr << std::endl;

    // Replace
    std::string replaceStr = "this is a test string";
    replaceStr.replace(9, 5, "n example");
    std::cout << "replaceStr: " << replaceStr << std::endl;

    // String operations
    // Find
    std::string findStr("There are 2 needles in this haystack w/ needles");
    std::string findStr2("needle");
    std::size_t found = findStr.find(findStr2);

    if(found != std::string::npos)
        std::cout << "first 'needle' found at: " << found << '\n';   // no position

    found = findStr.find(findStr2, found + findStr2.size());
    std::cout << "second 'needle' found at: " << found << '\n';

    // Substr
    std::string str("abcdefg");
    std::string str2 = str.substr(2, 4);
    std::cout << "str2: " << str2 << std::endl;

    // Capitals
    std::string str3 = "abcDEF";
    for (int i = 0; i < str3.size(); ++i) {
        // str[i] = toupper(str[i]);
        str3[i] = tolower(str3[i]);
        std::cout << str3[i] << std::endl;
    }

    std::string str4 = "abcDEF";
    for (int i = 0; i < str4.size(); ++i) 
    {
        if (isupper(str4[i])) {       // islower(str[i])
            std::cout << str4[i] << " is in uppercase" << std::endl;
        } else {
            std::cout << str4[i] << " is in lowercase" << std::endl;
        }
    }

    // Convert to lowercase before comparison
    std::string compStr1 = "apple";
    std::string compStr2 = "banana";

    std::string input;
    std::cin >> input;

    for (size_t i = 0; i < input.size(); ++i) 
    {
        input[i] = tolower(input[i]);
    }

    if (input == compStr1)
        std::cout << "red" << std::endl;
    else if (input == compStr2)
        std::cout << "yellow" << std::endl;
    else
        std::cout << "unknown" << std::endl;

    // Special Characters - Problem Solving
    // Prepared Problems - Solve
    std::cout << "Please separate using \"\\n\"" << std::endl;

    return 0;
}






// //add-------------------------------------------------
// std::string addstr = "abc";
// addStr += "123";
// std::cout << "addStr: " << addStr << std::endl;

// std::string appendStr = "qwe";
// appendStr.append("456");
// std::cout << "appendStr: " << appendStr << std::endl;

// std::string pushStr = "123";
// pushStr.push_back('a');
// std::cout << "pushStr: " << pushStr << std::endl;

// std::string insStr = "it is true";
// insStr.insert(6, "not ");
// std::cout << "insStr: " << insStr << std::endl;

// //remove-----------------------------------------------
// std::string eraseStr = "An example sentence";
// eraseStr.erase(2, 8);
// std::cout << "eraseStr: " << eraseStr << std::endl;
// eraseStr.erase(eraseStr.begin()+1);
// std::cout << "eraseStr: " << eraseStr << std::endl;

// std::string popStr = "boxes";
// popStr.pop_back();
// std::cout << "popStr: " << popStr << std::endl;

// //replace-------------------------------------------------
// std::string replaceStr = "this is a test string";
// replaceStr.replace(9, 5, "n example");
// std::cout << "replaceStr: " << replaceStr << std::endl;

// //string operations
//     //find-----------------------------------------------
// std::string findStr ("There are 2 needles in this haystack w/ needles");
// std::string findStr2 ("needle");
// std::size_t found = findStr.find(findStr2);

// if(found != std::string::npos)
// std::cout << "first 'needle'found at: " << found << '\n';   // no position

// found = findStr.find(findStr2, found+findStr2.size());
// std::cout << "second 'needle' found at: " << found << '\n';

//     //substr-----------------------------------------------
// std::string str("abcdefg");
// std::string str2 = str.substr(2,4);
// std::cout << "str2: " << str2 << std::endl;

// //Capitals 대소문자-----------------------------------------
// std::string str = "abcDEF";
// for (int i=0; i<str.size(); ++i){
//     //str[i] = toupper(str[i]);
//     str[i] = tolower(str[i]);
//     std::cout << str[i] << std::endl;
// }

// str = "abcDEF";
// for (int i=0; i<str.size(); ++i){
//     if (isupper(str[i])){       //islower(str[i])
//         std::cout << str[i] << " is in uppercase" << std::endl;
//     } else {
//         std::cout << str[i] << " is in lowercase" << std::endl;
//     }
// }

// //대소문자 바꿔 출력하기-----------------------------------------

// std::string compStr1 = "apple";
// std::string compStr2 = "banana";

// std::string input;
// std::cin >> input;

// for (size_t i = 0; i < input.size(); ++i){
//     input[i] = tolower(input[i]);
// }

// if (input == compStr1)
//     std::cout << "red" << std::endl;
// else if (input == compStr2)
//     std::cout << "yellow" << std::endl;
// else
//     std::cout << "unknown" << std::endl;

// //특수문자 프로그래머스 문제 풀어보기------------------
// //준비하신 문제 풀어보기 -----------------------------
//     // Please separate using "\n".
// std::cout << "Please separate using \"\\n\"" << std::endl;