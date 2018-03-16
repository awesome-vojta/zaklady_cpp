#include <iostream>
using namespace std;

void nuluj(int b){ // funkce co nuluje lokalne
    b=0;
}
void nuluj(int *b){ // funkce co nuluje pointer, promenou na adrese
    *b=0;
}

void nulujPole(int pole[], int velikost) {

}



int main() {
    int b = 20;
    int *p = &b;
    // b - hodnota promene
    //*p - dereference pointeru, hodnota promene
    // p - adresa promene b v pameti
    //&b - adresa promene b v pameti

    cout<<b<<" bydli "<<&b<<endl;
    cout<<*p<<" bydli "<<p<<endl;

    if(p==&b){cout<<"true";}
    else{cout<<"false";}

    nuluj(&b);
    cout<<"Just nulled b!"<<endl;
    cout<<b;

    int prvky[4] = {3,3,6,1};

    cout << prvky << endl;
    cout << *(prvky) << endl;


    delete prvky;
    cout << prvky << endl;
    cout << &*(prvky+2) << endl;





    return 0;
}