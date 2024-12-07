#include <iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, end = nums.size();
        int index = 1;
        vector<int> res;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                index = mid;
                end = mid - 1;
            }else if(nums[mid] < target){
                st = mid + 1;
            }else{

                end = mid - 1;
            }
        }
        st = 0 , end = nums.size();
        int index1 = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                index1 = mid;
                st = mid + 1;
            }else if(nums[mid] < target){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        res.push_back(index);
        res.push_back(index1);
        return res;
    }
int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
   vector<int> result =  searchRange(nums,target);

   for(int val : result){
    cout<<val;
   }
    return 0;
}