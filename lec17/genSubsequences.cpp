#include <iostream>
#include <string>
using namespace std;

void generator(string& str, int i, string& s ){
    if(i==str.size()){
        cout<<s<<endl;
        return;
    }

    s+=str[i];
    generator(str,i+1,s);

    s.pop_back();
    generator(str,i+1,s);

}


int main(){
    string str;
    cin>>str;
    string s="";
    generator(str,0,s);
}
