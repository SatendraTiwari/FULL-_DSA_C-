#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    int min = INT8_MAX;
    while(l<=r){
        int mid = l + (r - l)/2;
        if(nums[mid] < min){
            min = nums[mid];
        }else if(nums[r] < nums[mid]){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    return min;

}

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    cout<<findMin(nums);
return 0;
}