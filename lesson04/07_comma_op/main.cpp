#include <iostream>
#include <unistd.h>
using namespace std;
//7. Na jednoduchém příkladu cyklu demonstrujte funkcionalitu operátoru čárka.
string grow_tree(int);
void print_tree(string);
bool chop_able(string);
string chop_it_baby(string);

int main() {
    int height;

    cout << "Let's chop some trees 'eh! How tall is the tree?" << endl;
    cout << "height= ";
    cin >> height;

    string tree = grow_tree(height);

    string s;
    while(print_tree(tree), chop_able(tree)) { // while(expr1, expr2) == while(expr2) and
        tree = chop_it_baby(tree);             // expr1 gets called at the end of the loop
    }

    // while(chop_able(tree){
    //     tree = chop_it_baby(tree);
    //     print_tree(tree);
    // }
    return 0;
}
string grow_tree(int h){
    return string (h,'=');
}
void print_tree(string tree){
    cout << tree << endl;
}
bool chop_able(string tree) {
    return (tree.length() != 1); // 3 --> true
}
string chop_it_baby(string tree) {

    usleep(600000);
    cout << tree.substr(0,tree.length()-1) << "'=" << endl;usleep(300000);
    cout << tree.substr(0,tree.length()-1) << "!=" << endl;usleep(300000);
    cout << tree.substr(0,tree.length()-1) << "| =" << endl;usleep(300000);
    cout << tree.substr(0,tree.length()-1) << "!  -" << endl;usleep(300000);
    cout << tree.substr(0,tree.length()-1) << "'   ." << endl;usleep(300000);
    cout << tree.substr(0,tree.length()-1)  << endl;usleep(300000);
    // "console animation"

    return tree.substr(0,tree.length()-1);
}

