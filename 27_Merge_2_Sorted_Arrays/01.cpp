// Merge 2 Sorted Arrays
/* We have two arrays:
Elements are arranged in ascending order already.
We have to Merge these in Overall Sorted Order.
A = [1,2,3,0,0,0], m=3      B = [2,5,6], n=3
Answer = [1,2,2,3,5,6]
*/

/* Approach for (SC = O(1), TC=O(n+m)):
We use extra space as output space, moving from backward we firstly find the last element.
So We compare Max Val of A{array} from Max Val from B{array}
take idx = m+n-1 {because size of A array is size of m+n}
i = m-1 {in array A}, j=n-1 {in array B}
compare i & j value, if i indx value is max store it in idx and then i-- and vice versa for j.
and also idx--;
In this case the value of j in last becomes less than 0.
We don't take any step.

Case 2: A = {4,5,6,0,0,0}, B = {1,2,3}
In this i becomes less than 0, and Array B values not copied in Array A,
then we have to run additional loop for j variable to copy elements.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeSorted(vector<int> &A, int m, vector<int> &B, int n){
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[idx--] = A[i--];        
        } else{
            A[idx--] = B[j--];
        }
    }

    // repeat the j with idx to copy elements.
    while(j >= 0){
        A[idx--] = B[j--];
    }
    return A;
}

int main(){
    vector<int> A = {1,2,3,0,0,0};
    int m = 3;
    vector<int> B = {2,5,6};
    int n = 3;

    for(int val: mergeSorted(A, m, B, n)){
        cout << val << ", ";
    }
    return 0;
}