#include <iostream>
using namespace std;

class node{
public:
    char data;
    bool finish;
    vector<node*>child;

    node(char c){
        data=c;
        finish=false;
        child.resize(26,nullptr);
    }

};

class trie{
public:
    node* root;

    trie(){
        root = new node('#');
    }

    void insert(string s){
        node* cur=root;
        for(int i=0;i<s.size();i++){
            if(cur->child[s[i]-'a']==nullptr){
                node* x = new node(s[i]);
                cur->child[s[i]-'a']=x;
            }
            cur=cur->child[s[i]-'a'];
        }
        cur->finish=true;
    }


    bool search(string s){
        node* cur=root;
        for(int i=0;i<s.size();i++){
            if(cur->child[s[i]-'a']==nullptr){
                return false;
            }
            cur=cur->child[s[i]-'a'];
        }
        return cur->finish;
    }

    void remove(string s){
        node* cur=root;
        for(int i=0;i<s.size();i++){
            if(cur->child[s[i]-'a']==nullptr){
                return;
            }
            cur=cur->child[s[i]-'a'];
        }
        cur->finish=false;
    }
};

int main(){

    trie T;

    T.insert("code");
    T.insert("coder");
    T.remove("coder");
    cout<<T.search("coder")<<endl;

}