#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void print() {
    if (cnt == 4) return;
    cout << cnt << endl;
    cnt++;
    print();
}
void name(int i, int n) {
    if (i>n) return;
    cout << "Rajiv" <<" ";
    name(i+1, n);
}
void num(int i, int n) {
    if (i>n) return;
    cout << i <<" ";
    num(i+1, n);
}
void revnum(int i, int n) {
    if (i>n) return;
    cout << n <<" ";
    revnum(i, n-1);
}
void num_backtrack(int i, int n) {
    if (i<1) return ;
    num_backtrack(i-1, n);
    cout << i << " ";
}
void revnum_backtrack(int i, int n) {
    if (i>n) return;
    revnum(i+1, n);
    cout << i <<" ";
} 

int sum = 0 ;
void summation(int i, int sum) {
    if (i<1){
        cout << sum;
        return;
    }
    summation(i-1, sum+i);
}

int factorial(int n) {
    if (n==1) return 1;
    return n*factorial(n-1);
}

void rev_arr(int arr[], int n, int i) {
    if (i>=n/2) return ;
    swap(arr[i], arr[n-i-1]);
    rev_arr(arr,n, i+1);
}

bool palindrome(int i, string s){ 
    if (i>=s.size()/2)      return true;
    if (s[i]!= s[s.size()-i-1])    return false;
    return palindrome(i+1, s);
}

int fibonacci(int n){
    if (n<=1) return n;
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main() { 
    // print();
    int n;
    cin >> n;

    name(1,n);
    cout << endl;

    num(1,n);
    cout << endl;

    revnum(1,n);
    cout << endl;

    num_backtrack(n,n);
    cout << endl;

    revnum_backtrack(1,n);
    cout << endl;

    summation(n,0);
    cout << endl;

    cout << factorial(n);
    cout << endl;

    int arr[] = {1,2,3,4,5};
    rev_arr(arr, 5, 0);
    for(int i = 0; i<5; i++) cout << arr[i] << " ";
    cout << endl;

    string s = "madam";
    cout << palindrome(0, s);
    cout << endl;

    cout << fibonacci(n);
    cout << endl;
    return 0;
}
