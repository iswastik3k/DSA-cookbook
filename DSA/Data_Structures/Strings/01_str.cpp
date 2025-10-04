// Null Character (\0) significance.

#include <iostream>
using namespace std;

int main() {

    char str[] = {"abcdef"};
    int len = sizeof(str) / sizeof(str[0]);
    cout << len << endl;

    for (int i = 0; str[i] != '\0'; ++i) {
        cout << str[i];
    }
    cout << endl;

    char str2[] = {"abc\0def"};

    cout << str2 << endl;

    // len = 5 , Why ? we have only 4 characters so why 5 ?

    // Reason : Character array always end with a special char '\0'.

    // This is added by compiler, It indicates the array's end.

    // That's why we get a +1 in length.
}