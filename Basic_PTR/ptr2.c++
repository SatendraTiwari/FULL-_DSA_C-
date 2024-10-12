#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int num = 1;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; j--){
            cout<<" ";
        }

        for(int k = 0; k < n-i; k++){
            cout<<ch;
        }
        num++;
        ch = ch + 1;
        cout<<endl;
    }
}