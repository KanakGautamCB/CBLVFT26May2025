#include <iostream>
using namespace std;

int power(int x, int y){
    if(y==0){
        return 1;
    }

    int ans=x*power(x,y-1);

    return ans;
}

int main(){
    int a,b;cin>>a>>b;
    cout<<power(a,b)<<endl;
}