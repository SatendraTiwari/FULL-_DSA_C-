#include <iostream>
using namespace std;

 string palinDrome(int num){
    if(num == 0){
        return "false";
    }
    // int reverse = 0, rem = 0, n = num;
    
    long int reverse{0}, rem{0}, n = num;
    while(n){
        rem = n%10;
        reverse = reverse * 10 + rem;
        n/=10;
    }

    if(reverse == num){
        return "true";
    }

    return "false";
}

int main(){
    int num = 121;
    cout<<"this num palindrom are not : "<<palinDrome(num);
    return 0;
}