#include <iostream>
#include <string>


using namespace std;


int main() {


    string Name;
    cout << "Hallo, wie heisst Du? ";
    cin >> Name ;

    int alter;
    cout << "Wie alt bist Du " << Name << "? ";
    cin >> alter;

    string Farbe;
    cout << "Was ist deine  Lieblingsfarbe? " ;
    cin >>  Farbe;


    string Haustier;
    cout << "Was ist dein Lieblingshaustier? ";
    cin >> Haustier;

    string lieblingsessen;
    cout << "Was ist deine Lieblingsessen? ";
    cin >> lieblingsessen;

    cout << "Du heisst " << Name << " und bist " << alter << " Jahre alt " << endl;
    cout << "Deine Lieblingsfarbe ist "<< Farbe << endl << "und  dein Lieblingshaustier ist ein "
         << Haustier << "." << endl;
    cout << "Dein Lieblingsessen ist " << lieblingsessen << "." << endl ;

};




