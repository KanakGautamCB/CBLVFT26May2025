#include <iostream>
using namespace std;

int partition(int arr[], int l, int r){
    int p=r;
    int i=l-1,j=l;

    while(j<p){
        if(arr[j]>arr[p]){
            j++;
            continue;
        }else{
            i++;
            swap(arr[i],arr[j]);
            j++;
        }
    }

    swap(arr[i+1],arr[p]);

    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l>=r){
        return;
    }

    int m=partition(arr,l,r);
    quickSort(arr,l,m-1);
    quickSort(arr,m+1,r);
}


int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}