#include <iostream>

using namespace std;

int main()
{
    char wybor;
    int x, y, z;
    int wynik;

    cout << "Witaj w kalkulatorze! tutaj opcje do wyboru: " << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" << endl;

    cin >> wybor;

    switch(wybor)
    {
        case '1':
                cin >> x;
                cin >> y;
                cout << "suma: " << x+y << endl;
                cin >> z;
        case '2':
                cin >> x;
                cin >> y;
                cout << "suma: " << x-y << endl;
                cin >> z;               
        case '3':
                cin >> x;
                cin >> y;
                cout << "suma: " << x*y << endl;
                cin >> z;
        case '4':
                cin >> x;
                cin >> y;
                cout << "suma : " << x/y << endl;
                cin >> z;
			default:
				cout << "Zle podales argument, lub takie cos nie istnieje!\n";
				break;
    }
    return 0;
}
