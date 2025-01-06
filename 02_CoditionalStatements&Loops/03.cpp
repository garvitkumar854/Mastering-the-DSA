// Loops
#include <iostream>
using namespace std;

int main()
{
    // while loop
    // Print numbers 1 to 10.
    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // for loop
    /* for(initialisation; condition; updation){
        // work;
    }
    */
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    
    cout << endl;

    // do-while loop (runs at least one time)
    i = 1;
    do{
        cout << i << " ";
        i++;
    } while (i<=10);
    
    // Nested Loops
    /*
    for (initialisation; condition; updation)
    {
        for (initialisation; condition; updation)
        {
            code
        }
        
    }
    */
    
    

    return 0;
}