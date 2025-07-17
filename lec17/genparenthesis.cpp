#include <iostream>
#include <string>
using namespace std;

void generator(int o, int c, string& s){
    if(o==0 && c==0){
        cout<<s<<endl;
    }

    if(o>0){
        s+='(';
        generator(o-1,c,s);
        s.pop_back();
    }

    if(c>0){
        s+=')';
        generator(o,c-1,s);
        s.pop_back();
    }
}

int main(){
    int n;cin>>n;
    string s="";
    generator(n,n,s);
}