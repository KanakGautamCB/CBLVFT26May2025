#include <iostream>
using namespace std;

int addelEment(int*& arr, int& sz, int& cnt, int val){
    if(sz>cnt){
        arr[cnt]=val;
        cnt++;
    }else if(sz==cnt){
        cout<<sz<<" "<<cnt<<endl;
        int* brr = new int[2*sz];
        for(int i=0;i<sz;i++){
            brr[i]=arr[i];
        }
        delete arr;
        arr=brr;
        sz=2*sz;
        arr[cnt]=val;
        cnt++;
    }

}

int main(){
    int* arr = new int[1];
    int sz=1,cnt=0;

    addelEment(arr,sz,cnt,1);
    addelEment(arr,sz,cnt,2);
    addelEment(arr,sz,cnt,3);
    addelEment(arr,sz,cnt,4);
    addelEment(arr,sz,cnt,5);
    addelEment(arr,sz,cnt,6);

    cout<<sz<<endl;
    for(int i=0;i<cnt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    


}