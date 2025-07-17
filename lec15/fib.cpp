#include <iostream>
using namespace std;

int fib(int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }

    int ans= fib(x-1)+fib(x-2);
    return ans;
}

int main(){
    int n;cin>>n;
    cout<<fib(n)<<endl;
}