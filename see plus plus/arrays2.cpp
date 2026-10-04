#include<bits/stdc++.h>
using namespace std;

void display(vector<int> nums) {
    for (int i = 0; i<nums.size(); i++) {
        cout << nums[i] << "\t";
    }
}

void displayMatrix(vector<int>mat, int n, int m) {
        for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
// //Longest subarray with sum K(positives) 
// int longestSubarray(int n, int arr[], int targetSum) {
//     int len = 0;
//     for (int i = 0; i<n; i++) {
//         for (int j = i; j<n; j++) {
//             int sum = 0;
//             sum += arr[j];-
//             if (sum == targetSum) len = max(len, j-i+1);
//         }
//     }
//     return len;
// }

// int longestSubarrayBetter(vector<int>a, long long k) {
//     map<long long, int> preSumMap;
//     long long sum = 0;
//     for (int i = 0; i<a.size(); i++) {
//         sum += a[i];
//         if (sum == k) {
//             maxLen = max(maxLen, i+1);
//         }
//         long long rem = sum - k;
//         if (preSumMap.find(rem) != preSumMap.end()) {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }
//         if (preSumMap.find(sum) == preSumMap.end()) {
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLen;

// }

// int longestSubarrayOptimal(vector<int>a, long long k) {
//     int left = 0;
//     int right = 0;
//     long long sum = 0;
//     int maxLen = 0;
//     int n = a.size();
//     while(right<n) {
//         while(left <= right && sum >k) {
//             sum -= a[left];
//             left++;
//         }
//         if (sum == k) {
//             maxLen = max(maxLen, right-left + 1);
//         }
//         right ++;
//         if (right < n) {
//             sum += a[right];
//         }
//     }
//     return maxLen;
// }

//TwoSum
// string TwoSum(vector<int> book, int target, int n) {
//     map<int,int> mpp;
//     for (int i = 0; i<n; i++) {
//         int a = book[i];
//         int more = target - a;
//         if (mpp.find(more) != mpp.end()) {
//             return "YES";
//         }
//         mpp[a] = i;
//     }
//     return "NO";
// }

// string TwosumOptimal(vector<int> book, int target, int n) {
//     int left = 0;
//     int right = n-1;
//     sort(book.begin(),book.end());
//     while (left < right) {
//         int sum = book[left] + book[right];
//         if (sum == target) return "YES";
//         else if (sum < target) left ++;
//         else right --;
//     }
//     return "NO";
// }

// void sortArray(vector<int>&arr, int n) {
//     int low = 0, mid = 0, high = n-1;
//     while (mid<=high) {
//         if (arr[mid] == 0) {
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int majorityElement(vector<int> v) {
//     int count = 0;
//     int element;
//     for (int i =0; i<v.size(); i++) {
//         if (count == 0) {
//             count = 1;
//             element = v[i];
//         }
//         else if (v[i] == element) {
//             count ++;
//         }
//         else {
//             count-- ;
//         }
//     }
//     int cnt1= 0;
//     for (int i = 0; i<v.size();i++) {
//         if (v[i] == element) cnt1++;
//     }
//     if (cnt1 > v.size()/2) {
//         return element;
//     }
//     return -1;
// }

// long long maxSubarraySum(int arr[], int n) {
//     long long sum = 0; 
//     long long maxi = INT_MIN;
//     for (int i = 0; i<n; i++) {
//         sum += arr[i];

//         if (sum > maxi) {
//             maxi = sum;
//         }
        
//         if (sum < 0) sum = 0;
//     }
//     if (maxi < 0) maxi = 0;    
//     return maxi;
// }

// int Stocks(vector<int>stock) {
//     int mini = stock[0];
//     int profit = 0;
//     for (int i = 1; i<nums.size(); i++) {

//     }
// }

// int rearrangebySign(vector<int>nums) {
//     int n = nums.size();
//     vector<int> ans(n,0);
//     int posIndex = 0;
//     int negIndex = 1;
//     for (int i = 0; i<n; i++){
//         if (nums[i] < 0) {
//             ans[negIndex] = nums[i];
//             negIndex+=2;
//         }
//         else {
//             ans[posIndex] = nums[i];
//             posIndex+=2;
//         }
//     }
//     return ans;

// }

// void rearrangebySign2(vector<int>&nums) {
//     int n = nums.size();
//     vector<int> pos, neg;
//     for (int i = 0; i<n; i++) {
//         if(nums[i]>0) {
//             pos.push_back(nums[i]);
//         }
//         else {
//             neg.push_back(nums[i]);
//         }
//     }

//     if (pos.size() > neg.size()) {
//         for (int i = 0; i<neg.size(); i++) {
//             nums[2*i] = pos[i];
//             nums[2*i+1] = neg[i];
//         }
//         int index = neg.size() * 2;
//         for (int i = neg.size(); i<pos.size(); i++ ) {
//             nums[index] = pos[i];
//             index ++;
//         }
//     }

//     else {
//         for (int i = 0; i<pos.size(); i++) {
//             nums[2*i] = pos[i];
//             nums[2*i+1] = neg[i];
//         }
//         int index = pos.size()*2;
//         for (int i = pos.size(); i<neg.size(); i++ ){ 
//             nums[index] = neg[i];
//             index++;
//         }
//     }
// }
// int nextPermutation(vector<int> nums) {
//     int index = -1;
//     int n = nums.size();
//     for (int i = n-2; i>=0; i--) {
//         if (nums[i] < nums[i+1]) {
//             index = i;
//             break;
//         }
//         if (index == -1) {
//             reverse(nums.begin(), nums.end());
//         }

//         for (int i = n-1; i>=0; i--) {
//             if (nums[i] > nums[index]) {
//                 swap(nums[i], nums[index]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+index+1, nums.end());
//     }
// }

// vector<int>Leader(vector<int>&nums) {
//     vector<int>ans;
//     int maxi = INT_MIN;
//     int n = nums.size();
//     for (int i = n-1; i>=0; i--) {
//         if (nums[i] > maxi) {
//             ans.push_back(i);
//         }
//         maxi = max(maxi, nums[i]);
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// int longestSuccessiveElement(vector<int>&nums) {
//     int n = nums.size();
//     if (n==0) return 0;
//     int longest = 1;
//     unordered_set<int> st;
//     for (int i = 0; i<n; i++) {
//         st.insert(nums[i]);
//     }

//     for (auto it: st) {
//         if (st.find(it-1) == st.end()) {
//             int cnt = 1;
//             int x = it;
//             while (st.find(x+1) != st.end()) {
//                 x ++;
//                 cnt++;
//             }
//             longest = max(longest, cnt);
//         }
//     }
//     return longest;
// }

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    
    int col0 = 1;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (matrix[i][j] == 0) {
                // mark the i-th row
                matrix[i][0] = 0;
                // mark the j-th col
                if (j!= 0) {
                    matrix[0][j] = 0;
                }
                else 
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i<n; i++) {
        for (int j = 1; j<m; j++) {
            if (matrix[i][j] != 0) {
                // check for col and row 
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if (matrix[0][0] == 0) {
        for (int j = 0; j<m; j++) matrix[0][j] = 0;
    }
    if (col0 == 0) {
        for (int i = 0; i<n; i++) {
            matrix[i][0] = 0;
        }
    }
    return matrix;
}

void rotateMatrix(vector<int>&mat) {
    int n = mat.size();
    for (int i = 0; i<n-2; i++) {
        for (int j = i+1; j<n-1; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i<n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

vector<int> spiralMatrix(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int>ans;
    
    while(top <= bottom && left<= right) {

        for (int i = left; i<=right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        for (int i = top; i<= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            for(int i = right; i>=left; i--) {
                ans.push_back(mat[bottom][i]);
            }
        bottom--;
        }

        if (left<=right) {
            for (int i = bottom; i>=top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    // int n = 10;
    // int arr[10] = {1,2,3,1,1,1,1,4,2,3};
    // int targetSum = 3;
    // cout << longestSubarray(n, arr, targetSum);

    // int n = 11;
    // vector<int> nums = {0,1,1,0,1,2,1,2,0,0,0};
    // sortArray(nums,n);
    // display(nums);

    // vector<int> v = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    // cout << majorityElement(v);

    // int n = 8;
    // int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    // cout << maxSubarraySum(arr, n);

    // vector<int>nums = {-1,2,3,4,-3,1};
    // rearrangebySign2(nums);
    // display(nums);

    // vector<int> nums = {2,1,5,4,3,0,0};
    // nextPermutation(nums);
    // display(nums);

    // vector<int>nums = {10,22,12,3,0,6};
    // vector<int>ans = Leader(nums);
    // display(ans);
    // for (int index: ans) {
    //     cout << index << " ";
    // }


    // vector<int> nums = {102,4,100,1,101,3,2,1,1};
    // cout << longestSuccessiveElement(nums);

    // vector<vector<int>> matrix = {
    //     {1,1,1,1},
    //     {1,0,1,1}, 
    //     {1,1,0,1}, 
    //     {0,1,1,1}
    // };
    int n = 4;
    int m = 4;
    // zeroMatrix(matrix, n, m);
    // displayMatrix(matrix, n, m);

    vector<int> mat = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotateMatrix(mat);
    displayMatrix(mat, n, m);



}


