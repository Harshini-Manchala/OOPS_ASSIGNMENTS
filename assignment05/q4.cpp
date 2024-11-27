#include <iostream>
using namespace std;

class Integer {
private:
    int value;  
public:

    Integer(int v = 0) : value(v) {}
    friend ostream& operator<<(ostream& out, const Integer& obj); 
    friend istream& operator>>(istream& in, Integer& obj);
};

ostream& operator<<(ostream& out, const Integer& obj) {
    out << obj.value;  
    return out;        
}

istream& operator>>(std::istream& in, Integer& obj) {
    in >> obj.value;  
    return in;        
}

int main() {
    Integer num;

    cout << "Enter an integer value: ";
    cin >> num;  

    cout << "You entered: " << num << endl;  

    return 0;
}
