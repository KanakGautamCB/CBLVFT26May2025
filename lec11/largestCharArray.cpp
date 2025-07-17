#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ans[1];
    for(int i=0;i<n;i++){
        int m;cin>>m;
        char arr[m+1];
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        arr[m]='\0';
        if(i==0){
            strcpy(ans,arr);
        }else{
            cout<<i<<" "<<arr<<" "<<ans<<" "<<strcmp(ans,arr)<<endl;
            if(strcmp(ans,arr)<0){
                strcpy(ans,arr);
                cout<<ans<<endl;
            }
        }

    }
    cout<<ans<<endl;
}