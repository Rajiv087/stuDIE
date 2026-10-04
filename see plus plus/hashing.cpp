#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     // precomputation
//     int hash[10] = {0};
//     for (int i = 0; i<n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetch 
//         cout << hash[number] << endl;

//     }
//     return 0;
// }

// character hashing 

// int main() {
//     string s;
//     cin >> s;

//     // precompute
//     int hash[256] = {0};
//     for (int i = 0; i<s.size(); i++) {
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         //fetch 
//         cout << hash[c] << endl;
//     }
// }

// Map hashing
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i] ;
//     }
    
//     // precompute
//     map<int,int> mpp;
//     for (int i = 0; i<n; i++) {
//         mpp[arr[i]]++ ;
//     }

//     for (auto it:mpp) {
//         cout << it.first << "-->" << it.second << endl;
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         int number; 
//         cin >> number;
//         // fetch
//         cout << mpp[number] << endl;
//     }
// }

// Highest and Lowest frequency element
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     // precompute
//     int hash[10] = {0};
//     for (int i = 0; i<n; i++) {
//         hash[arr[i]]++ ;
//     }
//     int max = 0;
//     int min = 1;
//     for (int i = 0; i<10; i++) {
//         if (hash[i] > hash[max]) max = i;
//     }

//     for (int j = 0; j<10; j++) {
//         if (hash[j] == 0) continue ;
//         if (hash[j] < hash[min] ) min = j;
//     }

//     cout << "Max Element: " << max << endl << "Min Element: " << min;

//     // int max = *max_element(hash, hash + 10);
//     // int min = *min_element(hash, hash + 10);

//     // cout << endl;
//     // cout << max << " " << min;
//     // int q;
//     // cin >> q;
//     // while (q--) {
//     //     int number ;
//     //     cin >> number;
//     // }
// }


// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     unordered_map<int, int> hash;
//     for (int i = 0; i<n; i++) {
//         hash[arr[i]]++;
//     }

//     auto it = hash.begin();
//     int Max_element = it->first, Min_element = it->first;
//     int Max_freq = it->second , Min_freq = it->second;

//     for (auto& p:hash) { 
        
//         if (p.second > Max_freq) {
//             Max_freq = p.second;
//             Max_element = p.first;
//         }

//         if (p.second < Min_freq) {
//             Min_freq = p.second;
//             Min_element = p.first;
//         }
//     }

//     cout << "Max Frequency Element: " << Max_element << endl;
//     cout << "Min Frequency Element: " << Min_element << endl;
// }



// practice

// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }
//     int hash[100] = {0};
//     for(int i = 0; i<n; i++) {
//         hash[arr[i]]++;
//     }

//     for (int i = 0; i<n; i++) {
//         if (hash[i] > 0)
//             cout << i << "->" << hash[i] << endl;
//     }
// }


// int main() { 
//     string s;
//     cin >> s;

//     int hash[256] = {0};
//     for (int i = 0; i<s.size(); i++) {
//         hash[s[i]]++;
//     }

//     for (int i = 0; i<256; i++) {
//         if (hash[i]>0) cout << (char)i<< "->" << hash[i] << endl;
//     }
// }


// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     map<int,int>mpp;
//     for (int i = 0; i<n; i++) {
//         mpp[arr[i]]++;
//     }

//     for (auto it:mpp) {
//         cout << it.first << "\t" << it.second << endl;
//     }
// }

// int main() { 
//     string s;
//     cin >> s;

//     map<char,int>mpp;
//     for (int i = 0; i<s.size(); i++) {
//         mpp[s[i]]++;
//     }

//     for (auto it:mpp) {
//         cout << it.first << "\t" << it.second << endl;
//     }
// }

// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     unordered_map<int,int>mpp;
//     for (int i = 0; i<n; i++) {
//         mpp[arr[i]]++;
//     }

//     auto it = mpp.begin();
//     int max_element = it->first , max_freq = it->second;
//     int min_element = it->first , min_freq = it->second;
//     for (auto &p:mpp) {
        
//         if (p.second > max_freq) {
//             max_element = p.first;
//             max_freq = p.second;
//         }

//         if (p.second < min_freq){
//             min_freq = p.second;
//             min_element = p.first;
//         }
//     }

//     cout << "Max Freq: " << max_freq << "\tMax Element: " << max_element << endl; 
//     cout << "Min Freq: " << min_freq << "\tMin Element: " << min_element; 
// }