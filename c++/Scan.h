//
// Created by Arsh on 19/09/20.
//

#ifndef C___SCAN_H
#define C___SCAN_H
#include <iostream>
using namespace std;

class Scan{
public:
    string data,variable,scan_command;
    void Scanning_Class_Func() {
        cout << "\nname your variable : ";
        cin >> variable;
        cout << "\nWrite a Command to Input data in " << variable << endl;
        cout << "HINT: Input Command ---> in(var)\n" << endl;
        cin >> scan_command;
        if (scan_command[0] == 'i' && scan_command[1] == 'n' && scan_command[2] == '(' &&
            scan_command[scan_command.length() - 1] == ')') {
            cout << "Command succesful \n Now enter some DATA to your Variable '" << variable << "' : \n";

            cin.ignore(1, '\n');
            getline(cin, data);
            cout << "\nDATA saved to " << variable << endl;
        }
    }
};
#endif //C___SCAN_H
