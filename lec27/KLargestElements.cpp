#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==-1){
            vector<int>v;
            while(pq.size()>0){
                cout<<pq.top()<<" ";
                v.push_back(pq.top());
                pq.pop();
            }
            for(int j=0;j<k;j++){
                pq.push(v[j]);
            }
            cout<<endl;

        }else{
            pq.push(x);
            if(pq.size()==k+1){
                pq.pop();
            }
        }
    }
}