#include <iostream>
using namespace std;

int incrementByOne(int k){
    k = k+1;
    return k;
}
int main(){
    //referance var is used to point a data stored in other var without making copy of it. Operations done on referance var affects original var and the stored data and voice versa
    // int a=5;
    // int &b=a;
    // cout<<b;

    //call by value
    int n;
    cin>>n;
    //here the value of n under this main scope has to reassign otherwise the incrementation will not happen
    n = incrementByOne(n);
    cout<<n;
}