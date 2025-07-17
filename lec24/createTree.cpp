#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *left, *right;

    node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }

};

node* createTree(int& i,vector<int>& v){
    if(v[i]==-1){
        return nullptr;
    }

    node* x= new node(v[i]);

    i++;
    x->left=createTree(i,v);

    i++;
    x->right=createTree(i,v);

    return x;

}

void predfs(node* i){

    cout<<i->data<<endl;

    if(i->left!=nullptr){
        predfs(i->left);
    }

    if(i->right!=nullptr){
        predfs(i->right);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;

    node* root=createTree(i,v);

    predfs(root);
}