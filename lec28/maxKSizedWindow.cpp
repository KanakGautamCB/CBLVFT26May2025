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
    int sum=0;
    while(true){
        sum+=a[j];
        if(j==k-1){
            break;
        }
        j++;
    }
    int ans=sum;
    while(j<n){
        if(i>0){
            sum=sum-a[i-1]+a[j];
        }
        ans=max(ans,sum);
        i++;
        j++;
    }
    cout<<ans<<endl;

}