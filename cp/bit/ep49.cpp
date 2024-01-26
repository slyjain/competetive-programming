#include <iostream>

using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<"\n";
}
int main()
{   ios::sync_with_stdio(0);
cin.tie(0);
    printBinary(9);
    int a=15;
    int i=2;
    if((a&(1<<i))!=0){
        cout<<"Set bit";
    }
    else{
        cout<<"not set bit";
    }
    //bit set
    printBinary(a|(1<<i));
    //how to invert a number
    printBinary(~a);
    //unset a bit
    printBinary(a&~(1<<0));
    //toggle
    printBinary(a^(1<<2));
    printBinary(a^(1<<3));
    //total setbits
    int count=0;
    for(int i=0;i<32;i++){
        if(a&(1<<i)){
            count++;
        }
    }
    cout<<"\n"<<count;
    //inbuilt functions
    cout<<"\n"<<__builtin_popcount(a);
    //for long long
    cout<<"\n"<<__builtin_popcountll((1LL<<35)-1);
    
    return 0;
}
