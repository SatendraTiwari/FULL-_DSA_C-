// 2 pointer Approach

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0 ;
    int end = n-1;
    for(int i = 0; i < n; i++){
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // while(start < end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[] = {12,13,14,15,26};
    int n = 5;
    reverseArray(a,n);
    return 0;
}



