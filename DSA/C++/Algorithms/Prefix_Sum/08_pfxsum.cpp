// Leetcode - 2389 / Longest subsequence with limited sum.

// Approach : Sort + Pfx Sum + Binary Search

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    sort(nums.begin(), nums.end());

    vector<int> pfxsum(n);
    int psum=0;
    for(int i=0; i<n; ++i){
        psum+=nums[i];
        pfxsum[i]=psum;
    }

    int m;
    cout<<"Enter length of quries array : ";
    cin>>m;
    vector<int> query(m);
    cout<<"Enter queries : ";
    for(int i=0; i<m; ++i){
        cin>>query[i];
    }

    vector<int> ans;

    int length=0;
    for(int i=0; i<m; ++i){
        length=0;

        int s=0, e=nums.size()-1, m;
        while(s<=e){
            m=s+(e-s)/2;
            if(pfxsum[m]>query[i]){
                e=m-1;
            }
            else{
                length=m+1;
                s=m+1;
            }
        }
        ans.push_back(length);
    }

    cout<<"Max sizes of subsequence for respective queries are : ";
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;
}