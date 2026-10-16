#include <iostream>
using namespace std;

int main(){
    int times = 0;
    string greeting;

    while (cin >> greeting && greeting != "#"){
        times++;
        cout << "Case " << times << ": ";

        if (greeting == "HELLO"){
            cout << "ENGLISH" << endl;
        }else if (greeting == "HOLA"){
            cout << "SPANISH" << endl;
        }else if (greeting == "HALLO"){
            cout << "GERMAN" << endl;
        }else if (greeting == "BONJOUR"){
            cout << "FRENCH" << endl;
        }else if (greeting == "CIAO"){
            cout << "ITALIAN" << endl;
        }else if (greeting == "ZDRAVSTVUJTE"){
            cout << "RUSSIAN" << endl;
        }else cout << "UNKNOWN" << endl;
    }

    return 0;
}