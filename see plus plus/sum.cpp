#include<bits/stdc++.h>
using namespace std;

// Threesome brute
vector<vector<int>> triplet (vector<int>&num) {
    set<vector<int>> st;
    int n = num.size();
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            for (int k = j+1; k<n; k++) {
                if (num[i] + num[j] + num[k] == 0) {
                    vector<int>temp = {num[i], num[j], num[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(), st.end());
    return ans;
}

//Threesome Better 
vector<vector<int>>threesum(vector<int>&num) {
    st<vector<int>> st;
    int n = num.size();
    for (int i = 0; i<n; i++) {
        set<int> hashset;
        for (int j = i+1; j<n; j++) {
            int third = -(num[i] + num[j]);
            if (hashset.find(third) != hashset.end()) {
                vector<int>temp = {num[i], num[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(num[j]);
        }
    }

    vector<vector<int>> ans (st.begin(), st.end());
    return ans;
}

//Optimal Threesome
vector<vector<int>> threesome(vector<int>&num) {
    
    vector<vector<int>> ans;
    sort(num.begin(), num.end());
    for (int i = 0; i<n; i++) {
        if (i>0 && num[i] == num[i-1]) continue;
        int j = i+1;
        int k = num.size() - 1;
        while(j<k) {
            int sum = num[i] + num[j] + num[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp == {num[i], num[j], num[k]};
                j++;
                k--;
                while(j<k && num[j] == num[j-1]) j++;
                while (j<k && num[k] == num[k+1]) k--;
            }
        }
    }
    return ans;
}


//4-sum Brute
vector<vector<int>> fourSum(vector<int> &nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            for (int k = j+1; k<n; k++) {
                for (int l = l+1;l<n; l++) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

//Better 4-Sum
vector<vector<int>> BetterFourSome(vector<int>&nums, int target) {
    int n = nums.size();
    set<vector<int>>st;
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            set<long long> hashset;
            for (int k = j+1; k<n; k++) {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if (hashset.find(fourth) != hashset.end()){
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> OptimalFourSome(vector<int>&nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i<n; i++) {
        if (i>0 && nums[i] == nums[i-1]) continue;
        for (int j = i+1; j<n; j++) {
            if (j != i+1 && nums[j] == nums[j-1]) continue;
            int k = k+1;
            int l = n-1;
            while (k<l) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target) {
                    vector<int>temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++; l--;
                    while (k<l && nums[k] == nums[k-1]) k++;
                    while(k<l && nums[l] == nums[l+1]) l--;
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }
    return ans;
}

int SubArraysWithxorK(vector<int>a, int k) {
    int xr = 0;
    mpp<int,int>mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i<a.size(); i++) {
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main() {

}