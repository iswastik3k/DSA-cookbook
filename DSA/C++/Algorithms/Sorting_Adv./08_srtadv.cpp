// Leetcode - 448 / Find all numbers disappered in an array.

// Approach : Cyclic Sort

#include<iostream>
#include<vector>
using namespace std;

vector<int> cyclesort (vector<int> nums){

    vector<int> res;
    int i=0;
    while(i<nums.size()){
        int correctidx=nums[i]-1;
        if(nums[i]!=nums[correctidx]){
            swap(nums[i], nums[correctidx]);
        }
        else{
            ++i;
        }
    }

    for(int i=0; i<nums.size(); ++i){
        if(nums[i]!=i+1){
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main() {

    int n;
    cout << "Enter size of the vector : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> res = cyclesort(v);

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;
}