#include <iostream>
using namespace std;

void generator(int s, int t,int k, int& cnt){
    if(s>t){
        return;
    }
    if(s==t){
        cnt++;
    }

    for(int i=1;i<=k;i++){
        generator(s+i,t,k,cnt);
    }
}

int main(){
    int t,k;cin>>t>>k;
    int cnt=0;
    generator(0,t,k,cnt);
    cout<<cnt<<endl;
}