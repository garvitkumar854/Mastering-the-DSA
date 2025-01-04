// Functions

/*
Syntax:
    returnType function_name(){
        // work
    }
*/
/*
Parameters = Input of a Function*

returnType funcName(type p1, type p2){
    // do some work;

}
*/
#include <iostream>
using namespace std;


int printHello(){
    cout << "Hello\n";
    return 3;
}

double sum(double a, double b){
    double s = a + b ;
    return s;
}

int minOfTwo(int x, int y){
    if(x < y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int val = printHello();
    cout << "value = "<< val;
    // cout << printHello() << endl;
    
    cout << "\nSum of 10.99 and 5.2 is: " << sum(10.99,5.2) << endl;
    cout << "\nMinimum number betwenn 2 and 5: " << minOfTwo(2,5) << endl; 
    /* arguments are the actual values which is passed to the functions.
        and parameters are nothing but the copy of the arguments. 
    */
    return 0;
}