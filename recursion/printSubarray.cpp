#include <iostream>
using namespace std;
#include <vector>

void printSubarrUtil(vector<int>&nums, int start,int end){
    //base case
    if(end==nums.size()){
        return;
    }
    //1 case
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    //RR
    printSubarrUtil(nums,start,end+1);
}
void printSubarr(vector<int> &nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        printSubarrUtil(nums,start,end);
    }
}
int main(){
    vector<int>nums{1,2,3,4,5};

    printSubarr(nums);
}