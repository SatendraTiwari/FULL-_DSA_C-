#include<iostream>

using namespace std;

void heapInsertion(int arr[], int n){
    int hArr[n];
    for(int i = 0; i < n; i++){
        hArr[i] = arr[i];

        int parent = (i-1)/2;

        // cout<<parent;

        if(hArr[i] > hArr[parent]){//13
            int temp =  hArr[i];
            swap(hArr[parent], hArr[i]);
        }
    }


    for(int j = 0; j < n; j++){
        cout<<" "<<hArr[j];
    }
}



int main() {
    int arr[6] = {4, 13, 6, 9, 1, 20};

    int n = sizeof(arr)/sizeof(int);
    // cout<<n;

    heapInsertion(arr,n);

}