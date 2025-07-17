#include <iostream>
using namespace std;

class treeNode{

public:
    int data;
    vector<treeNode*>child;

    treeNode(int d){
        data=d;
    }
};


void dfs(treeNode* i){

    for(int j=0;j<i->child.size();j++){
        dfs(i->child[j]);
    }

}

void bfs(treeNode* root){
    queue<treeNode*>q;
    q.push(root);

    while(q.size()>0){
        treeNode* i=q.front();
        q.pop();
        for(int j=0;j<i->child.size();j++){
            q.push(i->child[j]);
        }
    }
}

int main(){

}