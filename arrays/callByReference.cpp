#include <iostream>
using namespace std;
// Since we're passing by reference, the original variable 'n' in the main function will be modified.

void incrementOne(int &k)
{
    k = k + 1;
}

int main()
{
    int n;
    cin >> n;
    // below fun doesnt return anything so the incrementation of n is done without storing the result value
    incrementOne(n);
    cout << n;
    // here the increment fun takes ref var k which maps to data at var n so the incrementation is done at address of n or k
    //  The function incrementOne takes a reference to 'n'. Any changes made to 'k' in the function will reflect in 'n' as they both point to the same memory location.
}