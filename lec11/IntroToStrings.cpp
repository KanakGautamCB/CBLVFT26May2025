#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="Coding", str1="hi";
    // str1=str+str1;
    // cout<<str1<<endl;

    //cout<<(str<str1)<<endl;

    //cout<<str.find('l')<<endl;

    //cout<<str.substr(2,3)<<endl;

    //reverse(str.begin(), str.end());

    //sort(str.begin()+1,str.end());

    string arr[] = {"hello", "hi", "bye"};

    sort(arr,arr+3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }


}