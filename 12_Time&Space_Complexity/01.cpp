/* Time and Space Complexity {Very Important Concept in Programming}
Time Complexity: NOT the actual time taken but amount of time taken{operations} as function of input size(n).
f(n) = n give behaviour of how our algorithm works. we check time complexity for worst case scenarios.

Big O Notation: symbol like as rupee for our money
O(n) -> gives worst case complexity (upper bound),
worst case not more than "(n)"

Square Symbol: Alt + 0178
Square Root Symbol: Alt + 251

example:
f(n) = 4n² + 3n + 5
     = n² + n + 1 (suppose n = 10⁵)
     so big value is equal to = n²

example: 100 + 5n² + √n
        = 1 + n² + √n
        = O(n²)

worst case = O {Big O/ Upperbound}
average case =  Θ (theta)
best case = Ω (Omega/lowerbound)

Space Complexity: Amount of space taken by an Algorithm as function of input size(n)

code: 1) input space{vector,array,strings}       2) oxiliary{extra} space, ex: linear search (not including array{input space})
in other words, suppose we have array = {n}, we have an oxiliary array "SquareArray" of same size, we have to store square of 1st array elements in it.
So, Space Complexity = O(n)

exmaple: to calculate sum of all elements in an array, we have to make a variable "sum" to store sum.
        in this if we have n = 10, or any other value {doesn't matter} because variable sum is only 1 and it is constant {oxiliary Space}
        So, Space Complexity = O(k), because we ignore constants in Big O so it is = O(1) {Big of 1}{Horizontal line parallel to the x axis in Graph}.

More important is Time Complexity in Interviews/Placements and In real life.

Precedence of Time Complexity:
O(1)            {Constant Time Complexity/ Best}
O(log n)        
O(n)            {Linear Time Complexity}
O(n log n)      
O(n²)
O(n³)
O(2ⁿ)           {Exponential Time Complexity / Generally find in Recursion}
O(n!)           {equal to n factorial}
*/ 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Common Time Complexities
    // O(1)     {Constant/Best case}, Ex: Sum of numbers from 1 to N (without using any loop)
    int n;
    cin >> n;
    int ans = n * (n+1)/2;

    // O(n)     {Linear}, Ex: N Factorial / Nth Fibonacci - Dynamic Programming / Kadane's Algorithm
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    // O(n²)    Ex: Bubble Sort / Selection Sort / Insertion Sort
    int arr[5];
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[i] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    /* Here, Outer Loop Runs (n) times
    if n = 4 then:
        outer loop              inner loop
        i=0                     j=0,1,2 (n-i-1 = {3 times})
        i=1                     j=0,1
        i=2                     j=0

    If outer loop runs first time then inner loop runs 3 times. so inner loop performs K operations
    i = 0    1     2
     = 3*K + 2*K + 1*K

     Total Operations = (n-1)k + (n-2)k + (n-3)k + .... 2k + k 
                    = K[(n-1) + (n-2) + (n-3) + .... 2+1]
                    = K * [n * (n-1)/2]
                    = (Kn²/2) - (Kn/2)  {ignore constants}
                    = (n² - n)          {largest term}
    Final Answer:   = O(n²)
    */

    /*
    O(n³) = Example:     Possible SubArrays in an Array.
    for(...){
         for(...){
             for(...){
            }
        }
    }
    */

    // O(logn)  Example:    Binary Search
    /* int s=0, e=n-1;
       while(s <= e){
           int mid = s + (e-s)/2;
           if(arr[mid] < target){
               s = mid + 1;
           } else if(arr[mid] > target){
               e = mid - 1;
           } else{
               return mid; // ans
           }
       }
    */

    // O(nlogn) Example: {Sorting, Merge Sorting, Quick Sort (Average), Greedy Algorithms}
    // O(2ⁿ)    Example: Recursion
    // O(n!)    (not so common) Example: N Queens (Recursion), Knight tours {without any optimization}, All possible permutations of strings (recursion)
    
    return 0;
}

