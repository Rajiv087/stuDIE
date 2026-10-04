#include<bits/stdc++.h>

using namespace std;

void ExtractDigits(int n) {
    int count = (int) log10(n) + 1;
    // while (n>0) {
    //     int digit = n%10;
    //     cout << digit;
    //     n = n/10;
    //     // count ++ ;
    // }
    cout << endl<< "Number of digits = "<< count;
}
void ReverseNum (int n) { 
    int rev_num = 0;
    while (n>0) {
        int last_digit = n%10;
        n = n/10;
        rev_num = rev_num*10 + last_digit;
    }
    cout<<"Reversed Number = "<<rev_num;
}
void Palindrome(int n) { 
    int rev_num = 0;
    int temp = n;
    while (n>0) {
        int last_digit = n%10;
        n = n/10;
        rev_num = rev_num*10 + last_digit;
    }
    cout << endl;
    if (temp == rev_num) cout <<"Palindrome";
    else cout<< "Not Palindrome" ;
}
void Armstrong(int n) {
    int arm_num = 0;
    int dup = n;
    while (n>0) {
        int last_digit = n%10;
        n = n/10;
        arm_num = arm_num + last_digit*last_digit*last_digit;
    }
    cout <<endl;
    if (dup == arm_num) cout<< "Armstrong";
    else cout << "Not Armstrong";
    cout << endl;
}
void Divisors(int n) { 
    vector<int> ls;
    for(int i = 1; i*i<=n; i++) {
    if (n%i == 0) {
        ls.push_back(i);
        if (n/i != i) ls.push_back(n/i);
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout <<it<<" ";
    cout << endl;
}
void Prime(int n) {
    int counter = 0 ;
    for (int i = 1; i*i<=n; i++) {
        if (n%i == 0) {
            counter++;
            if (n/i!=i) counter++;
        }
    }
    if (counter == 2) cout <<"Prime";
    else cout << "Not Prime";
}
void GCD(int n1, int n2) {
    int gcd = 1;
    for (int i = 2; i<=min(n1,n2); i++){
        if (n1%i == 0 && n2%i ==0) gcd = i;
    } 
    cout << gcd;
    
}
int GCD_Euclidean(int a, int b) {
    while (a>0 && b>0) {
        if (a>b) a = a%b;
        else b = b%a;
    }
    cout << endl;
    if (a==0) return b;
    return a;
}

int main() {
    int n;
    cin >> n;
    // ExtractDigits(n);
    // ReverseNum(n);
    // Palindrome(n);
    // Armstrong(n);
    Divisors(n);
    // Prime(n);
    // cout << "Enter numbers for GCD: ";
    // int n1, n2;
    // cin >> n1 >> n2;
    // GCD(n1,n2);
    // cout << GCD_Euclidean(n1,n2);
    return 0;
}