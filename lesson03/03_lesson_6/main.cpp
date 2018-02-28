#include <iostream>
using namespace std;
int foo(int min, int max);

int main() {
    int min = 30;
    int max = 40;
    return 0;
}

int foo(int min, int max){
    int diff = abs(min-max);
    srand(time(NULL));
    int n = rand() % diff + 1;
    return n;
}