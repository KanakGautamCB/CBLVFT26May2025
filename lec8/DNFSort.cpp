#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=-1,m=0,h=n-1;
    while(m<=h){
        if(arr[m]==0){
            l++;
            swap(arr[l],arr[m]);
            m++;
        }else if(arr[m]==1){
            m++;
        }else if(arr[m]==2){
            h--;
            swap(arr[m],arr[h+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
