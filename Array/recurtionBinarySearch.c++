#include <iostream>
#include<vector>
using namespace std;

int recursionBinarySearch(vector<int> nums, int st, int end, int tr){
    if(st<=end){
        int mid = st + (end - st)/2;
        if(tr > nums[mid]){
            return recursionBinarySearch(nums,mid+1,end,tr);
        }else if(tr < nums[mid]){
            return recursionBinarySearch(nums,st,mid-1,tr);
        }else{
            return mid;
        }

    }

    return -1;
}


int main(){
    vector<int> nums = {1,2,3,6,8,9,12};
    int tr = 12, st = 0, end = nums.size() - 1;
    
    cout<<recursionBinarySearch(nums,st,end,tr);
    return 0;
}