// Leetcode - 242 / Valid Anagram

// Given two strings, return true if one is an anagram of other.

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s, t;
    cout << "Enter 1st string : ";
    getline(cin, s);
    cout << "Enter 2nd string : ";
    getline(cin, t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << ((s == t) ? "Yes, strings are anagrams \n" : "Not an anagram \n");
}