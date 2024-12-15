#include <iostream>
#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main(){

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(0);

    cout<<"front :"<<d.front()<<endl;
    cout<<"back :"<<d.back()<<endl;

    cout<<"empty yes and no"<<d.empty()<<endl;


    d.erase(d.begin(),d.begin() + 1);

    cout<<"After a erase"<<d.size()<<endl;

    cout<<"front :"<<d.front()<<endl;


return 0;
}