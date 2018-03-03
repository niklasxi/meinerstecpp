#include <iostream>
#include <string>


using namespace std;


int main() {


    string Name;
    cout << "Hallo, wie heisst Du? ";
    cin >> Name ;

    int alter;
    cout << "Wie alt bist Du " << Name << "?";
    cin >> alter;

    string Farbe;
    cout << "was ist deine lieblings Farbe?" ;
    cin >>  Farbe;


    string Haustier;
    cout << "was ist dein lieblings Haustier ?";
    cin >> Haustier;



    string lieblingsessen;
    cout << "was ist deine lieblingsessen?";
    cin >> lieblingsessen;

    cout << "Du heisst " << Name << " und bist " << alter << " Jahre alt und deine lieblings Farbe ist "<< Farbe <<
         " .dein lieblings Haustier ist ein "<< Haustier << " dein lieblingsessen ist " << lieblingsessen ;


};





