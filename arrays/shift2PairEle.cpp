// shift right in pair of two ele

#include<iostream>
using namespace std;


void shiftByTwo(int arr[], int n, int k){
    // Storing end pair to replace at end of program with start elements
    int temp[] = {arr[n-2], arr[n-1]};

    // Shifting elements to the right by two positions
    for(int i = n-1; i >= k; i--){
        arr[i] = arr[i-k];
    }

    // Replacing the first two elements with the stored pair
    arr[0] = temp[0];
    arr[1] = temp[1];
}
int main(){
    // k represent shif numbers 
    int k = 2;
    int arr[]={10,20,30,40,50};
    int n =5;

    shiftByTwo(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}