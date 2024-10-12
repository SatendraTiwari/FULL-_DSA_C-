#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(28);
    vec.push_back(28);
    vec.push_back(28);
    cout<<"Size ::"<<vec.size()<<endl;
    cout<<"Capicity: "<<vec.capacity()<<endl;


    // cout<<"Size :: "<<vec.size()<<endl;

    // vec.push_back(12);

    // cout<<"Size :: "<<vec.size()<<endl;

    // cout<<"front :: "<<vec.front()<<endl;

    // cout<<"Back :: "<<vec.back()<<endl;

    // cout<<"at :"<<vec.at(2)<<endl;
    // for(int val : vec){
    //     cout<<val<<endl;
    // }
    return 0;
}