// 05.07.24 1st lecture [ 박지안 강사님 ]
// getline + empty example
// :}
#include <iostream>
#include <string>

int main() {
    std::string content;
    std::string pracLine;

    std::cout << "Enter text:" << std::endl;

    do {
        getline(std::cin, pracLine);
        content += pracLine + "\n"; //content.append(" ");
    } while (!pracLine.empty());

    std::cout << "New Line: " << content << std::endl;

    return 0;
}
