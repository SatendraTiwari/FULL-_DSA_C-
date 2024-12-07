#include <iostream>
#include <vector>
using namespace std;

int sqrt(int x)
{
    int st = 0, end = x;
    while (st <= end){
        long mid = st + (end - st) / 2;
        cout<<mid;
        long long sq = x/2 * mid;
        if (sq == x){
            return mid;
        }else if (sq < x){
            st = mid + 1;
        }else{
            end = mid - 1; 
        }
    }

    return end;
}

int main()
{
    int x = 8;
    cout << sqrt(x);
    
    return 0;
}
