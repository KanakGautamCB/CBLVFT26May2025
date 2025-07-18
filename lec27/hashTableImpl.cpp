#include <iostream>
using namespace std;

class node{
public:
    int key;
    int value;
    node* next;
    node* prev;

    node(int k, int v){
        key=k;
        value=v;
        next=nullptr;
        prev=nullptr;
    }

};

class hashmap{
public:
    int sz;
    vector<node*>v;
    float lf=1.0;
    int m=0;

    hashmap(int size){
        sz=size;
        v.resize(sz,nullptr);
    }

    int hashFunction(int key){
        return (key%sz);
    }

    void insert(int key, int val){
        int hid=hashFunction(key);
        node* z = new node(key,val);
        z->next=v[hid];
        v[hid]->prev=z;
        v[hid]=z;
        m++;
        float d=m;
        d/=sz;
        if(d>lf){
            rehash();
        }

    }

    void remove(int key){
        int hid=hashFunction(key);
        node* cur=v[hid];
        while(cur!=nullptr && cur->key!=key){
            cur=cur->next;
        }
        node* p=cur->prev;
        node* n=cur->next;
        p->next=n;
        n->prev=p;
        delete cur;
        m--;

    }

    int search(int key){
        int hid=hashFunction(key);
        node* cur=v[hid];
        while(cur!=nullptr && cur->key!=key){
            cur=cur->next;
        }
        if(cur==nullptr){
            return 0;
        }else{
            cur->value;
        }
    }

    void rehash(){
        int oldsz=sz;
        vector<node*>oldv=v;

        sz=2*sz;
        v.resize(sz,nullptr);

        for(int i=0;i<oldsz;i++){
            node* cur=oldv[i];
            while(cur!=nullptr){
                int k=cur->key,val=cur->value;
                insert(k,val);
                node* z=cur;
                cur=cur->next;
                delete z;
            }
        }
    }

};



int main(){

}