#include <iostream>
#include<vector>
using namespace std;

int min_num(vector<int>& num){
    int min = num[0];
    for(int val : num){
        if(val < min){
            min = val;
        }
    }

    return min;
}


int max_num(vector<int>& num){
    int max = num[0];
    for(int val : num){
        if(val > max){
            max = val;
        }
    }

    return max;
}



int main(){

    vector<int> num = {12,42,62,87,1};
    int min_re = min_num(num);
    int max_re =  max_num(num);
    cout<<"Min Number " << min_re << endl;
    cout<<"Max Number " << max_re;
    return 0;
}