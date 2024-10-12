#include <iostream>
#include<vector>
using namespace std;

void reverse_vec(vector<int>& num){
    int start = 0;
    int end = num.size();
    while(start <= end){
        swap(num[start],num[end]);
        start++;
        end--;
    }

    for(int val : num){
        cout<<"VAl : "<<val<<endl;
    }
}

int main(){

    vector<int> num = {12,42,62,87,1};
    reverse_vec(num);
    return 0;
}