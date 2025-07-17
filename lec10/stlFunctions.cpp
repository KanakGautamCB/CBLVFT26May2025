#include <iostream>
using namespace std;

bool comparator(int x, int y){
    if(x>y)return true;
    return false;
}

int main(){
    int arr[5] = {5, 3, 6, 1, 9};

    // sort(arr, arr+5, comparator);

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }


    // reverse(arr,arr+5);

    cout<<find(arr,arr+5,0)<<" "<<(arr+5)<<endl;

    //cout<<count(arr, arr+3,3)<<endl;

    //cout<<*min_element(arr,arr+5)<<endl;

    //cout<<*max_element(arr,arr+5)<<endl;

    //cout<<*upper_bound(arr,arr+5,6)<<endl;

    //cout<<*lower_bound(arr,arr+5,7)<<endl;
}