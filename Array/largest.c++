#include <iostream>
using namespace std;

void largestElement(int arr[], int n){

    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<"Max :"<< max<<endl;
}


void smallestElement(int arr[], int n){

    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<< "Min :" << min ;
}




int main(){

    int arr[] = {12,24,3,46,47};
    int n = 5;
    largestElement(arr, n);
    smallestElement(arr, n);

    return 0;
}