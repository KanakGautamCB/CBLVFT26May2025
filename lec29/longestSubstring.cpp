#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    int i=0,j=-1;
    vector<int>freq(26,0);
    int ans=0;
    int n=s.size();
    while(j<n){
        j++;
        freq[s[j]-'a']++;
        while(freq[s[j]-'a']>1){
            freq[s[i]-'a']--;
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
}