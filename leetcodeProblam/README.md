# problam 1 Two sum 

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

vector<int> pairSum(vector<int> nums, int target){
    //vector<int> ans; //your chose
    int i = 0, j = nums.size() - 1;
    int currSum;
    while(i <= j){
        currSum = nums[i] + nums[j];
        if(currSum > target){
            j--;
        }else if(currSum < target){
            i++;
        }else{
            //ans.push_back(i);
            //ans.push_back(j);
            //return  ans;
            return {i, j};
        }
    }

    return {-1};
}


# problam 2  palindrome 

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long int x_reverse{0}, n=x, rem{0};
        while(n){
            rem = n%10;
            x_reverse = x_reverse*10+rem;
            n/=10;
        }
        if(x_reverse == x)
            return true;
    return false;
    }
};


# problam 3 commanprefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.


brute forse Approch

string commanPrefix(vector<string>& strs){

    if(strs.size() == 0) return "ag";

    int minLenght = strs[0].size();
    for(int i = 0; i < strs.size(); i++){
        int size = strs[i].size();
        if(size < minLenght){
            minLenght = size;
        }
    }

    for(int i = 0; i < minLenght; i++){
        char cuurentChar = strs[0][i];
        for(int j = 1; j < strs.size(); j++){
            if(strs[j][i] != cuurentChar){
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0].substr(0, minLenght);
}

 

# problam 4  
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[left] != nums[right]) {
                nums[++left] = nums[right];
            }
        }
        return left + 1;
    }
};



# problem 5 single element in the sorted Array 
# linear Approch {
    
    // single element in sorting Array 

#include <iostream>
#include <vector>
using namespace std;

int singleElementArray(vector<int> nums){
    int n = nums.size();
    for(int i = 1; i < n-1; i++){
        if(nums[i-1] != nums[i] && nums[i] != nums[i+1]){
            return nums[i];
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {1,1,2,3,3,4,4};
    cout<<singleElementArray(nums);
    return 0;
}

}



# bineary approch {
    // single element in sorting Array 

#include <iostream>
#include <vector>
using namespace std;

int singleElementArray(vector<int> nums){
    int n = nums.size();
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


}


