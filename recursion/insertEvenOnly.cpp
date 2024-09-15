#include <iostream>
#include <vector>
using namespace std;

void pushEven(int arr[],int index,int size, vector<int>&even){
    if(index>=size){
        return;
    }
    if(arr[index] %2 ==0){
        even.push_back(arr[index]);
    }
    pushEven(arr,index+1,size,even);
}
int main(){
    int arr[]={1,2,3,4,5,6,8,7};
  int size = 8;
  int index =0;
  vector<int>even;
  pushEven(arr,index,size,even);

  for(int i: even){
    cout<<i<<" ";
  }
}