#include <iostream>
using namespace std;
int main(){
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
    
    int n=4;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<row+1<<" ";
        }
        cout<<endl;
    }
}