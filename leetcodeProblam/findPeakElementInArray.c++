#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int st = 0, end = nums.size()-1;

    if(nums.empty()) return 0;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid] < nums[mid+1]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return st;
}

int main(){
    vector<int> nums = {1,2};
    cout<<findPeakElement(nums);

    return 0;
}