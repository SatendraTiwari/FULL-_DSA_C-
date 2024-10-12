//:::::::::::::::::::::::::::::::::::::::::::Brute Force Approch :::::::::::::::::::::::::::::::::::

#include <iostream>
using namespace std;

void maxSumSubArray(int arr[],int n){
    int maxSum = arr[0],st;
    for(st = 0; st < n; st++){
        int current_sum = 0;
        for(int end = st; end < n; end++){
            current_sum += arr[end];
            maxSum = max(current_sum, maxSum);
        }
    }
    cout<<"max sum: "<<maxSum;
}



int main(){
    int arr[] = {12,14,24,-4,4,-68,69,-6};
    int N = 8;
    maxSumSubArray(arr,N);
    return 0;
}