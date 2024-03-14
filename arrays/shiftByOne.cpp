#include <iostream>
using namespace std;
//shift ele by one to right 

void shiftArr(int arr[],int n){

    int temp  = arr[n-1];
    for(int i =n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    
    arr[0] = temp;
}
int main(){
    int arr[]={10,20,30,40};
    int n = 4;
    
    shiftArr(arr,n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}