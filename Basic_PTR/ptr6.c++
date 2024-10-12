#include <iostream>
#include<vector>
using namespace std;

int mergeAndCount(vector<int>& arr,int left, int mid, int right){
    vector<int>temp(right-left+1);
    int i = left, j = mid+1, k = 0;
    int invcount = 0;
    while(j <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else {
            temp[k++] = arr[i++];
            invcount+=(mid-i+1); //Count iversions 
        }
    }

    //copy remaining element from the letf subarray
    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= right){
        temp[k++] = arr[j++];
    }

    for(i = left; i < right; i++){
        arr[i] = temp[i - left];
    }

    return invcount;
}

int mergeSortAndCount(vector<int>& arr, int left, int right){
    int invcount = 0;
    if(left < right){
        int mid = left+(right)/2;

        invcount += mergeSortAndCount(arr,left,mid);
        invcount += mergeSortAndCount(arr, mid+1, right);
        invcount += mergeAndCount(arr, left, mid, right);
    }
   return invcount;   
}



int main(){
    int n = 0;
    vector<int> arr = {7,2,5,3};
    int N = arr.size();
    // cout<<N;
    int result =  mergeSortAndCount(arr,0,N-1);
    cout<<result;
    return 0;
}
