#include <iostream>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int arr[n],brr[m];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    int ans[n+m];


    int i=0,j=0, k=0;

    while(i<n && j<m){
        if(arr[i]<brr[j]){
            ans[k]=arr[i];
            i++;
            k++;
        }
        else{
            ans[k]=brr[j];
            j++;
            k++;
        }
    }

    while(j<m){
        ans[k]=brr[j];
        k++;
        j++;
    }

    while(i<n){
        ans[k]=arr[i];
        k++;
        i++;
    }

    for(int k=0;k<n+m;k++){
        cout<<ans[k]<<" ";
    }
    cout<<endl;
}