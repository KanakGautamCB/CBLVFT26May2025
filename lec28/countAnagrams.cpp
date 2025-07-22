#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    vector<int>freqs(26,0),freqt(26,0);
    for(int i=0;i<t.size();i++){
        freqt[t[i]-'a']++;
    }

    int i=0,j=0,ans=0;
    while(j<s.size()){
        if(j<t.size()-1){
            freqs[s[j]-'a']++;
            j++;
        }else if(j==t.size()-1){
            freqs[s[j]-'a']++;
            bool match=true;
            for(int k=0;k<26;k++){
                if(freqs[k]!=freqt[k])match=false;
            }
            if(match){
                ans++;
            }
            i++;
            j++;
        }else{
            freqs[s[j]-'a']++;
            freqs[s[i-1]-'a']--;
            bool match=true;
            for(int k=0;k<26;k++){
                if(freqs[k]!=freqt[k])match=false;
            }
            if(match){
                ans++;
            }
            i++;
            j++;
        }
    }

    cout<<ans<<endl;


}