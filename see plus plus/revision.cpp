#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int n = 36 ;
//     for (int i = 1; i*i<=n; i++) {
//         if(n%i == 0) {
//             if(i == n/i) {
//                 cout << i << "\t";
//             }
//             else {
//                 cout << i << "\t" << n/i << "\t" ;
//             }
//         }
//     }
// }

// int main() {
//     int n = 100;
//     vector <int> ls; 
//     for (int i = 1; i*i<=n; i++){
//         if(n%i == 0) {
//             ls.push_back(i);
//             if (n/i != i) ls.push_back(n/i);
//         }
//     }
//     sort(ls.begin(), ls.end());
//     for (auto it:ls ) cout << it << "\t"; 
// }

// int main() {
//     int count = 0;
//     int n = 23;
//     for (int i = 2; i*i <=n; i++) {
//         if (n%i == 0) {
//             count = 1;
//             break;
//         }
//     }
//     if (count == 1) cout << "Not Prime";
//     else {
//         cout << "prime";
//     }
// }

// int main() {
//     int a = 5; 
//     int b = 10;
//     int gcd = 1;
//     for (int i = 1; i<=min(a,b); i++) {
//         if (a%i == 0 && b%i == 0) gcd = i;
//     }
//     cout << gcd;
// }

// int main() {
//     int a = 5, b = 10;
//     while (a>0 && b>0) {
//         if (a>b) a = a%b;
//         else b = b%a;
//     }
//     if (a == 0) cout << b;
//     cout << a;
// }

// recursion 
// int sum(int n) {
//     if (n==0) return 0;
//     else {
//         return n + sum(n-1);
//     }
// }
// void rev_arr(int l, int r, int arr[]) {
//     if (l>=r) return;
//     swap(arr[l],arr[r]);
//     rev_arr(l+1, r-1, arr);
// }

// //to check if a string is palindrome or not 
// bool ispalindrome(string s, int i, int n) {
//     if (i >= n/2) return true;
//     if(s[i]!= s[n-i-1]) return false;
//     return ispalindrome(s,i+1, n);
// }
// int fib(int n) {
//     if (n<=1) return n;
//     return (fib(n-1) + fib(n-2));
// }

// int main() {

//     int arr[] = {1,2,3,4,5};
//     rev_arr(0, sizeof(arr)/sizeof(arr[0]) - 1, arr);

//     for (int i = 0; i< sizeof(arr)/sizeof(arr[0]) ; i++) {
//         cout << arr[i] << "\t";
//     }
//     cout << endl;

//     string s = "madam";
//     cout << boolalpha << ispalindrome(s, 0, s.size()) << endl;

//     int n = 10;
//     cout << fib(n);

// }
// int f(int n, int arr[]) {
//     int count = 0;
//     for (int i = 0; i<10; i++) {
//         if (n == arr[i]) {
//             count++;
//         }
//     }
//     return count;
// }

// int hsh(int arr[]) {
//     int hsh_arr[10] = {0};
//     for (int i = 0; i<10; i++) {
//         hsh_arr[arr[i]]++;
//     }
//     for (int i = 0; i<10; i++) {
//         cout << hsh_arr[i] << "\t";
//     }
// }

// int main() {
//     int arr[] = {1,2,2,1,3,4,4,1,5,1};
//     // cout << f(1, arr);
//     hsh(arr);
// }

// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     int hash[10] = {0};
//     for (int i = 0; i<n; i++) {
//         hash[arr[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         cout << hash[number] << endl;
//     }
//     cout << endl;
// }

// int main() {
//     string s = "mississippi";

//     int hash[256] = {0};
//     for (int i = 0; i<s.size(); i++) {
//         hash[s[i]]++;
//     }
    
//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         cout << hash[c] << endl;
//     }
//     return 0;

// }

// number hashing using hash map 
// int main() { 
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     unordered_map<int,int> hash;
//     for (int i = 0; i<sizeof(arr)/ sizeof(arr[0]); i++) {
//         hash[arr[i]]++;
//     }

//     for (auto it:hash) {
//         cout << it.first << "\t" << it.second << endl;
//     }
// }

//character hashing using hash map 
// int main() { 
//     string s ;
//     cin >> s;

