// all negative numbers should be at left and positive to right

#include <iostream>
using namespace std;

void sort(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        // i iterate over array
       if(arr[i]<0){
        //j is used to store index of negative or start boxes of array and if found then it gets swapped 
        swap(arr[i],arr[j]);
        j++;
       }
    }
}
int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int n=7;
    sort(arr,n);
    cout<<"array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}