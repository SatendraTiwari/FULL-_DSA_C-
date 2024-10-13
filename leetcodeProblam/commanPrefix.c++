#include <iostream>
#include<vector>
#include<string>
using namespace std;

string commanPrefix(vector<string>& strs){

    if(strs.size() == 0) return "ag";

    int minLenght = strs[0].size();
    for(int i = 0; i < strs.size(); i++){
        int size = strs[i].size();
        if(size < minLenght){
            minLenght = size;
        }
    }

    for(int i = 0; i < minLenght; i++){
        char cuurentChar = strs[0][i];
        for(int j = 1; j < strs.size(); j++){
            if(strs[j][i] != cuurentChar){
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0].substr(0, minLenght);
}


int main(){
    vector<string> strs =  {"ow","flower","light"};
    string result = commanPrefix(strs);
    cout<<result;
    return 0;
}