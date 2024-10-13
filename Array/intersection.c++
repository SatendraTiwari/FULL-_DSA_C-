#include <iostream>
using namespace std;


void interSection(int arr1[], int arr2[],int s1) {

    for(int i = 0; i < s1; i++){
        for(int j = 0 ;j < s1; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[j]<<" ";
            }
        }
    }
    
}

int main(){
    int arr1[] = {1,2,34,5,6};
    int arr2[] = {1,2,76,87,6};
    // arr1[] == arr2[] 
    int s1 = sizeof(arr1)/ sizeof(int);

    interSection(arr1, arr2,s1);
    return 0;
}