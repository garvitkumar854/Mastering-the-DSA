// Pass By Reference, means passing the address of value to the functions, used for Non-Primitive Datatypes
// Arrays is always Pass by Reference (implicitly/automatically)
#include <iostream>
using namespace std;

void changeArray(int arr[], int size){  
    cout << "In Function:" << endl;
    for(int i=0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {1, 2, 3};
    changeArray(arr,3);


    cout << "In Main:" << endl;
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // Array is Updated, due to Pass by Reference.
    return 0;
}