//     unordered_map<char,int> mpp;
//     for (int i = 0; i<s.size(); i++) {
//         mpp[s[i]]++;
//     }

//     for (auto it:mpp) {
//         cout << it.first << "->" << it.second <<endl;
//     }
//     return 0;
// } 

// int main(){ 
//     int arr[10] = {2,5,1,2,9,8,2,8,8,1};
//     unordered_map<int,int>mpp;
//     for (int i = 0; i<10; i++) {
//         mpp[arr[i]]++;
//     }
//     auto it = mpp.begin();
//     int Max_element = it->first, Min_element = it->first; 
//     int Max_freq = it->second, Min_freq = it->second;

//     for (auto it:mpp) {
//         if (it.first > Max_element) {
//             Max_element = it.first;
//             Max_freq = it.second;
//         }
//         if (it.first < Min_element) {
//             Min_element = it.first;
//             Min_freq = it.second;
//         }
//     }
//     cout << "Max element: " << "->" << Max_element << endl; 

//     cout << "Max Frequency: " << "->" << Max_freq << endl; 

//     cout << "Min element: " << "->" << Min_element << endl; 

//     cout << "Min Frequency: " << "->" << Min_freq << endl; 
// }

// Hashing 

// int f(int num, int arr[]) {
//     int count = 0;
//     for (int i = 0; i<5; i++) {
//         if (arr[i] == num) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int arr[5] = {1,2,2,2,4};
//     cout << "Count: " << f(4, arr);
// }

// int main() {
//     string s;
//     cin >> s;

//     map <char, int> mpp;
//     for (int i = 0; i<s.size(); i++) {
//         mpp[s[i]]++;
//     }

//     for (auto it: mpp) {
//         cout << it.first << " -> " << it.second << endl;
//     }
//     return 0;
// }
// Hashing
// int main () {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }

//     unordered_map <int, int> mpp;
//     for (int i = 0; i<n; i++) {
//         mpp[arr[i]]++;
//     }
//     auto it = mpp.begin();
//     int Max_element = it->first;
//     int Min_element = it->first;
//     int Max_freq = it->second;
//     int Min_freq = it->second;

//     for (auto p: mpp) {
//         if (p.second > Max_freq) {
//             Max_freq = p.second;
//             Max_element = p.first;
//         }

//         if (p.second < Min_freq) {
//             Min_freq = p.second;
//             Min_element = p.first;
//         }
//     }

//     cout << "Max Frequency element: " << Max_element << endl << "Frequency: " << Max_freq << endl;

//     cout << "Min Frequency element: " << Min_element << endl << "Frequency: " << Min_freq;
// }

