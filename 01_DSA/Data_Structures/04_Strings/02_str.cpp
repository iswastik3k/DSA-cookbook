// Declaration and Input / Output of Strings.

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    cout<<"Enter string : ";

    // "getline" is used to take inputs having spaces.

    getline(cin, s);
    cout<<s<<endl;
}