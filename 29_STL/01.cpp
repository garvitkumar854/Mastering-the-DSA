#include <iostream>
#include <vector>
#include <algorithm>
#include <list>         
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

// Containers in STL 
int main(){
    // Vector
    vector<int> vec = {1,2};
    cout << "Size of Vector: " << vec.size() << endl;
    // Function of Vector
    vec.push_back(3);        
    vec.pop_back();         
    vec.capacity();
    vec.at(0);
    for(int val: vec){
        cout << val << " ";
    }
    vec.erase(vec.begin()+1);                           // example to erase 2 element of vector using Iterator.
    cout << endl;
    for(int val: vec){
        cout << val << " ";
    }
    vector<int> arr = {1,2,3,4,5,6};
    arr.erase(arr.begin()+1, arr.begin()+3);            // Erasing 2,3 Elements from vectors.
    cout << endl;
    for(int val: arr){
        cout << val << " ";
    }
    arr.insert(arr.begin()+1,{2,3});                    // Inserting again 2,3 after 1 in vector.
    cout << endl;
    for(int val: arr){
        cout << val << " ";
    }
    cout << "\narr end(): " << *(arr.end()) << endl;               // give 0 or garbage value.
    arr.clear();                                        // Erase all elements from vectors.
    cout << arr.empty() << endl;                        // Check if the vector is empty or not. returns 1 if true.
    
    
    // Iterators
    vector<int> arr2 = {1,2,3,4,5,6,7,8,9,10};
    // vector<int>:: iterator it;
    for(auto it = arr2.begin(); it != arr2.end(); it++){         // forward iterator loop
        cout << *(it) << ",";                               // print value by derefrencing the iterator
    }
    cout << endl;
    // we can use auto instead of don't defining the type {iterator prototype line}
    for(auto it = arr2.rbegin(); it != arr2.rend(); it++){      // backward loop by reverse begin and end (rbegin & rend)
        cout << *(it) << ",";
    }

    cout << endl;
    // Lists
    list<int> l;
    l.push_back(1);         // 1
    l.push_back(2);         // 1,3
    l.push_front(3);        // 3,1,2
    for(int val: l){
        cout << val << ",";
    }
    cout << endl;
    // same for pop_back & pop_front
    // size, erase, clear, begin, end, rbegin, rend, insert, front, back {same functions as for vectors}
    // Major Diff: Vector implemented as a Dynamic Array, list as a doubly linked list

    // Deque {Double Ended Queue}
    deque<int> deq = {2,4,6,8};
    // same functions as list
    // Major Diff: List imp as Double Linked list, but deque as dynamic arrays
    // In Deque RANDOM ACCESS possible, but not in Lists.
    
    // Pair
    pair<int, string> p = {1, "Garvit"};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<char, int>> p1 = {1, {'a',3}};           // Pair of Pair
    cout << p1.second.first << " " << p1.second.second << endl;

    vector<pair<int, int>> vec4 = {{1,2}, {2,3}, {3,4}};                         // Vector of Pair
    // vec4.push_back({4,5});       {insert}
    vec4.emplace_back(4,5);      // don't need to make pair in emplace      {in-place objects create}
    for(pair<int, int> i : vec4){               // we can use "auto" keyword
        cout << i.first << " " << i.second << endl;
    }
    
    // Stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout <<"Top of Stack: " << s.top() << endl;
    // pop the top element first
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    if(s.empty()){
        cout << "Now Stack is Empty !";
    }
    stack<int> st_1;
    st_1.push(1);
    st_1.push(2);
    st_1.push(3);
    stack<int> st_2;
    st_1.swap(st_2);         // swap the stacks
    cout << "\nSize of Stack 2: " << st_1.size() << "\nSize of Stack 3: " << st_2.size() << endl;

    // Queue
    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(0);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pq;          // makes reverse priority queue
    pq.push(5);
    pq.push(10);
    pq.push(4);
    while(!pq.empty()){
        cout << pq.top() << " ";                // Returns the highest priority / largest element first
        pq.pop();                               // Pop the largest then 2nd max, then 3rd max
    }
    cout << endl;

    map<string, int> m;
    m["laptop"] = 56000;
    m["headphones"] = 1650;
    m["watch"] = 6500;
    m["iPhone"] = 75000;
    for(auto i: m){
        cout << i.first << ": " << i.second << endl;                // automatic sort in ascending order of keys.
    }

    m.insert({"camera",45000});             // need to make object in curly brackets in insert function.
    // m.emplace("camera",45000)
    cout << "Count Keys which has = laptop: " << m.count("laptop") << endl;
    m.erase("watch");                   // remove key and value from map
    if(m.find("camera") != m.end()){            // Used to find key, value pair in Map,if it is found we get iterator of it otherwise m.end()
        cout << "Camera is Found !\n";
    } else{
        cout << "Not Found !\n";
    }

    // Multi Map
    multimap<string, int> multi_m;
    multi_m.emplace("laptop",10);
    multi_m.emplace("laptop",20);
    multi_m.erase("laptop");              // Delete All keys of laptop
    multi_m.erase(m.find("laptop"));              // Delete 1 Value of laptop by using the Iterator in erase()
    
    // Unordered Map
    unordered_map<string, int> u_map;           // Don't store Duplicate Keys
    u_map.emplace("tv",100);
    u_map.emplace("laptop",200);
    cout << "Unordered Map: \n";
    for(auto u: u_map){
        cout << u.first << ": " << u.second << endl;
    }

    // Sets
    set<int> a_set;
    a_set.insert(101);
    a_set.insert(102);
    a_set.insert(101);              // Don't Repeat in Sets and in Output

    for(auto val: a_set){
        cout << val << ",";
    }
    cout << "\nSize of Set: " << a_set.size() << endl;
    cout << *(a_set.lower_bound(100)) << endl;             // Returns 101 Because 100 not found.
    cout << *(a_set.upper_bound(101)) << endl;             // Returns Value > 101. {not =}
    
    multiset<int> multi_set;
    unordered_set<int> unorder_set;                         // Random Order {Unsorted Order {concept of lower/upper bound not exists}}

    return 0;
} 