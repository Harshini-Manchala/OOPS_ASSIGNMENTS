#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class StringArray {
private:
    vector<std::string> arr; // To store the array of strings

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

    void findAndCount(const std::string& searchStr) const {
        int count = std::count(arr.begin(), arr.end(), searchStr);
        
        if (count > 0) {
            std::cout << "The string \"" << searchStr << "\" appears " << count << " time(s) in the array.\n";
            for (const auto& str : arr) {
                if (str == searchStr) {
                    std::cout << str << std::endl;
                }
            }
        } else {
            std::cout << "The string \"" << searchStr << "\" is not found in the array.\n";
        }
    }
};

int main() {
    StringArray myArray; // Default Constructor
    
    std::cout << "Enter lines of text (type 'END' to stop):\n";
    std::string line;
    while (std::getline(std::cin, line) && line != "END") {
        myArray.addString(line);
    }

    
    std::cout << "Enter the string to search for:\n";
    std::string searchStr;
    std::getline(std::cin, searchStr);


    myArray.findAndCount(searchStr);

    return 0;
}
