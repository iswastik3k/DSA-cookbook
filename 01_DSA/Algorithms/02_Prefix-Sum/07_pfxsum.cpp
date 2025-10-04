// Leetcode - 1402 / Reducing Dishes

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

    int sum=0, idx=-1;
    for(int i=n-1; i>=0; --i){
        sum+=nums[i];
        if(sum<0){
            idx=i;
            break;
        }
    }

    int maxsat=0;
    for(int i=idx+1, t=1; i<nums.size(); ++i,++t){
        maxsat+=nums[i]*t;
    }
    
    cout<<"maximum like coeffecient is : "<<maxsat<<endl;
}   