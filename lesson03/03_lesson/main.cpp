#include <iostream>

using namespace std;

ulong fact(int n);

int main() {
    int n=-1;

    while (n < 0) {
        cout << "enter a number\n";
        cin >> n;
    }

    cout << fact(n);

    return 0;
}

ulong fact(int n) {
    if (n==0) {
        return 1;
    }
    return n*fact(n-1);
}

// 5! = 1*2*3*4*5