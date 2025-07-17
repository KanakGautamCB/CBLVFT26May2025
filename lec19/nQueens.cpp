#include <iostream>
using namespace std;

void generator(int i, int n, vector<int>&r,vector<int>&c,
vector<int>&d1,vector<int>&d2, vector<int>&ans){
    if(i==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j=0;j<n;j++){
        if(r[i]!=0)continue;
        if(c[j]!=0)continue;
        if(d1[i-j+n-1]!=0)continue;
        if(d2[i+j]!=0)continue;

        r[i]=1;
        c[j]=1;
        d1[i-j+n-1]=1;
        d2[i+j]=1;
        ans.push_back(j);
        generator(i+1,n,r,c,d1,d2,ans);
        r[i]=0;
        c[j]=0;
        d1[i-j+n-1]=0;
        d2[i+j]=0;
        ans.pop_back();
    }
}

int main(){
    int n;cin>>n;
    vector<int>r(n,0),c(n,0),d1(2*n-1,0),d2(2*n-1,0);
    vector<int>ans;
    generator(0,n,r,c,d1,d2,ans);

}