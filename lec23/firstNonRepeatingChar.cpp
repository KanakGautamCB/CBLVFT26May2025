#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main(){
    string s;cin>>s;
    vector<int>freq(26,0);

    queue<char>q;

    for(int i=0;i<s.size();i++){
        
        if(freq[s[i]-'a']==0){
            q.push(s[i]);
        }
        freq[s[i]-'a']++;

        while(q.size()>0 && freq[q.front()-'a']>1){
            q.pop();
        }

        if(q.size()==0){
            cout<<-1;
        }else{
            cout<<q.front();
        }

    }
    cout<<endl;

}