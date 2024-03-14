#include <iostream>
using namespace std;
//shift ele by one to right 

void shiftArr(int arr[],int n){
// first store last value of arr coz to keep track else it will be lost
    int temp  = arr[n-1];

    //iterating from last ele to ele at index 1 to swap for prev ele. if we do till 0 then the prev ele will give error thats why till 1
    for(int i =n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    //now we have shifted ele from last index to index at 1
    //now replace the value at 0th index by temp that is last ele stored prev to keep track
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