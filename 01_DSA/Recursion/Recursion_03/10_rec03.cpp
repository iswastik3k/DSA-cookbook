// Leetcode - 38 / Count and Say

// "34445221"  ->  return "1334152211"  -> 13 34 15 22 11

#include<iostream>
#include<string>
using namespace std;

string cas(int n){

    // Base case
    if(n==1){
        return "1";
    }

    string str = cas(n-1);

    string res = "";
    char ch=str[0];
    int fq = 1;

    for(int i=1; i<=str.length(); ++i){

        if(ch==str[i]){
            ++fq;
        }
        else{
            res+=to_string(fq)+ch;
            ch=str[i];
            fq=1;
        }
    }
    // res+=to_string(fq)+ch;
    return res;
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<cas(n)<<endl;;
}