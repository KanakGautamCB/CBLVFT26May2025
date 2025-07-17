#include <iostream>
using namespace std;

bool comparator(string s1, string s2){
    return s1+s2>s2+s1;
}

int main(){
    int n;cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comparator);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}