#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(int k = 0; k < 2*i-1; k++){
                cout<<" ";
            }

        cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            cout<<" ";

        }
        cout<<"*";
        if(i != n-1){
            for(int k = 2*(n-i-1)-1; k > 0; k--){
                cout<<" ";
            }

        cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}