#include <iostream>
#include <string>
using namespace std;

void generator(string& s,int i){

    if(i==s.size()){
        cout<<s<<endl;
    }

    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        generator(s,i+1);
        swap(s[i],s[j]);
    }

}

int main(){
    string s;cin>>s;
    generator(s,0);
}