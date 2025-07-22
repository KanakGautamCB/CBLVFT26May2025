#include <iostream>
using namespace std;

class node{
public:
    int data;
    int freq;
    node *left, *right;

    node(int c){
        data=c;
        left=nullptr;
        right=nullptr;
        freq=0;
    }

};

class trie{
public:
    node* root;

    trie(){
        root = new node(-1);
    }

    void insert(int x){
        node* cur=root;
        for(int i=31;i>=0;i--){
            cur->freq++;
            //cout<<i<<" "<<x<<endl;
            if(x&(1<<i)){
                if(cur->right==nullptr){
                    node* z= new node(1);
                    cur->right=z;
                }
                
                cur=cur->right;
                //cout<<cur->data<<endl;

            }else{
                if(cur->left==nullptr){
                    node* z= new node(0);
                    cur->left=z;
                }
                
                cur=cur->left;
            }
        }
        cur->freq++;
    }


    bool search(int x){
        node* cur=root;

        for(int i=31;i>=0;i--){
            
            if(x&(1<<i)){
                
                if(cur->right==nullptr or cur->right->freq==0){
                   return false;
                }
                cur=cur->right;
                
            }else{
                if(cur->left==nullptr or cur->left->freq==0){
                    return false;
                }
                cur=cur->left;
            
            }
        }
        return true;
    }

    void erase(int x){
        node* cur=root;

        for(int i=31;i>=0;i--){
            cur->freq--;
            if(x&(1<<i)){
                node* nx=cur->right;
                if(nx==nullptr){
                    return;
                }
                cur=nx;
            }else{
                node* nx=cur->left;
                if(nx==nullptr){
                    return;
                }
                cur=nx;
                
            }
        }
        cur->freq--;
    }
};


int main(){
    trie T;
    T.insert(15);
    T.insert(8);
    T.erase(15);
    //cout<<"check"<<endl;
    cout<<T.search(15)<<endl;
    cout<<T.search(8)<<endl;
}