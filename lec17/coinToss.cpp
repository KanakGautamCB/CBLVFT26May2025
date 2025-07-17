#include <iostream>
#include <string>
using namespace std;

void generator(int n, int i, string& s ){
    if(i==n+1){
        cout<<s<<endl;
        return;
    }

    s+='H';
    generator(n,i+1,s);

    s.pop_back();
    s+='T';
    generator(n,i+1,s);
    s.pop_back();

}


int main(){
    int n;cin>>n;
    string s="";
    generator(n,1,s);
}