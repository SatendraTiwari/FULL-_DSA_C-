#include <iostream>
#include <vector>
#include<array>
using namespace std;
int main(){

    array<int,4> arr = {12,13,14,15};
    vector<int> vec = {21,22,23,24};

    for(int i = 0; i < 4; i++){
        cout<<arr[i]<<endl;
        cout<<arr.at(i)<<endl;
        // cout<<vec[i];
    }
    cout<<arr.empty();
    cout<<"first element ::"<<arr.front()<<endl;
    cout<<"secound element ::"<<arr.back()<<endl;

    

    return 0;
}