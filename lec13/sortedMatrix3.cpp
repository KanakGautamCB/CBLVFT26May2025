#include <iostream>
using namespace std;

int main(){
    int n,m,t;cin>>n>>m>>t;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int i=n-1,j=0;
    bool found=false;
    while(i>=0 && j<m){
        if(t>=arr[i][j]){
            while(j<m){
                if(arr[i][j]==t){
                    found=true;
                }
                j++;
            }
        }
        i--;
    }
    if(found){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}