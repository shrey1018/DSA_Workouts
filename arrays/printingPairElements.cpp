//here the goal is to print the pair of 2 ele from arr EAZY

#include <iostream>
using namespace std;

int main(){
 int n=3;
 int arr[]={10,20,30};

cout<<"pairs are :"<<endl;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i]<<" ,"<<arr[j]<<endl;
    }
 }
}