#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int tr){
    int st = 0, end = nums.size() - 1;
    
    while(st <= end){
        int mid = (st + end) / 2;

        if(tr > nums[mid]){
            st = mid + 1;
        }else if(tr < nums[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }

    return -1;
}


int main(){
    vector<int> nums = {1,2,6,7,9,12};
    int tr = 12;
    cout<< binarySearch(nums,tr)<<endl;
    cout<<9/2;
    return 0;
}