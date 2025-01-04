// Pass by Reference: Passing the address of a variable to a function.
/*
Two types:
1. Pass By Reference through Pointers
2. Pass By Reference through References (Alias Name)
*/

#include <iostream>
#include <vector>
using namespace std;

void change_a(int a){   // pass by value.
    a = 20;
}
void changea(int &ptr){   // pass by referene using alias
    ptr = 20;
}


int main(){
    int a = 10;
    change_a(a);
    cout << "Value of a: " << a << endl;

    changea(a);
    cout << "Value of a: " << a << endl;
    return 0;
}