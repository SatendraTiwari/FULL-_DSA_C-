#include <iostream>
using namespace std;


void linearSearch(int arr[], int n,int el){
    int i = 0;
    int flag = true;
    while(i < n-1){
        if(arr[i] == el){
            cout<<"find element this possition : "<<i;
            flag = false;
        }
        i++;
    }
}


int main(){
    int arr[] = {32,26,48,84,9,4};
    int n = sizeof(arr)/sizeof(int);
    int el = 48;
    linearSearch(arr,n,el);

    return 0;
}