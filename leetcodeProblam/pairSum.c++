//::::::::::::::::: Best  Approach ::::::::::::::::::::::::::::::::::

#include <iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int i = 0, j = nums.size() - 1;
    int currSum;
    while(i <= j){
        currSum = nums[i] + nums[j];
        if(currSum > target){
            j--;
        }else if(currSum < target){
            i++;
        }else{
            return {i, j};
        }
    }

    return {-1};
}

int main(){
    vector<int> num = {2,7,11,15};
    int target = 6536;
    vector<int> hum = pairSum(num,target);
    for (int val : hum)
    {

        if (val < 0)
        {
            cout << " Not exit Sum in the Array";
        }
        else
        {

            cout << val <<",";
        }
    }
    return 0;
    return 0;
}
