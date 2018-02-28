#include <iostream>
using namespace std;

int foo(int &forever);
int main() {
    int a = 3;
    cout << foo(a);
    a = 4;
    cout << foo(a);

    return 0;
}

int foo(int &forever){
    forever = 0;
    return forever;
}