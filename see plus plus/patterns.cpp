#include<iostream>
using namespace std;

// 1
// int main() {
//     for (int i = 1; i<=4; i++) {
//         for (int j = 1; j<=4; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//2
// int main() {
//     for (int i = 0; i<4; i++) {
//         for (int j = 0; j<=i; j++) {
//                 cout <<" *";
//         }
//         cout <<endl;
//     }
// }

//3 
// int main() {
//     for (int i = 1; i<=5; i++) {
//         for (int j = 1; j<=i; j++) {
//                 cout <<" " << j;
//         }
//         cout <<endl;
//     }
// }

//4
// int main() {
//     for (int i = 1; i<=5; i++) {
//         for (int j = 1; j<=i; j++) {
//                 cout <<" " << i;
//         }
//         cout <<endl;
//     }
// }

//5 
// int main() {
//     for (int i = 1; i<=5; i++) {
//         for (int j = 5; j>=i; j--) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//6
// int main() {
//     int n = 5;
//     for (int i = 1; i<=n; i++) {
//         for (int j = 1; j<=(n-i+1); j++) {
//             cout << " " << j;
//         }
//         cout << endl;
//     }
// }

//7 
// int main() { 
//     int n;
//     cin >> n;
//     for (int i = 0; i<5; i++){
//         for (int j = 0; j<(n-i-1); j++) {
//             cout << " ";
//         }
//         for (int k = 0; k< (2*i)+1; k++) { 
//                 cout << "*";
//             }
//         cout << endl;
//     }
// }

//8
// int main() {
//     int n;
//     cin >>n;
//     for (int i = n; i>0; i--) {
//         for (int j = 0; j<n-i; j++) { 
//             cout << " ";
//         }
//         for (int j = (2*i)-1; j>0; j--) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


//9 
// int main() { 
//     int n;
//     cin >> n;
//     for (int i = 0; i<5; i++){
//         for (int j = 0; j<(n-i-1); j++) {
//             cout << " ";
//         }
//         for (int k = 0; k< (2*i)+1; k++) { 
//                 cout << "*";
//             }
//         cout << endl;
//     }
//         for (int i = n; i>0; i--) {
//         for (int j = 0; j<n-i; j++) { 
//             cout << " ";
//         }
//         for (int j = (2*i)-1; j>0; j--) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//10
// int main() {
//     int n;
//     cin >>n;
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j<=i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n-1; i>0; i--) {
//         for (int j = i; j>0; j--) {
//             cout<< "*";
//         }
//         cout << endl;
//     }
// }

//11
// int main() {
//     int n;
//     cin >> n;
//     int start = 1;
//     for (int i = 0; i<n; i++) {
//         if (i % 2 == 0) start = 1;
//         else start = 0;
//         for (int j = 0; j<=i; j++) {
//             cout << start;
//             start = 1 - start ;

//         }
//             cout << endl;
//     }
// }

//12
// int main() { 
//     int n;
//     cin >> n;
//     for (int i = 1; i<=n; i++) {
//         for (int j = 1; j<=i; j++) {
//             cout << j;
//         }
//         for (int j = 1; j<=2*(n-i); j++) {
//             cout << " ";
//         }
//         for (int j = i; j>0; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

//13
// int main() {
//     int n;
//     cin >> n;
//     int start = 1;
//     for (int i = 0; i<n; i++){
//         for (int j = 0; j<=i; j++) {
//             cout << start << " " ; 
//             start ++ ;
//         }
//         cout << endl;
//     }
// }

//14 
// int main() {
//     int n;
//     cin >> n;
//     int start = 1;
//     for (int i = 0; i<n; i++){
//         for (char ch = 'A'; ch<= 'A' + i; ch++) {
//             cout << ch << " " ; 
//         }
//         cout << endl;
//     }
// }

//15 
// int main() {
//     int n;
//     cin >> n;
//     int start = 1;
//     for (int i = n; i>0; i--){
//         for (char ch = 'A'; ch<'A' + i; ch++) {
//             cout << ch << " " ; 
//         }
//         cout << endl;
//     }
// }

// 16 
// int main() {
//     int n;
//     cin >> n;
//     char start = 'A';
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j<=i; j++) {
//             cout << start << " ";
//         }
//         cout << endl;
//         start ++ ;
//     }
// }

//17
// int main() {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j<=n-i; j++) { 
//             cout << " ";
//         }
//         for (char ch = 'A'; ch<= 'A' + i; ch++) {
//             cout << ch;
//         }
//         for (char ch = 'A' + i - 1; ch>='A'; ch--) {
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

//18
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i<n; i++) {
//         for (char ch = 'E' - i; ch<='E'; ch++) {
//             cout <<ch << " ";
//         }
//         cout << endl;
//     }
// }

// Claude
// int main() { 
//     int n;
//     cin >>n;
//     for (int i = 1; i<=n; i++) { 
//         for (char ch = 'A' + n - i ; ch <= 'A' + n - 1; ch++){
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

//19
// int main() { 
//     int n;
//     cin >>n;
//     for (int i = 0; i<n; i++) {
//         for (int j = 0;j<n-i; j++) { 
//             cout << "*";
//         }
//         for (int j = 0; j<2*i; j++) {
//             cout << " ";
//         }
//         for (int j = n-i;j>0; j--) { 
//             cout << "*";
//         }
//         cout <<endl;
//     }
//         for (int i = 1; i<=n; i++) { 
//             for (int j = 1; j<=i; j++) {
//                 cout <<"*";
//             }
//             for (int j = 1; j<=2*(n-i); j++) {
//                 cout << " ";
//             }
//             for (int j = 1; j<=i; j++) {
//                 cout <<"*";
//             }
//             cout << endl;
//         }
// }

//20
// int main() { 
//     int n;
//     cin >> n;
//     int iniS = 6;
//     for ( int i = 0; i<n; i++) {
//         for (int j = 0; j<=i; j++) {
//             cout << "*" ;
//         }
//         for (int j = 0; j<iniS; j++) {
//             cout << " ";
//         }
//         for (int j = 0; j<=i; j++) { 
//             cout << "*";
//         }
//         cout << endl;
//         iniS = iniS - 2;
//     }
//     int iniS2 = 2;
//     for (int i = n-1; i>0; i--) {
//         for (int j = 0; j<i; j++) {
//             cout << "*" ;
//         }
//         for (int j = 0; j<iniS2; j++) { 
//             cout << " ";
//         }
//         for (int j = 0; j<i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//         iniS2 = iniS2 + 2;
    
//     }
// }
        
//21 
// int main () { 
//     int n;
//     cin >> n;
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j<n; j++) {
//             if( i ==0 || j==0 || i == n-1 || j == n-1) {
//                 cout << "*" ;
//             }
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }

//22
int main() { 
    int n;
    cin >> n;
    for (int i = 1; i<= 2*n - 1; i++) { 
        for (int j = 1; j<= 2*n - 1; j++) {
            if ( i == 1 || i == 2*n-1 || j == 1 || j == 2*n-1) { 
                cout << n;
            }
            else cout << " ";

        }
        cout << endl;
    }
}