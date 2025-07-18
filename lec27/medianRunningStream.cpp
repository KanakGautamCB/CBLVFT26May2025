#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;cin>>n;
    priority_queue<int>mxhp;
    priority_queue<int,vector<int>,greater<int>>mnhp;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(mnhp.size()==0){
            mxhp.push(x);
        }else{
            if(x>=mxhp.top()){
                mnhp.push(x);
            }else{
                mxhp.push(x);
            }
        }
        
        if(mxhp.size()-mnhp.size()==2){
            mnhp.push(mxhp.top());
            mxhp.pop();
        }else if(mnhp.size()>mxhp.size()){
            mxhp.push(mnhp.top());
            mnhp.pop();
        }

        if(i%2==1){
            cout<<mxhp.top()<<endl;
        }else{
            //cout<<mxhp.top()<<" "<<mnhp.top()<<endl;
            float f= mxhp.top()+mnhp.top();
            cout<<f/2<<endl;
        }
    }

}