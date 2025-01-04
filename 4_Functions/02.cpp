// Pass by value
#include <iostream>
using namespace std;

int xchange(int a){
    int x = 2*x;
    return x;
}

int main(){
    int x = 0;
    cout << "\nX(Original) is: " << x << endl;
    cout << "X(Function) is: " << xchange(x) << endl;
    cout << "X(Main Function) is: " << x << endl;
    
    return 0;
}
// Note: Values Passed to Primitive Datatypes is Always *Pass by Value*.
