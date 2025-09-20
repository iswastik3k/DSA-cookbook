
/*                 -: Some Gyaan on Recursion :-

    You can cook with recursion in two ways :

    Way 1 : Top-Down / Pre-Order Recursion.

            This builds up output as recursions depth increases.

            Work is done before base case hits.

            Example : printnto1 function.

            Syntax : Generally looks like this :

            void func (int x){

                -> Base case

                -> Do stuff

                -> Recursive Call
            }

    Way 2 : Bottom-Up / Post-Order Recursion.

            You keep going deeper without doing work.

            Builds Output on the way back, after base case had been hit.

            Has more AURA than Top-Down recursion.

            Example : print1ton function.

            Syntax : Generally looks like this :

            void func (int x){

                -> Base case

                -> Recursive call

                -> Do stuff
            }

*/

// Print 1 to N and N to 1 using recursion.

#include <iostream>
using namespace std;

void printnto1(int n) {

    if (n <= 0) {           // Base case
        return;
    }

    cout << n << " ";       // Kaam
    printnto1(n - 1);       // Call
}

void print1ton(int n) {

    if (n <= 0) {           // Base case
        return;
    }

    print1ton(n - 1);       // Call
    cout << n << " ";       // Kaam
}

int main() {

    int n;
    cout << " Enter the number : ";
    cin >> n;

    printnto1(n);
    cout << endl;
    print1ton(n);
    cout << endl;
}
