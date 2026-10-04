#include<bits/stdc++.h>
using namespace std;

int SubArraySumBetter(vector<int>&mat, int k) {
    int count = 0;
    for (int i = 0; i<mat.size(); i++) {
        int sum = 0;
        for (int j = i; j<mat.size(); j++) {
            sum += mat[j];
            if (sum == k) {
                count ++;
            }
        }
    }
    return count;
}



int main() {
    vector<int> mat = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout << SubArraySumBrute(mat, k);
    return 0;
}