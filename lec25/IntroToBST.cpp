#include <iostream>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left,*right;
    TreeNode(int v){
        val=v;
        left=right=nullptr;
    }
};

TreeNode* search(int t, TreeNode* cur){
    
    if(cur==nullptr){
        return nullptr;
    }

    if(cur->val==t){
        return cur;
    }

    if(cur->val>t && cur->left){
        return search(t,cur->left);
    }else if(cur->val<t && cur->right){
        return search(t,cur->right);
    }
}

TreeNode* insert(int v, TreeNode* cur){
    
    if(cur==nullptr){
        TreeNode* x= new TreeNode(v);
        return x;
    }

    if(cur->val>v){
        cur->left=insert(v,cur->left);
        
    }else if(cur->val<v){
        cur->right=insert(v,cur->right);
    }

    return cur;
}


TreeNode* deleteNode(int v, TreeNode* cur){

    if(cur->val==v){

        if(cur->left==nullptr && cur->right==nullptr){
            delete cur;
            return nullptr;
        }else if(cur->left && cur->right==nullptr){
            return cur->left;
        }else if(cur->right && cur->left==nullptr){
            return cur->right;
        }else{
            TreeNode* l=cur->left;
            while(l->right!=nullptr){
                l=l->right;
            }
            int x=l->val;
            deleteNode(l->val,cur->left);
            cur->val=x;
            return cur;
        }

    }else if(cur->val>v){
        return deleteNode(v,cur->left);
    }else if(cur->val<v){
        return deleteNode(v,cur->right);
    }
}

int main(){

}