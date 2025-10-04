// Leetcode - 2483 / Minimum Penalty for a shop.

// Optimized : Assigning Scores / Greedy

#include <iostream>
#include <vector>
using namespace std;

int main() {

    string str;
    cout << "Enter the string (capital) : ";
    cin >> str;

    int score=0, maxscore=0, idx=-1;
    for(int i=0; i<str.size(); ++i){
        (str[i]=='Y') ? ++score: --score;
        if(score>maxscore){
            score=maxscore;
            idx=i;
        }
    }
    cout << "Best to close shop at " << idx+1 << " hr." << endl;
}