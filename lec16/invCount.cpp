#include <iostream>
using namespace std;


int merge(int arr[],int l,int r){
    int m=(l+r)/2;
    int i=l,j=m+1;
    int temp[r-l+1];
    int k=0;
    int cnt=0;
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }else{
            cnt+=m-i+1;
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

    return cnt;
}


int mergeSort(int arr[],int l, int r){
    if(l==r){
        return 0;
    }

    int ans=0;
    int m=(l+r)/2;
    ans+= mergeSort(arr,l,m);
    ans+= mergeSort(arr,m+1,r);

   ans+= merge(arr,l,r);

   return ans;
}



int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}