#include <iostream>
using namespace std;

void toh(int n, char src, char des, char help){

    if(n==1){
        cout<<"Moved disk "<<n<<" from "<<src<<" to "<<des<<endl;
        return;
    }

    toh(n-1,src,help,des);

    cout<<"Moved disk "<<n<<" from "<<src<<" to "<<des<<endl;

    toh(n-1,help,des,src);

}

int main(){

    int n;cin>>n;
    toh(n,'A','C','B');
}