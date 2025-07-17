#include <iostream>
using namespace std;


void merge(int arr[],int l,int r){
    int m=(l+r)/2;
    int i=l,j=m+1;
    int temp[r-l+1];
    int k=0;
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=m){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=r){
        temp[k]=arr[j];
        j++;
        k++;   
    }

    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
}


void mergeSort(int arr[],int l, int r){
    if(l==r){
        return;
    }

    int m=(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);

    merge(arr,l,r);
}



int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}