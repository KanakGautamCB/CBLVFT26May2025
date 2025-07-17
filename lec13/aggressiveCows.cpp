#include <iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int l=1,r=arr[n-1]-arr[0];
    int ans=0;

    while(l<=r){
        int m=(l+r)/2;
        int cnt=1; 
        int prev=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-prev>=m){
                cnt++;
                prev=arr[i];
            }
        }
        if(cnt>=c){
            ans=max(ans,m);
            l=m+1;
        }else{
            r=m-1;
        }
    }
    cout<<ans<<endl;
}