#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            if(col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //another method using different formula
    //print half space pyramid first
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        // print hollow pyramid print star at start and end
        for(int col=0;col<2*n-2*row-1;col++){
            if(col==0 || col==2*n-2*row-1-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}