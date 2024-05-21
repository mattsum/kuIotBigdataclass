#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <iterator>

int main (){
    //map = dictionary
    std::map<std::string, int> myMap = {{"a",1},{"b",2}};

    //access
    std::cout << "[\"a\"]: " << myMap["a"] << std::endl;
    std::cout << ".at(\"b\"): " << myMap.at("b") << std::endl;
    //capacity
    std::cout << ".empty(): " << myMap.empty() << std::endl;
    std::cout << ".size(): " << myMap.size() << std::endl;

    //modifiers
    //add
    myMap["new1"] = 3;
    myMap.insert({"new2", 4});

    std::cout << "[\"new1\"]: " << myMap["new1"] << std::endl;
    std::cout << "[\"new2\"]: " << myMap["new2"] << std::endl;
    
    //remove
    myMap.erase("new1");
    myMap.clear();

    //edit val
    myMap["b"] = 10;
    myMap["new1"] += 5;

    std::cout << ".empty(): " << myMap.empty() << std::endl;

    //iterators
    std::map<std::string, int>::iterator it = myMap.begin();

    for (it; it != myMap.end(); ++it){
        std::cout << it->first << ": " << it->second << std::endl;
    }
    return 0;

}