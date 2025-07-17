#include <iostream>
using namespace std;

int main(){
    int x=12;
    int* xptr = &x;
    int** xxptr = &xptr;
    int*** xxxptr = &xxptr;

    cout<<xptr<<" "<<xxptr<<" "<<xxxptr<<endl;
    cout<<*xptr<<" "<<xxptr<<" "<<xxxptr<<endl;
    cout<<*xptr<<" "<<**xxptr<<" "<<***xxxptr<<endl;
}