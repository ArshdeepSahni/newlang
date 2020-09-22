#include <iostream>
#include "Scan.h"
#include "Print.h"
#include <string.h>
using namespace std;
int main() {
    Scan sobj;
    Print pobj;
    while (1) {
        sobj.Scanning_Class_Func();
        pobj.Printing_Class_Func();
    }
    return 0;
}