#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class StringArray {
private:
    std::vector<std::string> arr; // To store the array of strings

public:
   
    StringArray() {
        std::cout << "Default Constructor called.\n";
    }

   
    StringArray(const std::vector<std::string>& inputArr) : arr(inputArr) {
        std::cout << "Parameterized Constructor called.\n";
    }


    StringArray(const StringArray& other) : arr(other.arr) {
        std::cout << "Copy Constructor called.\n";
    }

   
    ~StringArray() {
        std::cout << "Destructor called.\n";
    }

    void addString(const std::string& str) {
        arr.push_back(str);
    }

    void replaceString(const std::string& s1, const std::string& s2) {
        for (auto& str : arr) {
            size_t pos = 0;
            while ((pos = str.find(s1, pos)) != std::string::npos) {
                str.replace(pos, s1.length(), s2);
                pos += s2.length();
            }
        }
    }

  
    void printArray() const {
        std::cout << "Updated Array:\n";
        for (const auto& str : arr) {
            std::cout << str;
        }
        std::cout << std::endl;
    }
};

int main() {
    StringArray myArray; // Default Constructor


    std::cout << "Enter lines of text (type 'END' to stop):\n";
    std::string line;
    while (std::getline(std::cin, line) && line != "END") {
        myArray.addString(line);
    }


    std::cout << "Enter the string to replace (S1):\n";
    std::string s1;
    std::getline(std::cin, s1);

    std::cout << "Enter the replacement string (S2):\n";
    std::string s2;
    std::getline(std::cin, s2);

    
    myArray.replaceString(s1, s2);
    myArray.printArray();

    return 0;
}
