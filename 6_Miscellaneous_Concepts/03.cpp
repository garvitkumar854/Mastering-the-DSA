// Scope
/*
Types: 
Local (if-else, functions, block of code, { }, loops)
Global 
*/
#include <iostream>
using namespace std;

// Global Variable
int x = 10;
int fun(){
    cout << x << endl;
}

int main(){
    // Example of Local Variable
    {
        // block of code.
        int a = 5;
    }

    // cout << a << endl; {Undeclared Indetifier}
   
   // we can use variable "j" in two loops beacause 1st loop is wipe out after being run.
   for(int i=0; i<10; i++){
        // 1st
        for(int j=0; i<10; i++){

        }
        // 2nd
        for(int j=0; i<10; i++){

        }
    }

    // Global Variable.
    cout << x << endl;

    return 0;
}