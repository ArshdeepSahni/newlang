//
// Created by Arsh on 19/09/20.
//

#ifndef C___PRINT_H
#define C___PRINT_H
#include <iostream>
#include "Scan.h"

class Print{
public:
    string variable,print_command;
    void Printing_Class_Func() {
        Scan sobj;
        cout << "To Print your data type the command: " << endl;
        cout << "HINT: Output Command ---> out(var)" << endl;
        cin >> print_command;
        if (print_command[0] == 'o' && print_command[1] == 'u' && print_command[2] == 't' && print_command[3] == '(' &&
            print_command[print_command.length() - 1] == ')') {
            cout << "----------------------------------DATA-------------------------------------------" << endl;
            cout << sobj.data << endl;
            cout << "----------------------------------DATA-------------------------------------------" << endl;
        }
        else{
            cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
        }
    }
};


#endif //C___PRINT_H
