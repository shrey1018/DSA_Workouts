#include <iostream>
using namespace std;

int getAns(int arr[],int n){
int num=0;
for(int i=0;i<n;i++){
    num = num^arr[i];
}
return num;
}

int main(){
 int arr[]={2,10,11,10,2,13,15,13,15};
 int n=9;
 //find the element whose freq is single i.e 11

    int answer = getAns(arr,n);
    cout<<"single occurance num is :"<<answer;
}