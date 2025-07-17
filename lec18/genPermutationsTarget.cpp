#include <iostream>
using namespace std;

void generator(int s, int t,int arr[], int n, vector<int>&ans){
    if(s>t){
        return;
    }
    if(s==t){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        ans.push_back(arr[i]);
        generator(s+arr[i],t,arr,n,ans);
        ans.pop_back();
    }

}

int main(){
    int n,t;cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    generator(0,t,arr,n,ans);
}