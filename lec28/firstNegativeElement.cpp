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
    queue<int>q;
    while(j<n){
        if(j<k-1){
            if(a[j]<0){
                q.push(j);
            }
            j++;
        }else if(j>=k-1){
            if(a[j]<0){
                q.push(j);
            }
            while(q.front()<i){
                q.pop();
            }
            if(q.size()>0){
                cout<<a[q.front()]<<endl;
            }else{
                cout<<0<<endl;
            }
            i++;
            j++;
        }
    }
}