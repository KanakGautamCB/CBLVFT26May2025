#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>x(n),y(n);
    vector<int>freqx(100,0),freqy(100,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        freqx[x[i]]++;
        freqy[y[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int p=freqx[x[i]]-1,b=freqy[y[i]]-1;
        ans+=p*b;
    }
    cout<<ans<<endl;
}


