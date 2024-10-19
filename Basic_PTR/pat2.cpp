#include<iostream>
using namespace std;
int main (){

    int count = 1;
    for(int i=1;i<=4;i++){
        count = count + i;
        int it = count;
        for(int j=1;j<=i;j++){

            cout<<it;
            it--;

        }

        cout<<endl;
    }
}