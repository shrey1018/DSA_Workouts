#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

void findMinNum(int arr[],int size,int index,int &mini){
    if(index>=size){
        return;
    }
    mini = min(arr[index],mini);

    findMinNum(arr,size,index+1,mini);


}
int main(){
  int arr[]={1,2,3,4,5};
  int size = 5;
  int index =0;
    int mini = INT_MAX;
    findMinNum(arr,size,index,mini);
    cout<<mini;
}