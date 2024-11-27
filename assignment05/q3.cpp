#include <iostream>
using namespace std;

class Array {
private:
    int* arr;   
    int size;

public:
   
    Array(int s) : size(s) {
        arr = new int[size];  
        cout << "Array of size " << size << " created." << endl;
    }

    
    void Setarray() {
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1;  
        }
    }

    
    void display() const {
        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }

    
    ~Array() {
        delete[] arr;  
        cout << "Array destroyed and memory deallocated." << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    Array myArray(size);

    
    myArray.Setarray();
    myArray.display();

    

    return 0;
}
