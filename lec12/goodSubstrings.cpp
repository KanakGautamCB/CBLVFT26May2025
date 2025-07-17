#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool isGood=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            isGood=false;
        }
    }
    if(isGood)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}