#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[] = {'a','b','c','d','\0'};
    char brr[] = {'a','b','c','d','k','\0'};

    // int i=0,cnt=0;
    // while(arr[i]!='\0'){
    //     cnt++;
    //     i++;
    // }

    // cout<<cnt<<endl;

    int n=strlen(arr);

    //reverse(arr,arr+n);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //cout<<strcmp(arr,brr)<<endl;

    //cout<<strcat(arr,brr)<<endl;

    strcpy(arr,brr);

    cout<<arr<<" "<<brr<<endl;




}