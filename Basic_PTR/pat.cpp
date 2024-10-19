#include <iostream>
using namespace std;
int main (){
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if((i==0 || j==0) || (i==6||j==6)){
                cout<<"1";
            }

            else if((i==1||j==1)||(i==5||j==5)){
                cout<<"2";
            }

            else if((i==2||j==2)||(i==4||j==4)){
                cout<<"3";
            }

            

            else{
                cout<<"1";
            }
        }

        cout<<endl;
    }
}