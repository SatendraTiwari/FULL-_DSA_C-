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