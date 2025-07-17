#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=n-1;
    int ans=0;
    while(i<j){
        int ar = (j-i)*min(arr[i],arr[j]);
        ans=max(ans,ar);

        if(arr[i]<arr[j]){
            i++;
        }else{
            j--;
        }

    }

    cout<<ans<<endl;
}