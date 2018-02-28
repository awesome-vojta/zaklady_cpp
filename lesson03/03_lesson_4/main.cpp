#include <iostream>
using namespace std;
int change(int &a, int &b);
int main() {
    int a = 1;
    int b = 2;
    cout << change(a,b);
    a=99;b=11;
    cout << change(a,b);
    return 0;
}

int change(int &a, int &b){
    a=5;b=7;
    return (a+b);
}