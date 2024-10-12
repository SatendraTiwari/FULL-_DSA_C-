#include <iostream>
#include<vector>
using namespace std;

// find the single element in array

int singleNumber(vector<int>& num){
    int ans = 0;
    for(int val : num){
        ans ^= val;
    }

    return ans;
}

int main(){
    vector<int> num = {4,1,1,2,2};
    int a = singleNumber(num);
    cout<<a<<endl;
    return 0;
}