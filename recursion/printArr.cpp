#include <iostream>
using namespace std;
void printArr(int arr[],int size,int index){
  //base case
  if(size==index){
    return;
  }
  //processing 
  cout<<arr[index]<<" ";
  //recursive relation
  printArr(arr,size,index+1);
}
int main(){
  int arr[]={1,2,3,4,5};
  int size = 5;
  int index =0;
  printArr(arr,size,index);
  return 0;
}