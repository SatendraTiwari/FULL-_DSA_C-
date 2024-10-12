#include <iostream>
#include <vector>
using namespace std;

void subArray(int arr[], int n){
    int st,end;
    for(st = 0; st < n; st++){
        for(end = st; end < n; end++){
            for(int val = st; val < end; val++){
                cout<<arr[val];
            }
            cout<<" ";
        }

        cout<<endl;
    }
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    subArray(arr, n);
    return 0;
}