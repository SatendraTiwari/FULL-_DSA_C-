#include <iostream>
#include <vector>
using namespace std;





int searchInsert(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;
    int ans;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid] == target){
            return mid;
        }else if(mid == nums.size() - 1){
            return mid + 1;
        }else if(nums[mid] > target && nums[mid -1] < target){
            return mid;
        }else if(nums[mid] < target){
            st = mid + 1;
        }else {
            end = mid -1;
        }
    }
}

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 0;
    cout<<searchInsert(nums,target);

    return 0;
}



int st = 0, end = nums.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
