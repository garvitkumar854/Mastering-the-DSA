// Book Allocation Problem based Binary Search
/* There are N books, each ith book has A[i] number of pages.
You have to allocate books to M number of students so that the maximum number of pages
allocated to a student its minimum.

-> Each book should be allocated to a student.
-> Each student has to allocated at least one book.
-> Allotment/Allocation should be in contiguous order.

Calculate and return that minimum possible number.
Return -1 If a valid assignment is not possible.

Exampele: arr = [2, 1, 3, 4], N = 4         | M = 2
Valid Ways:
Method 1:       S1 = 2                  S2 = 8 {1+3+4}          Maximum Number: 8
Method 2:       S1 = 3 {1+2}            S2 = 7 {3+4}            Maximum Number: 7
Method 3:       S1 = 6 {2+1+3}          S3 = 4                  Maximum Number: 6
                                                                -----------------
                                                    Minimum =          6

M > N   return -1 {There is not any valid way exist}
*/

#include <iostream>
#include <vector>
using namespace std;

// Solution {Binary Search}
/* minimum possible pages given to student = 0, and maximum pages = sum of all pages {sum of array elements}
*/

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }


        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}


int allocateBooks(vector<int> &arr, int n, int m){  // O(logN * n)
    if(m > n){
        return -1;
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){     // O(n)
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;      // range of possible Ans

    while(st <= end){           
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid)){        // left
            ans = mid;
            end = mid - 1;
        } else{                             // right
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}

