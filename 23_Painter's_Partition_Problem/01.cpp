// Painter's Partition Problem {Same as Book Allocation}
/* Given are N boards of length of each given in the form of array, and M Painters, such that
each painter takes 1 unit of time to paint the 1 unit of the board.

The task is to find the minimum time to paint all boards under the constraints that any painter will only
paint continuous sections of boards.

Ex = arr = [10,10,10,10], N = 4, M = 2, Here P1 = 10+10 and P2 = 10+10 So minimum 20 minutes time taken to paint all boards.

Ex = arr = [40, 30, 10, 20], N = 4, M = 2
Valid Ways:
1.      P1 = 40                 P2 = 60 {30+10+20}              Max = 60
2.      P2 = 70 {40+30}         P2 = 30 {10+20}                 Max = 70
3.      P2 = 80 {40+30+10}      P2 = 20                         Max = 80
                                Minimum Time Taken =            =  60

Minimum Time = {hypothetically} We assigned one painter to one Board only (Max Length)
Maximum Time = Sum of Array\Length {Means One painter painting all boards}

Redefining the Problem to find Minimum Possible Value to paint all boards.
40 ---- 100 {Range}     {Values but not All is Possible Values}
find mid,
Mid -> possible answer / not possible answer
if Mid is possible answer Then, find the minimum possible answer in Left

*/

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int maxAllowedTime){     // O(n)
    int painters = 1, time = 0;
    for(int i=0; i<n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        } else{
            painters++;
            time = arr[i];
        }
    }
    if(painters <= m){
        return true;
    } else{
        return false;
    }
}

int minTimeToPaint(vector<int> &arr, int n, int m){             // O(log(SUM) * n)
    int sum, maxVal = INT8_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];                  // Find Sum of Array {Length of Boards}
        maxVal = max(maxVal,arr[i]);    // Find Max Value in Array {Minimum Possible Answer}
    }

    int st = maxVal, end = sum, ans = -1;
    while(st <= end){           // O(log(SUM)
        int mid = st + (end - st)/2;

        if(isPossible(arr, n, m, mid)){     // left
            ans = mid;
            end = mid - 1;
        } else{
            st = mid + 1;                   // right
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;
    cout << "Minimum Possible Time to Paint All Boards: " <<minTimeToPaint(arr,n,m) << endl;
    return 0;
}
