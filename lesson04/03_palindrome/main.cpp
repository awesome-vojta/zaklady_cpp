#include <iostream>
using namespace std;

//3. Napište program, který nechá uživatele zadat slovo a zjistí, zda je toto
//slovo palindrom.

string reverse(string &s);
string fast_reverse(string &s);

int main() {
    string pal;
    cout << "enter a palindrome";
    cin >> pal;

    cout << fast_reverse(pal);
//    if (reverse(pal) == pal) {
//        cout << "string is palindrome!";
//    } else { cout << "string is not a palindrome";}


    return 0;
}

string reverse(string &s) {
    string str;
    int n = s.length();
    while(n>0) {
        str+=s[n-1];
        n--;
    }
    return str;
}

