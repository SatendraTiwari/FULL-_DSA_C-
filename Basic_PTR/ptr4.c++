#include <iostream>
using namespace std;

int main(){     

    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int k = 0; k <2*i+1; k++){
            cout<<"*";
        }

        for(int k = 0; k <2*n-i; k++){
            cout<<"*";
        }
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}