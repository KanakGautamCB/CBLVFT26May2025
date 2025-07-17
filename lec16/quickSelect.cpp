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

int quickSort(int arr[], int l, int r, int k){
    if(l>r){
        return -1;
    }
    if(l==r){
        if(l==k-1){
            return arr[l];
        }else{
            return -1;
        }
    }

    int m=partition(arr,l,r);

    if(m==k-1){
        return arr[k-1];
    }
    if(m>k-1){
        quickSort(arr,l,m-1,k);

    }else{
        quickSort(arr,m+1,r,k);
    }
}


int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<quickSort(arr,0,n-1,k)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}