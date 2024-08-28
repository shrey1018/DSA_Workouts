//return true if found else false
#include <iostream>
using namespace std;

bool searchArr(int arr[],int size, int index,int target){
    if(index>=size){
        return false;
    }
    if(arr[index]== target){
        return true;
    }
    bool nextAns= searchArr(arr,size,index+1,target);
    return nextAns;
}
int main(){
    int arr[]={1,2,3,4,5};
  int size = 5;
  int index =0;
  int target =3;
  cout<<"is present :"<<searchArr(arr,size,index,target);
  return 0;
}