// Leetcode 169 / Majority Element

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n=10;
    vector<int> nums = {4,6,1,6,6,4,6,0,6};
    // size = 10 = n;
    // 6 appears more than n/2 times.

    sort(nums.begin(), nums.end());
    cout<<"Majority element is : "<< nums[n/2]<<endl;
}