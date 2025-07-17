#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int pref[n];
    int freq[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pref[0]=arr[0];
    int ans=0;
    for(int i=0;i<n;i++){
        freq[i]=0;
    }

    for(int i=1;i<n;i++){
        pref[i]=arr[i]+pref[i-1];
    }
    
    freq[0]=1;
    for(int i=0;i<n;i++){
        pref[i]%=n;
        ans+=freq[pref[i]];
        freq[pref[i]]++;
    }
    cout<<ans<<endl;
}
