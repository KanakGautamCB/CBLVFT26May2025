#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0;
    priority_queue<pair<int,int>>q;
    while(j<n){
        if(j<k-1){
            q.push({a[j],j});
            j++;
        }else if(j>=k-1){
            q.push({a[j],j});

            while(q.top().second<i){
                q.pop();
            }
            cout<<q.top().first<<endl;
            i++;
            j++;
        }
    }
}