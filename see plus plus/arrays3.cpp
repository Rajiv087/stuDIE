#include<bits/stdc++.h>
using namespace std;

int SubArraysWithSumK(vector<int>&arr, int k) {
    map<int,int>mpp;
    mpp[0] = 1;
    int preSum = 0, cnt = 0;
    for (int i = 0;i<arr.size(); i++){
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }
    return cnt;
}

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col<row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push(ans);
    }
    return ansRow;
}


vector<vector<int>> pascalTriangle(int row) {
    vector<vector<int>> ans;
    for (int i = 1; i<=N; i++) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int col = 1; col<row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push(ans);
    }
    return ansRow;
    ans.push_back(ansRow);
    }
    return ans;
}


vector<int> majorityElement2(vector<int> v) {
    int cnt1= 0, cnt2= 0;
    int el1= INT_MIN;
    int el2 = INT_MIN;
    for(int i = 0; i<v.size(); i++) {
        if (cnt1 == 0 && nums[i] != el2) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 ==0 && nums[i] != el1) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }

    vector<int>ls;
    cnt1= 0, cnt2 = 0;
    for(int i = 0; i<v.size(); i++) {
        if (el1 == v[i]) cnt1++;
        if (el2 == v[i]) cnt2++;
    }
    int mini = (int)(v.size()/3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2>=mini) ls.push_back(el2);
    sort(ls.begin(), ls.end());
    return ls;
}

int main() {
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout << SubArraysWithSumK(arr, k);
    return 0;
}
