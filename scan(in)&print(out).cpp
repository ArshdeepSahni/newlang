#include <iostream>
using namespace std;
int main() {
    string s,var,cmdi,cmdo ;
    while (1){
        cout << "\nname your variable : ";
        cin >> var;
        cout << "\nWrite a Command to Input data in " << var << endl;
        cout << "HINT: Input Command ---> in(var)\n" << endl;
        cin >> cmdi;
        if (cmdi[0] == 'i' && cmdi[1] == 'n' && cmdi[2] == '(' && cmdi[cmdi.length() - 1] == ')') {
            cout << "Command succesful \n Now enter some DATA to your Variable '" << var << "' : \n";
            cin >> s;
            cout << "\nDATA saved to " << var << endl;
            cout << "To Print your data type the command: " << endl;
            cout << "HINT: Output Command ---> out(var)" << endl;
            cin >> cmdo;
            if (cmdo[0] == 'o' && cmdo[1] == 'u' && cmdo[2] == 't' && cmdo[3] == '(' &&
                cmdo[cmdo.length() - 1] == ')') {
                cout << "----------------------------------DATA-------------------------------------------" << endl;
                cout << s << endl;
                cout << "----------------------------------DATA-------------------------------------------" << endl;
            }
        }
    }
    return 0;
}
