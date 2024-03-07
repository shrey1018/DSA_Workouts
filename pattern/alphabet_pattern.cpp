#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            int number = col+1;
            char ch = number +'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
}