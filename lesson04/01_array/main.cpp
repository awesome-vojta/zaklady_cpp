//        1. Napište program, který vytvoří pole libovolných hodnot a vytiskne všechny
//        jeho prvky.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many vars do you want to store?" << endl;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; ++i) {
        array[i] = n;
    }
    for (int j = 0; j < n; ++j) {
        cout << array[j] << endl;
    }

    return 0;
}