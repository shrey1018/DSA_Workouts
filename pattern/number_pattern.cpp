#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(col==0){
                cout<<"1 ";
            }
            if(row==4){
                cout<<col+1<<" ";
            }
            if(row!=0 || row!=4){
                if(col==n-1){
                    cout<<row+1;
                }
            }
        }
        cout<<endl;
    }
}