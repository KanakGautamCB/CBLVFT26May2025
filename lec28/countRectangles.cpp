#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>x(n),y(n);
    map<vector<int>,int>mp;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        vector<int>u={x[i],y[i]};
        mp[u]=1;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]!=x[j] && y[i]!=y[j]){
                vector<int> u = {x[j],y[i]};
                vector<int> v= {x[i],y[j]};
                if(mp[u] && mp[v]){
                    ans++;
                }
            }
        }
    }
    ans/=2;
    cout<<ans<<endl;
}