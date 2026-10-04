#include<bits/stdc++.h>
using namespace std;

//Display array
void display(int n, int arr[]) {
    for (int i = 0; i<n; i++) {
        cout << arr[i] << "\t";
    }
}

//reverse array
void reverseArray(int n, int arr[]) {
    int start = 0;
    int end = n-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}

//Left rotate array by one place
void leftRotate(int n, int arr[]) {
    int temp = arr[0];
    for (int i = 1; i<n; i++ ) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

    //left rotate by d places
// Brute
void leftRotateD_brute(int n, int d, int arr[]){
    //make a temp array and store the elements that will come at the back
    d = d%n;
    int temp[d];
    for (int i = 0; i<d; i++) {
        temp[i] = arr[i];
    }

    // shift elements forward by d places
    for (int i = d; i<n; i++) {
        arr[i-d] = arr[i];
    }

    // shift elements from temp to array
    int j = 0;
    for (int i = n-d; i<n; i++) {
        arr[i] = temp[j];
        j++;
    }
}// TC = O(d) + O(n-d) + O(d) -> TC = O(n+d); SC = O(d);


//Optimal 
void leftRotateD_optimal(int n, int d, int arr[]) {
    reverse(arr,arr + d );
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}//TC = O(d) + O(n-d) + O(n) -> TC = O(2d); SC = O(1);

    // Move zeros to the end
// 1. Brute
void moveZeros_brute(int n, int arr[]) {
    vector<int> temp;
    for (int i = 0; i<n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i<n; i++) {
        arr[i] = temp[i];
    }
    for (int i = temp.size(); i<n; i++) {
        arr[i] = 0;
    }

}//TC = O(n) + O(x) + O(n-x) -> TC = O(2n), SC = O(x);

//2. Optimal
void moveZeros_optimal(int n, int arr[]) {
    int j = -1;
    for (int i = 0; i<n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    for (int i = j+1; i<n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}// TC = O(x) + O(n-x) -> O(n), SC = O(1);

// Union of two arrays 
void add(int n1, vector<int>a, int n2, vector<int>b){ 
    int i = 0;
    int j = 0;
    vector<int> Combine;
    while (i<n1 && j<n2) {
        if (a[i] <= b[j]) {
            if(Combine.size() == 0 || Combine.back() != a[i]){
                Combine.push_back(a[i]);
            }
                i++;
        }
        else {
            if (Combine.size() == 0 || Combine.back() != b[j]) {
            Combine.push_back(b[j]);
        }
        j++;
    }
    }
    while(i<n1) {
        if(Combine.size() == 0 || Combine.back() != a[i]){
                Combine.push_back(a[i]);
            }
                i++;
    }
    while(j<n2) {
        if (Combine.size() == 0 || Combine.back() != b[j]) {
            Combine.push_back(b[j]);
        }
        j++;
    }
    for (int i = 0; i<Combine.size(); i++) {
        cout << Combine[i] << "\t";
    }

}   

//Intersection of two arrays
void common(int n1, vector<int>a, int n2, vector<int>b) {
    int i = 0; 
    int j = 0;
    vector<int>result;
    while(i<n1 && j<n2) {
        if (a[i] < b[j]) i++;
        else if (b[j] < a[i]) j++;
        else {
            result.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i<result.size(); i++) {
        cout << result[i] << "\t";
    }

}

//maximum consecutive ones
int maxOnes(vector<int>nums) {
    int maxi = 0;
    int count = 0;
    for (int i = 0; i<nums.size(); i++) {
        if (nums[i] == 1){
            count++;
            maxi = max(count, maxi);
        } 
        else {
            count = 0;
        }
    }
    return maxi;
}

int longestSubarray(vector<int> a, long long k) {
    int maxLen = 0;
    map<long long, int> preSumMap;
    long long sum = 0;
    for (int i = 0; i<a.size(); i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) !=preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) ==preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int longestSubarrayOptimal(vector<int>a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while (right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right<n) {
            (sum += a[right]);
        }
    }
    return maxLen;
}

//Two sum better
string TwoSum(vector<int>book, int target, int n) {
    map<int,int> mpp;
    for (int i = 0; i<n; i++) {
        int a = book[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) { 
            return "YES"; // return (mpp[more], i)
        }
        mpp[a] = i;
    }
    return "NO";
}

// TwoSum Optimal
string TwosumOptimal(vector<int>book, int target, int n) {
    int left = 0 ;
    int right = n-1;
    sort(book.begin(), book.end());
    while (left < right) {
        int sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main() {
    // int n = 5;
    // int arr[n] = {1,2,3,4,5};
    // leftRotate(n, arr);
    // display(n, arr);

    // int d = 3;
    // int n = 7;
    // int arr[7] = {1,2,3,4,5,6,7};
    // leftRotateD_brute(n, d, arr);
    // display(n, arr);
    // cout << endl;

    // leftRotateD_optimal(n, d, arr);
    // display(n, arr);

    // int n = 10;
    // int arr[10] = {1,0,2,3,2,0,0,4,5,1};
    // moveZeros_brute(n, arr);
    
    // moveZeros_optimal(n, arr);
    // display(n, arr);

    // int n1 = 6;
    // vector<int>a= {1,1,2,3,4,5};
    // int n2 = 6;
    // vector<int>b = {2,3,4,4,5,6};
    // add(n1, a, n2, b);
    // common(n1, a, n2, b);

    // vector<int>nums = {1,1,0,1,1,1,0,1,1};
    // cout << maxOnes(nums);

    vector<int>arr = {1,2,3,1,1,1,1,4,2,3};
    long long k = 3;
    // cout << longestSubarray(arr, k);

    cout << longestSubarrayOptimal(arr, 6);
    
    vector<int>book = {2,6,5,8,11};
    int target = 14;
    int n = 5;
    cout << TwosumOptimal(book, target, n) << endl;
    cout << TwoSum(book, target, n) << endl;
    return 0;
}