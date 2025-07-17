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

void predfs(node* i){

    cout<<i->data<<endl;

    if(i->left!=nullptr){
        predfs(i->left);
    }

    if(i->right!=nullptr){
        predfs(i->right);
    }
}

void indfs(node* i){

    if(i->left!=nullptr){
        indfs(i->left);
    }

    cout<<i->data<<endl;

    if(i->right!=nullptr){
        indfs(i->right);
    }

}

void postdfs(node* i){

    if(i->left!=nullptr){
        postdfs(i->left);
    }

    if(i->right!=nullptr){
        postdfs(i->right);
    }

    cout<<i->data<<endl;

}


int main(){

}