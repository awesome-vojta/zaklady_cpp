#include <iostream>
using namespace std;

//4. Napište program, který v cyklu nechává zadat uživatele 2 celé čísla (a, b)
//   a tiskne výsledek operace: a modulo b. Pokud je b = 0, program vytiskne
//   chybovou hlášku a skončí. Cyklus zadávání uživatel ukončí zadáním: a = 0.
int modified();
int main() {
    int a;
    int b;
    modified();
    cout << "Modulo!" << endl;
    while(a!=0){
        cout << "a= "; cin >> a;
        cout << "b= "; cin >> b;
        if (a!=0 && b!=0) {
            cout << a << "%" << b << "=" << a % b << endl;
        }else if (b==0) {
            cout << "Zero division error";
            break;
        }
    }
    return 0;
}

//5. Modifikujte program v zadání 1 změnou cyklu (např. while za for).
int modified(){
    int a;
    int b;

    cout << "Modulo!" << endl;
    for (;;) { // forever
        cout << "a= "; cin >> a;
        cout << "b= "; cin >> b;
        if(a==0){return 0;}

        if (a!=0 && b!=0) {
            cout << a << "%" << b << "=" << a % b << endl;
        }else if (b==0) {
            cout << "Zero division error";
            return 0;
        }
    }
}