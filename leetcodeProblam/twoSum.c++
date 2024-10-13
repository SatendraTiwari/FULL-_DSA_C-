// :::::::::::::::::::::::::::::::::::::::::::::: brute force : :::::::::::::::::::::::::::::::::

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int curr = 0;
        for (int j = i; j < nums.size(); j++)
        {
            curr += nums[j];
            if (curr == target)
            {
                return {i, j};
            }
        }
    }

    return {-1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> hum = twoSum(nums, target);
    for (int val : hum)
    {

        if (val < 0)
        {
            cout << " Not exit Sum in the Array";
        }
        else
        {

            cout << val << ",";
        }
    }
    return 0;
}
