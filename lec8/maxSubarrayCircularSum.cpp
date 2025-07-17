#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }

    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>0){
            sum=0;
        }
        ans=min(ans,sum);
    }

    cout<<total-ans<<endl;
}