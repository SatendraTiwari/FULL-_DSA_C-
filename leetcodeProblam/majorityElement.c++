#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        int frequncy;
        for(int val : nums){
            frequncy = 0;
            for(int i = 0; i < nums.size();i++){
                if(val == nums[i]){
                    frequncy++;
                }
            }
            if(frequncy > nums.size() / 2){
                return val;
            }
        }

        return 0;
}

int opMajorityElement(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int freq = 1, ans = nums[0];
    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i - 1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }

    return 0;
}


// moorevoting algorithm

int movMajorityElement(vector<int> nums){
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    return ans;
}
int main(){
    vector<int> nums = {3,2,3};
    int result = movMajorityElement(nums);
    cout<<result;
    return 0;
}