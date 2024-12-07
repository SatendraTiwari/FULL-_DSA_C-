#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> nums, int m, int n,int maxAllocationPage){
    int stu = 1;
    int pages = 0;
    for(int i = 0; i < n; i++){
        if(pages < maxAllocationPage){
            pages += nums[i];
        }else{
            stu++;
            pages = nums[i];
        }
    }

    if(stu > m){
        return false;
    }
    
    return true;
}


int bookAllocation(vector<int> nums,int m,int n){
    if(m > n){
        return -1;
    }
    int sum = 0;

    for(int val : nums){
        sum += val;
    }

    int min = 0 , max = sum,ans = -1;

    while(min <= max){
        int mid = min + (max -min)/2;
        if(isValid(nums,m,n,mid)){
            ans = mid;
            max = mid -1;
        }else{
            min = mid +1 ;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {9,6,4,2};
    int m = 2;
    int n = 4;

    cout<<bookAllocation(nums,m,n);
    
    return 0;
}