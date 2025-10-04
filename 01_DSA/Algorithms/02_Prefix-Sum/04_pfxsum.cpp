// Leetcode - 238 / Product of array except self.

// Approach : Prefix / Suffix product arrays (Optimized)

#include <iostream>
#include <vector>
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

    vector<int> preprod(n);
    int prod =1;
    for(int i=0; i<n; ++i){
        preprod[i]=prod;
        prod*=nums[i];
    }

    prod=1;
    for(int i=n-1; i>=0; --i){
        preprod[i]*=prod;
        prod*=nums[i];
    }

    cout<<"Product except self of array is : ";
    for(int val : preprod){
        cout<<val<<" ";
    }
    cout<<endl;

}