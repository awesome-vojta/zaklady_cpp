    int b = 0;
    int *p = &b; // kde bydli b?
    cout << p << endl; // vytiskne adresu
    cout << *p << endl; // vytiskne adresu 20

// operator dereference
//ukazatel vede do pameti, kde se nachazi jeho promena

void nuluj(int a){
    a=0;
}// nuluje lokalne
nuluj(a);

int b = 0;
int *p = &b; // kde bydli b?
cout << p << endl; // vytiskne adresu
cout << *p << endl; // vytiskne adresu 20




void nuluj(int *a){
    *a=0;
}// nuluje vstupni promenou 
nuluj(&a);


//dynamicka alokace pameti
// ukazatel na pole ukazuje na jeho zacatek, respektive prvni prvek

cout << *pole;
cout << pole[0];
// to samy

cout << pole[2];
cout << *(pole+2);
// to samy!

*(pole+2) = 10;

void vypisPole(int *pole, int velikost);
void vypisPole(int pole[], int velikost);
//to samy, nevytvari se nova kopie


void vypisPole(int pole[], int velikost);

int *prvek = new int; //ukousni kousek pameti a rekni kde je
delete prvek; // delete se aplikuje na adresu, nikoli promenou
delete &prvek; // nejde, sice typ je pointer
int *pole = new int[10]; // ukousni misto na 10 integeru, uloz adresu prvniho

delete prvky; // maze prvni prvek
delete [] prvky; // maze cely pole


pole je nejak veliky
je x krat veliky jako x pocet datovych typu uvnitr
int ma 4 bity, velikost pole o 3 int je 12

