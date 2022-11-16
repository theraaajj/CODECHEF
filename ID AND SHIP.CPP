#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        char n;
        cin >> n;
        n = toupper(n);
        switch (n) {
            case 'B':
                cout << "BattleShip" << "\n";
                break;
            case 'C':
                cout << "Cruiser" << "\n";
                break;
            case 'D':
                cout << "Destroyer" << "\n";
                break;
            case 'F':
                cout << "Frigate" << "\n";
            default:
                break;
        }
    }
    return 0;
}
