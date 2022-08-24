/*Writing a program to check alternating bit*/
#include <iostream>
using namespace std;
bool alternating_bit(int n){
    int x=n&1;
    while(n){
        n>>=1;
        int y=n&1;
        if (x==y){
            return false;
        }
        x=y;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<alternating_bit(n);
    return 0;
}
