#include <iostream>
#include <array>
using namespace std;
//Napište program ktery načte ze standardního vstupu posloupnost čísel a vypočte
//  z nich:
//  - součet
//  - minimum
//   - maximum
//   - průměrnou hodnotu
//   Statistiky vytiskne.

int addition(int[],int);
int min(int[],int);
int max(int[],int);
int mean(int[],int);


int main() {
    int n;

    cout << "Enter number of inputs";
    cin >> n;
    int seq[n];


    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }

    cout << "Addition: " << addition(seq,n) << endl;
    cout << "Min: " << min(seq,n) << endl;
    cout << "Max: " << max(seq,n) << endl;
    cout << "Mean: " << mean(seq,n) << endl;
    return 0;
}

int addition(int *seq, int n) {
    int r = 0;
    for (int i = 0; i < n; ++i) {
        r+=seq[i];
    }
    return r;
}

int mean(int *seq, int n) {
    return addition(seq,n) / n;
}

int max(int *seq, int n) {
    int max = seq[0];
    for (int i = 1; i < n; ++i) {
        max = (max > seq[i]) ? max : seq[i]; // min < seq[i] ->> min = min
    }
    return max;
}

int min(int *seq, int n) {
    int min = seq[0];
    for (int i = 1; i < n; ++i) {
        min = (min < seq[i]) ? min : seq[i]; // min < seq[i] ->> min = min
    }
    return min;
}

