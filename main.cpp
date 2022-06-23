#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "-----------------------------------\n";
    cout << "-  Welcome to the gay calculator  -\n";
    cout << "-----------------------------------\n";


    cout << "How many people are in the room? ";
    int people;
    cin >> people;
    cout << "How many getero men are in the room? ";
    int men;
    cin >> men;
    cout << "How many women are in the room? ";
    int women;
    cin >> women;

    int gays = people - men - women;
    if (gays) {
        cout << "People " << people << "\n";
        cout << "Men " << men << "\n";
        cout << "Women " << women << "\n \n";
        if (gays == 1) {
            cout << "In the room is " << gays << " gay\n";
        }
        if (gays > 1) {}
        cout << "In the room are " << gays << " gays\n";
    } if (gays < 0) {
        cout << "Hey, hey!How can be " << gays << " in the room?\n";
    }
}
