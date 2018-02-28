#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int &b=a;
    cout << "a = " << a <<"\n";
    cout << "b = " << b <<"\n";
    a+=3;
    cout << "a = " << a <<"\n";
    cout << "b = " << b <<"\n";
    cout <<"\n";
    cout << "add. of a: " << &a;
    cout <<"\n";
    cout << "add. of b: " << &b;

    return 0;
}
