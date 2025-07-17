#include <iostream>
using namespace std;

int main(){
    int x=12;
    char c='c';

    void* ptr = &c;
    cout<<ptr<<endl;
}