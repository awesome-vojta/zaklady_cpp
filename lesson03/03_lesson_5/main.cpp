#include <iostream>
using namespace std;
int foo(int max);
int foo(int min, int max);
int main() {
    srand(time(NULL));
    int max = 110;
    int min = 100;
    cout << foo(min,max);
    return 0;
}
int foo(int max){
    int number = rand() % max + 1;
    return number;
}

int foo(int min, int max){
    int diff = abs(min-max);
    int n = min + (rand() % diff + 1);
    return n;
}
