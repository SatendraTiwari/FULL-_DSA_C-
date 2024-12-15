## STL = Standard Template Library

`A software library for the C++ programming language that provides containers, algorithms, functions, and iterators. STL was designed by Alexander Stepanov and influenced many parts of the C++ Standard Library`


# CONTAINERS : ARRAY, VECTOR, PAIR 

# ARRAY

```
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

```