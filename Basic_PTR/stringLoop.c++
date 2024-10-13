#include <iostream>
#include<string>
using namespace std;

string prefix(string num[],int n){
    int minLenght = sizeof(num[0])/sizeof(string);
    cout<<"min langht : "<<minLenght;
    for(int i = 0; i < n; i++){
        int size = sizeof(num[i]);
        if(size < minLenght){
            minLenght = size;
        }
    }

    for(int i = 0; i < minLenght; i++){
        char currentChar = num[0][i];
        for(int j = 1; j < n; j++){
            if(num[j][i] != currentChar){
                return num[0].substr(0, i);
            }
        }
    }

    return num[0].substr(0, minLenght);
}

int main(){
    string num[] = {"flow", "flower", "flight"};
    int n = sizeof(num)/sizeof(string);
    cout<<n;
    string pre = prefix(num,n);
    cout<<pre;
    for(int i = 0; i < n; i++){

    }
    return 0;
}