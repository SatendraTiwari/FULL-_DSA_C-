#include <iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;
    int prod;
    for (int i = 0; i < n; i++)
    {
        prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        res.push_back(prod);
    }

    return res;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> re = productExceptSelf(nums);
    for(int val: re){
        cout<<val<<endl;
    }
   
    return 0;
}
