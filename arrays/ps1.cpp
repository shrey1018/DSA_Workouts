#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int n=5;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    cout<<"sum is :"<<sum;
    return 0;
}