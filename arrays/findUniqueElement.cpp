#include <iostream>
using namespace std;

int getAns(int arr[],int n){
        //if a num is xor with 0 then the result is that num thats why num is initialized with 0

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
// a num xor with itself gives 0 


//The XOR operation is both associative and commutative, which means the order of the numbers does not affect the result.
