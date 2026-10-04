#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
// int main() {
//     // cout <<"Hello World!"<<endl;
//     // cout <<"Hello World!";

//     int x,y;
//     cin >> x >>y;
//     cout << "Value of x: "<<x <<"\nValue of y: "<<y;
//     return 0;
// }

// int main() {
//     //float, double
// //     float x = 5.6;
// //     cout<< "value of x: "<<x;

//     // string and getline
//     // string s1;
//     // string s2;
//     // cin >>s1 >>s2;
//     // cout << s1 <<" " <<s2;
//     // return 0;

//     // string str;
//     // getline(cin,str);
//     // cout<<str;
//     // return 0;

//     char ch = 'g';
//     cout << "The value of the char ch is: " <<ch;

// }


// data types
// int main(){
//     //Write a program that takes an input of age and prints if you are an adult or not?
//     int age;
//     cin >> age;
//     if (age >= 18){
//         cout << "Adult";
//     }
//     else
//         cout<< "Minor";
//     return 0;
// }

// //a school has following rules for grading
// below 25 - F
// 25-44 - E
// 45-49 - D
// 50-59 - C
// 60-79 - B
// 80-100 - A
// ask user to enter marks and print their corressponding grades

// int main() {
//     int marks;
//     cout << "Enter marks: ";
//     cin >> marks;
//     if (marks<25){
//         cout << "F";
//     }
//     else if(marks <=44){
//         cout << "E";
//     }
//     else if(marks <=49){
//         cout << "D";
//     }
//     else if(marks <=59){
//         cout << "C";
//     }
//     else if(marks <=79){
//         cout << "B";
//     }
//     else if(marks <=100){
//         cout << "A";
//     }
// }

/* Take the age from the user and then decide accordinly 
if age < 18, then not eligible for job
if age >= 18 then eligible for job
if age >=55 and <=57 then eligible for job but retirement soon
if age > 57 then retirement time*/

// int main() {
//     int age;
//     cout << "Enter age: ";
//     cin >> age;
//     if (age < 18)
//         cout << "Not eligible for job";
//     else if (age >=18) {
//         if (age >= 55 && age <= 57)
//             cout << "Eligible for job but retirement soon";
//         else if (age > 57)
//             cout << "retirement time";
//         else
//             cout << "Eligible for job";
//     }
//     return 0;
// }

// Take the day number and print the corresponding day 
// int main() { 
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     switch (num){
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;    
//         default:
//             cout << "Invalild Number";
//             break;
//     }
//     return 0;
// }

// Strings and arrays
// int main() {
//     // int a, b, c, d;
//     // cin >> a >> b >> c >> d;
//     // int arr[5];
//     // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     // cout << arr[3];

//     // int arr [3][5];
//     // arr [1][5] = 78;
//     // cout << arr[1][5];
//     // cout << arr[1][2];

//     string s = "Rajiv";
//     int len = s.size();
//     cout << s[len -1];
//     return 0;
// }

// For and while loops
// int main() { 
//     // for (int i = 1; i<=10; i++) { 
//     //     cout << "Rajiv" << endl;
//     // }

//     int i = 2;
//     // while (i <= 5) {
//     //     cout << "Rajiv " << i << endl;
//     //     i++;
//     // }

//     do {
//         cout << "Rajiv" << i << endl;
//         i++;
//     } while (i <=1);
//     cout << i << endl;
// }

//Functions 
// void printName(string name) {
//     cout << "Hey " << name;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }
// Take two numbers and print its sum

// int sum(int n1, int n2) { 
//     int n3 = n1 + n2;
//     return n3;
// }

// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1,num2);
//     cout << res;
//     return 0;
// }

// bool check(string s) { 
//     string rev, filtered;
//     for (char &c : s) c = tolower(c);
//     for (int i = 0; i<size(s); i++) {
//         if ((int)s[i] <=64 || (int)s[i] >=123) continue;
//         rev = s[i] + rev;
//         filtered = filtered + s[i] ;
//     }

//     if (rev == filtered) return true;
//     return false;
// }

// int main() {
//     string s = "A man, a plan, a canal: Panama";
//     cout << check(s);
// }

// bool palindrome(int i, string s) {
//         for (char &c : s) c = tolower(c);
//         if (i>=s.size()/2) return true;
//         if (!isalnum((unsigned char)s[i])) return palindrome(i+1, s);
//         if(s[i]!= s[s.size()- i -1]) return false;
//         return palindrome(i+1, s);
//     }
// int main() { 
    
    // cout << palindrome;
// }

// int isPalindrome(string s) {
    // for (char &c : s) c = tolower(c);
    // string filtered;
    // for (char &c : s) {
    //     if (isalnum(c)) filtered += c;
    // }
    // cout << filtered;
    // return 0;
    //     // return check(0, s);
    // }

// int revnum(int n) {
//     int rev = 0;
//     while (n!=0) {
//         if (rev>INT_MAX/10 || ((rev==INT_MAX/10) && (INT_MAX%10 > n%10))) return 0;
//         else if ((rev==INT_MIN/10 || (rev==INT_MIN/10) && (INT_MIN%10 > n%10))) return 0;
//         rev = rev*10 + n%10;
//         n = n/10;
//     }
//     return rev;
// }   

// int main() {
//     // string s = "A man, a plan, a canal: Panama";
//     // isPalindrome(s);

//     int x = 210;
//     cout << revnum(x);

// }

// int main() {
//     int arr[10] = {1,2,4,5,3,65,3,6,3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i = 0; i<n-2; i++) {
//         int min = i;
//         for(int j = i; j<n-1; j++) { 
//             if (arr[j]<min) {
//                 min = j;
//             }
//             swap(arr[min],arr[i]);
//         }
//     }
// }
