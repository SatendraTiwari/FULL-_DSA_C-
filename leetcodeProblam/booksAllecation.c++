#include <iostream>
#include <vector>

using namespace std;

bool isVaild(vector<int> nums, int m, int n,int maxAllocationPage){
    int student = 1, page = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] > maxAllocationPage){
            return false;
        }

        if(page+nums[i] <= maxAllocationPage){
            page += nums[i];
        }else{
            student++;
            page = nums[i];
        }
    }

    return student > m ? false : true;
}

int bookAllocation(vector<int> nums,int m,int n){
    if(m > n)
      return -1;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int st = 0, end = sum,ans;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isVaild(nums,m,n,mid)){ //vaild 
           end = mid - 1;
           ans = mid;
        }else{
            st = mid + 1;
        }
    }

    cout<<ans;
    return ans;
}

int main(){
    vector<int> nums = {2,1,3,4};
    int m = 2;
    int n = 4;

    bookAllocation(nums,m,n);
    
    return 0;
}