#include <iostream>
using namespace std;

void sortZeroOne(int arr[],int n){
    int countZero = 0;

    // Count the number of 0s
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            countZero++;
        }
    }

    // Fill the first countZero elements of the array with 0s
    for(int i = 0; i < countZero; i++){
        arr[i] = 0;
    }

    // Fill the rest of the array with 1s
    for(int i = countZero; i < n; i++){
        arr[i] = 1;
    }
}
int main(){
    int arr[]={0,0,1,1,0,0,1,0,0,};

    //counting method
    int n=9;
    sortZeroOne(arr,n);

    //printing arr
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
}