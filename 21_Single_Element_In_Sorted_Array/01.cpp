/* Single Element In Sorted Array
arr = [1,1,2,3,3,4,4,8,8]   |   arr = [3,3,7,7,10,11,11]
*/

#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach {Linear Search And Bitwise Operators}

/*/ Optimal Code {Binary Search} for {TC = O(logn) & SC = O(1)}
In this we find mid of the arr {in any question there is odd number of elements}, 

Algorithm IF left and side even number elements.
then we compare the mid from mid-1 and mid+1 if mid-1 == mid then a pair of this is maked So, means the odd number
of elements remaning in left hand side So, our element is exists in left hand side or vice-versa.
example: [1,1,2,2,3,3,4,5,5] {n = 9}    |   mid = 3 at index = {4}
right side = 4 elements {even}  |   left side = 4 elements  {even}
So here mid +1 == mid {3==3}    |   So right side become odd {even - 1}
So our Single Element found in right half part.

IF left and side have odd number elements {Opposite Case}
example = [3,3,7,7,10,11,11]    |   mid = 7
left and right side =     odd no. elements
here our mid matched with previous Element  {rest elements = even numbers {perfect duplicates}, {odd-1}}
So, our Single Element exits in Right Side.
*/

int singleElement(vector<int>& arr){
    int n = arr.size();
    int st = 0, end = n-1;
    if(n == 1) return arr[0];           // if there is only one element in the array
    while(st <= end){
        int mid = st + (end-st)/2;

        // Additional Corner Cases because mid values exists anywhere in array (0,n-1)
        if(mid == 0 && arr[0] != arr[1]){
            return arr[mid];
        }
        if(mid == n-1 && arr[n-1] != arr[n-2]){
            return arr[mid];
        }
        // -------------------------Main Case-------------------------
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        if(mid % 2 == 0){   // even number of elements
            if(arr[mid] == arr[mid-1]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{               // odd number of elements 
            if(arr[mid] == arr[mid-1]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleElement(arr) << endl;
    return 0;
}
