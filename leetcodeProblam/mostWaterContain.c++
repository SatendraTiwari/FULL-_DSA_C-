#include <iostream>
#include<vector>
using namespace std;



int maxWoterContain(vector<int> hight){
    int i  = 0, j = hight.size() - 1;
    int max_water = 0;
    while(i < j){
        int w = j - i;
        int h = min(hight[i],hight[j]);
        int Aria = w * h;
        max_water = max(max_water,Aria);

        if(hight[i] < hight[j]) {
            i++;
        }else{
            j--;
        }

    }
    cout<<"i :"<<i<<endl;
    cout<<"j :"<<j<<endl;
    return max_water;

}


int main(){
    vector<int> num =  {1,8,6,2,5,4,8,3,7};

    int res = maxWoterContain(num);
    cout<<res;
    return 0;
}