// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Pairs
// void explainPair() { 
//     pair <int, int > p = {1,3} ;
//     cout << p.first << " " << p.second << endl;

//     pair < int, pair <int, int>> p2 = {1,{3,4}};
//     cout << p2.first <<" " << p2.second.first << " " << p2.second.second << endl;
    
//     pair <int, int> arr[] = { {1,2},{2,5},{5,1} };
//     cout << arr[1].second << endl;
// }
// //Vectors
// void explainVector() {
//     vector <int> V;

//     V.push_back(1) ;
//     V.emplace_back(2);

//     vector<pair<int,int>> vec;
//     vec.push_back({1,2});
//     vec.emplace_back(1,2);

//     vector <int> v(5,101);

//     vector <int> v3(5);
//     v3.push_back(1);

//     vector <int> v1(5,20);
//     vector <int> v2(v1);

//     // vector<int>::iterator it = v1.begin();
//     // it++;
//     // cout << *(it) <<" ";

//     // vector<int>::iterator it = v.end();
//     // vector<int>::iterator it = v.rend();
//     // vector<int>::iterator it = v.rbegin();

//     cout << v[0] << " " << v.at(0)<< endl;
//     cout << v.back() << " " << endl;

//     for (vector<int>::iterator it = v.begin(); it!=v.end(); it++) {
//         cout << *(it) << " ";
//     }
//     cout << endl;
    
//     for (auto it = v.begin(); it!= v.end(); it++) {
//         cout << *(it) << " ";
//     }
//     cout << endl;
    
//     for (auto it : v) {
//         cout << it << " ";
//     }

//     // {10,11,12,13}
//     v.erase(v.begin() + 1); // {10,12,13}

//     //{10,20,12,23,35}
//     v.erase(v.begin() + 1, v.begin() + 3); // {10,20,35} [start, end]}\

//     //Insert function 
//     vector<int>v(2,100); // {100,100}
//     v.insert(v.begin(),300);  //{300, 100,100}
//     v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

//     vector<int> copy(2,50); // {50,50}
//     v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

//     //{10,20}
//     cout << v.size(); // 2
    
//     //{10,20}
//     v.pop_back(); //{10}

//     //v1 -> {10,20}
//     //v2 -> {30,40}
//     v1.swap(v2); // swap v1 and v2

//     v.clear(); //erase the entire vector

//     cout<<v.empty(); // to check if vector is empty or not ?
// }

// //Lists
// void ExplainList(){

//     list <int> ls;
//     ls.push_back(2); 
//     ls.emplace_back(4);

//     ls.push_front(5);
//     ls.emplace_front(40);
//     //Insert in vector is very time costly
// }
// //Deque
// void ExplainDeque() {
//     deque<int> dq;
//     dq.push_back(1);
//     dq.emplace_back(2);
//     dq.push_front(3);
//     dq.emplace_front(4);

//     dq.pop_back();
//     dq.pop_front();

//     dq.back();

//     dq.front();
//     //rest functions are same as vector - begin, end, rbegin, rend, clear, insert, size, swap

// }

// //Stack
// void ExplainStack(){
//     stack<int> st;
//     //LIFO - last in first out
//     st.push(1);  //{1}
//     st.push(2);  //{2,1}
//     st.push(3);  //{3,2,1}
//     st.push(3);  //{3,3,2,1}
//     st.emplace(5); //{5,3,3,2,1}

//     cout << st.top();  //prints 5 

//     st.pop(); // removes 5 from the stack

//     cout << st.top(); //3
//     cout << st.size(); //4
//     cout <<st.empty(); // False

//     stack<int>st1,st2;
//     st1.swap(st2);
// }

// //Queue
// void ExplainQueue() {
//     //FIFO - First in first out
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.emplace(4);  // {1,2,4}

//     q.back() += 5;  

//     cout<<q.back(); // prints 9

//     cout <<q.front();   // prints 1

//     q.pop();  // 

//     cout<<q.front();
// }

// //Priority Queue
// void ExplainPQ() {
//     //Max Heap
//     priority_queue<int>pq;
//     pq.push(5);  //{5}
//     pq.push(2);  //{2}
//     pq.push(8);  //{8,5,2}
//     pq.emplace(10); // {10,8,5,2}

//     cout<<pq.top(); //prints 10
//     pq.pop(); // removes 10

//     cout<<pq.top(); //prints 8
//     // size swap empty function same as others

//     //Minimum Heap
//     priority_queue<int, vector<int>, greater<int>> pq1;
//     pq1.push(5);
//     pq1.push(2);
//     pq1.push(8);
//     pq1.emplace(10);  //{2,5,8,10}

//     cout << pq.top(); //prints 2
// }

// //Set
// void ExplainSet() {
//     // Stores unique elements in an ordered way
//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     st.insert(4);
//     st.insert(3);   // {1,2,3,4}

//     //begin, end, rbegin, rend, size, empty and swap are same as others

//     auto it = st.find(3);

//     auto it = st.find(6); // returns set.end()

//     //{1,4,5}
//     st.erase(5);  //erases 5 and takes logarithmic time

//     int cnt = st.count(1);

//     auto it = st.find(3);
//     st.erase(it); 

//     //{1,2,3,4,5}
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1,it2);   // {1,4,5}

//     auto it = st.lower_bound(2);
//     auto it = st.upper_bound(3);
// }

// //Multiset
// void ExplainMultiSet() {
//     // only sorted and not unique

//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.emplace(1);

//     ms.erase(1); //removes all 1
//     int cnt = ms.count(1); 

//     //only a single one erased
//     ms.erase(ms.find(1));

//     ms.erase(ms.find(1),ms.find((1)+2));
// }

// //Unordered Set

// void ExplainUset(){
//     //Same as set but randomised order
//     unordered_set<int> ust;

//     //lower bound and upper bound function does not work, rest all functions are same as others
//     // it does not stores in any particular order, it has a better complexity than set in most cases, except some when collision happens
// }

//Map
void ExplainMap(){

    //stores unique keys in sorted order
    map<int, int> mpp;
    // map<int, pair<int,int>> mpp;
    // map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    // mpp[{2,3}] = 10;

    // for (auto it: mpp) {
    //     cout << it.first << " " << it.second << endl;
    // }

    cout <<mpp[1];
    cout << mpp[5];

    // auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);
}

//MultiMap
void ExplainMultiMap() {
    //same as map, it can store duplicate keys
    // only mpp[key] cannot be used here
}

//Unoredered Map
void ExplainUnorderedMap() {
    // same as set and unordered set difference
}

bool comp(pair<int, int>p1, pair<int, int>p2) { 
    if(p1.second< p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

void ExplainExtra() {
    // int arr[5] = {1,2,3,4,5};
    // int a = arr[0];
    // int n = 5;
    // sort(a, a+n);
    // sort(arr.begin(), arr.end());
    
    // sort (a+2, a+4);

    // sort(a, a+n, greater<int>);

    pair<int, int>a[] = {{1,2}, {2,1}, {4,1}};

    //sort it according to second element
    //if second element is same, then sort according to first element in descending order

    // sort(a, a+n, comp);
    //{{4,1}, {2,1}, {1,2}}

    int num = 7;
    int cnt = __builtin_popcount(num) ;

    long long num1 = 8439021489043254;
    int cnt1 = __builtin_popcountll(num1);

    string s = "123";
    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));

    




}



int main() { 
    // explainPair();
    // explainVector();
    // ExplainDeque();
    // ExplainList();
    // ExplainQueue();
    // ExplainStack();
    // ExplainQueue();
    // ExplainMap();

    ExplainExtra();
    return 0;
}