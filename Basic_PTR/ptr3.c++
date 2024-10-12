#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    char ch = 'A';
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
         cout<<" ";   
        }
        for(int k = 0; k < 2*i+1; k++){
            
            cout<<ch;
            ch = ch + 1;
        }
        // num++;
        // ch = ch + 1;
        cout<<endl;
    }
}