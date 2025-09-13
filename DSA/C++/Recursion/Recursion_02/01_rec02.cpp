// Skip a character using recursion.

#include <iostream>
#include <string>
using namespace std;

string skipchr(string s, int len, int idx, char ch){

    // Base case
    if(idx>=len){
        return "";
    }

    string res=skipchr(s, len, idx+1, ch);

    return (s[idx]==ch) ? res : s[idx] + res;
}

int main(){

    string s;
    cout<<"Enter an string : ";
    getline(cin, s);

    int len=s.length();

    char ch;
    cout<<"Enter the character to delete : ";
    cin>>ch;

    if(len==0){
        return 0;
    }

    cout<<"Modified string is : "<<skipchr(s, len, 0, ch)<<endl;
}