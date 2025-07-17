#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]='\0';

    int i=0,j=n-1;
    bool ans=true;
    while(i<=j){
        if(arr[i]!=arr[j]){
            ans=false;
            break;
        }
        i++;
        j--;
    }
    if(ans){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}