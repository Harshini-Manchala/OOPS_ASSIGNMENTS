#include <iostream>
using namespace std;

class class_1;
class class_2;

class class_1 {
private:
    int value1;

public:
    class_1(int v) : value1(v) {}

    friend void exchange(class_1 &obj1, class_2 &obj2);

    void display() {
        cout << "class_1 value: " << value1 << endl;
    }
};

class class_2 {
private:
    int value2;

public:
    class_2(int v) : value2(v) {}

    friend void exchange(class_1 &obj1, class_2 &obj2);

    void display() {
        cout << "class_2 value: " << value2 << endl;
    }
};


void exchange(class_1 &obj1, class_2 &obj2) {
    int temp = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before exchange:" << endl;
    obj1.display();
    obj2.display();

    exchange(obj1, obj2);

    cout << "After exchange:" <<endl;
    obj1.display();
    obj2.display();

    return 0;
}