// Sorting 
void selection_sort(int n, int arr[]) {
    for (int i = 0; i<n-1; i++) {
        int min = i;
        for (int j = i; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

// void bubble_sort(int n, int arr[]) {
//     for (int i = n-1; i>0; i--) {
//         for (int j = 0; j<i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// void insertion_sort(int n, int arr[]) {
//     for (int i = 0; i<n; i++) {
//         int j = i;
//         while (j>0 && arr[j-1] > arr[j]) {
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
// }

// int main() {
//     int arr[7] = {14,9,15,12,6,8,13};
//     int n = 7;
//     // selection_sort(n,arr);
//     // bubble_sort(n,arr);
//     // insertion_sort(n,arr);

//     for (int i = 0; i<n; i++) {
//         cout << arr[i] << "\t";
//     }
// }

// Merge Sort
// void merge(vector <int> &arr, int low, int mid, int high) {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while(right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }
    
//     for (int i = low; i<=high; i++) {
//         arr[i] = temp[i-low];
//     }
// }

// void merge_sort(vector <int> &arr, int low, int high){
//     if (low >= high) return;
//     int mid = (low + high)/2;
//     merge_sort(arr, low, mid);
//     merge_sort(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     merge_sort(arr, 0, n-1);

//     for (int i = 0; i<n; i++) {
//         cout << arr[i] << "\t";
//     }
// }

//Quick Sort

// int partition(vector <int> &arr, int low, int high) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i<j) {
//         while (arr[i] <= pivot && i < high) i++;
//         while (arr[j] > pivot && j > low) j--;

//         if (i<j) swap(arr[i],arr[j]);
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }

// void quick_sort(vector <int>&arr, int low, int high) {
//     if (low < high) {
//         int PI = partition(arr, low, high);
//         quick_sort(arr, low, PI-1);
//         quick_sort(arr, PI + 1, high);
//     }
// }

// int main () {
//     int n;
//     cin >> n;
//     vector <int> arr(n);
//     for (int i = 0; i<n; i++) {
//         cin >> arr[i];
//     }
//     quick_sort(arr, 0, n-1);

//     for (int i = 0; i<n; i++) {
//         cout << arr[i] << "\t";
//     }
// }

// void merge(vector <int> &arr, int low, int mid, int high){
//     vector<int>temp;
//     int left = low;
//     int right = mid + 1;

//     while(left <= mid && right <= high) {
//         if (arr[left] < arr[right]) {
//             temp.push_back(arr[left]);
//             left ++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while (left <= mid ) {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = low; i < high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void merge_sort(vector <int> &arr, int low, int high) {
//     if (low>=high) return;
//     int mid = (low + high)/2;
//     merge_sort(arr, low, mid);
//     merge_sort(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     merge_sort(arr, 0, n-1);

//     for (int i = 0; i<n; i++) {
//         cout << arr[i] << "\t";
//     }
// }

//arrays


// bool check_sort(int n, int arr[]) {
//     for (int i = 1; i<n; i++) {
//         if (arr[i] >= arr[i-1]) continue;
//         else return false;
//     }
//     return true;
// }

// int main() {
//     int arr[7] = {4,2,3,4,1,7,5};
//     int n = 7;
//     cout << boolalpha << check_sort(n, arr);    
// }

//second largest element 
// int main() {
//     int n = 7;
//     int arr[n] = {4,5,8,2,6,7,11};
//     int secondlargest;
//     selection_sort(n, arr);
//     int largest = arr[n-1];
//     for (int i = n-2; i>0; i--) {
//         if (arr[i]!= largest) {
//             secondlargest = arr[i];
//             break;
//         }
//     }
//     cout << secondlargest;
// }

// int main() {
//     int n = 7;
//     int arr[n] = {4,5,8,2,6,7,11};
//     int largest = arr[0];
//     int secondlargest = -1;
//     for (int i = 0; i<n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     for (int i = 0; i<n; i++) {
//         if (arr[i] > secondlargest && arr[i]!= largest) {
//             secondlargest = arr[i];
//         }
//     }
//     cout << secondlargest;
// }

// int main() {
//     int n = 7;
//     int arr[n] = {4,5,8,2,6,7,11};
//     int largest = arr[0];
//     int secondlargest = -1;
//     for (int i = 0; i<n; i++) {
//         if (arr[i] > largest) {
//             secondlargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] < largest && arr[i] > secondlargest) {
//             secondlargest = arr[i];
//         }
//     }
//     cout << secondlargest;
// }

// removing duplicates 

// int main() {
//     int n = 7;
//     int arr[n] = {1,1,2,2,3,3,2};
//     set <int> st;
//     for (int i = 0; i<n; i++) {
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for (auto it:st) {
//         arr[index] = it;
//         index++;
//     }

// }

// int main() {
//     int n = 7;
//     int arr[n] = {1,1,2,2,3,3,2};
//     int i = 0;
//     for (int j = 1; j<n; j++) {
//         if (arr[j] != arr[i]) {
//             arr[i + 1] = arr[j];
//             i++;
//         }
//     }
//     cout << i ;
// }

// int main() {
//     int n1 = 6;
//     int n2 = 6;
//     int a[n1] = {1,1,2,3,4,5};
//     int b[n2] = {2,3,4,4,5,6};
//     int i = 0;
//     int j = 0;
//     vector<int> union;

//     while (i<n1 && j<n2) {
//         if (a[i] <= b[j]) {
//             if (union.size() == 0 || union.back()!= a[i]){
//                 union.push_back(a[i]);
//             }
//             i++;
//         }
//         else {
//             if (union.size() == 0 || union.back()!= b[j]){
//                 union.push_back(b[j]);
//             }
//             j++;
//         }
//     }
//     while(j<n2) {
//         if (union.size() == 0 || union.back()!= b[j]){
//             union.push_back(b[j]);
//         }
//         j++;
//     }
//     while(i<n1) {
//         if (union.size() == 0 || union.back()!= a[i]){
//             union.push_back(a[i]);
//         }
//         i++;
//     }

//     for (int i = 0; i<union.size(); i++) {
//         cout << union[i] << "\t";
//     }
// }


//---------------------------------------------------------------------------------------------------------//

//sort an array of 0s, 1s and 2s (DUTCH NATIONAL FLAG ALGORITHM)
// void sortArray(vector<int> nums) {
//     int low = 0;
//     int mid = 0;
//     int high = n-1;

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[mid],arr[low]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1){
//             mid++;
//         }
//         else{
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//     }
// }


//find the element that occurs more than n/2 times (MOORE'S VOTING ALGORITHM)
// int majorityElement(vector<int>nums) {
//     int count = 0;
//     for (int i = 0; i<nums.size(); i++) {
//         if (count == 0) {
//             count =1;
//             element = nums[i];
//         }
//         else if (nums[i] == element) {
//             count ++;
//         }
//         else {
//             count --;
//         }
//     }
//     int cnt1= 0;
//     for (int i = 0; i<nums.size(); i++) {
//         if (nums[i] == element) cnt1++;
//     }
//     if (cnt1 > nums.size()/2) {
//         return element;
//     }
//     return -1;
// }

// //maximum subarray sum (KADANE'S ALGORITHM) 
// int maxSubarraySum(vector<int> nums) {
//     int maxi = INT_MIN;
//     int sum = 0;
//     for (int i = 0; i<nums.size(); i++) {
//         sum += arr[i];

//         if (sum > maxi) maxi = sum;
//         if (sum < 0) sum = 0;

//     }
//     if (maxi < 0) maxi = 0;
//     return maxi;
// }


// int majorityElement(vector<int>&nums) {
//     int element = nums[0];
//     int count = 0;
//     for (int i = 0; i<nums.size(); i++) {
//         if (count == 0) {
//             count = 1;
//             element = nums[i];
//         }
//         else if (nums[i] == element) {
//             count++;
//         }
//         else {
//             count-- ;
//         }
//     }
//     int cnt = 0;
//     for (int i = 0; i<nums.size(); i++) {
//         if (nums[i] == element) {
//             cnt++;
//         }
//     }
//     if (cnt > nums.size()/2) {
//         return element;
//     }
//     return -1;
// }

// int MaxSubarray(vector<int>&nums) {
//     int sum = 0;
//     int maxi = INT_MIN;
//     for (int i = 0; i<nums.size(); i++) {
//         sum += nums[i];
//         if (sum > maxi) maxi = sum;
//         if (sum < 0) sum = 0;
//     }
//     return maxi;
// }

// int countPrimes(int n) {
//         int count = 0;
//         int divisors = 0;
//         int num = 2;
//         for (int i = 1; i<n; i++) {
//             if (num%i == 0) divisors++;

//         }
// }

// int nextPermutation(vector<int>&nums) {
//     int index = -1;
//     for (int i = n-1; i>0; i++) {
//         if (nums[i-1] > nums[i]){
//             index = i;
//             break;
//         }
//     }
//         for (int i = n-1; i>=index; i++) {
//             if (nums[i] > nums[index]){
//                 swap(nums[i], nums[index]);
//                 break;
//             }
//     }
//     reverse(nums.begin() + index + 1, nums.end());
// }

void nextPermutation(vector<int>&nums) {
        int index = -1;
        for (int i = nums.size()-2; i>=0; i--) {
            if (nums[i+1] > nums[i]){
                index = i;
                break;
            }
        }
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = nums.size() - 1; i>=0; i--) {
            if (nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        // reverse(nums.begin() + index + 1 , nums.end()-1);
        cout << nums[nums.begin() + index + 1] << "\t" << nums[nums.end() - 1];
    }

int main() {
    // vector<int> nums = {3,2,3};
    // cout << majorityElement(nums);

    // vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    // cout << MaxSubarray(nums);

    vector<int> nums = {1,3,2};
    cout << nextPermutation(nums);

}