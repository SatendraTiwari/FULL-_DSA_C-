# STL = Standard Template Library

`A software library for the C++ programming language that provides containers, algorithms, functions, and iterators. STL was designed by Alexander Stepanov and influenced many parts of the C++ Standard Library`


## CONTAINERS : ARRAY, VECTOR, PAIR, DEQUE


```Summary Table:
Feature	              |   Array  |	Vector
Size	              |   Fixed  |	Dynamic
Memory Management	  |   Manual |	Automatic (STL handles)
Functionalities	      |   Basic  |  Rich in-built functions
Performance	          |   Faster |	Slightly slower
Library Dependency	  |   None	 |   Requires <vector>```

### ARRAY

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

### VECTOR 

#### 

```
#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> vec = {12,13,14,15};
    cout<<"Capacity size ->> "<<vec.capacity()<<endl;
    

    vec.push_back(1);
    cout<<"After the push back capacity size ->> "<<vec.capacity()<<endl;


    cout<<"Actual Size ->"<<vec.size()<<endl;
    for(int val : vec){
        cout<<val<<endl;
    }

    vec.pop_back();
    for(int val : vec){
        cout<<val<<endl;
    }


    cout<<"After the pop back capacity size ->> "<<vec.capacity()<<endl;

    cout<<"Before clear Actual Size ->"<<vec.size()<<endl;
    vec.clear();
    cout<<"after clear Actual Size ->"<<vec.size()<<endl;
    cout<<"After the pop back capacity size ->> "<<vec.capacity()<<endl;


    vector<int> v(4,12);
    // syntex : v(size, element);

    for(int val : v){
        cout<<val;
    }

    // copy to anther vector

    vector<int> copyVec(v);
     for(int val : copyVec){
        cout<<val;
    }
    
    return 0;
}
```


