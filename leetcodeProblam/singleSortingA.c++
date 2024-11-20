// single element in sorting Array 

#include <iostream>
#include <vector>
using namespace std;

int singleElementArray(vector<int> nums){
    int n = nums.size();
    if(n == 1) return nums[0];
    int st = 1, end = n - 2;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid+1]){
            return mid;
        }

        if(mid % 2 == 0){
            if(nums[mid-1] == nums[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{
            if(nums[mid - 1] == nums[mid]){
                st = mid + 1;
            }else{
                end = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,4};
    cout<<nums[singleElementArray(nums)];
    return 0;
}