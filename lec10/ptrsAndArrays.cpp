#include <iostream>
using namespace std;

int main(){

    int arr[4] ={1,2,3,4};

    int* ptr = arr;
    int x=12;
    ptr =&x;

    //arr =&x; not possible

    for(int i=0;i<4;i++){
        cout<<*(ptr+i)<<" "<<ptr[i]<<endl;
    }
}