#include <iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int v){
        this->val=v;
        this->next=nullptr;
    }
};

class list{
public:
    node* head;
    node* tail;

    list(node* head){
        this->head=head;
        if(head->next==nullptr){
            this->tail=head;
        }
    }

    void insertAtHead(int x){
        node* n = new node(x);
        n->next=head;
        head=n;
    }

    void insertAtTail(int x){
        node* n= new node(x);
        tail->next=n;
        tail=n;
    }

    void insertAtIndex(int x, int i){
        node* n= new node(x);
        node* cur=head;
        int j=1;
        while(j<i-1){
           cur=cur->next;
           j++; 
        }
        node* z=cur->next;
        cur->next=n;
        n->next=z;
    }

    void deleteAtHead(){
        node* headNext = head->next;
        delete head;
        head=headNext; 
    }

    void deleteAtTail(){
        node* cur=head;
        while(cur->next!=tail){
            cur=cur->next;
        }

        delete tail;
        tail=cur;
        tail->next=nullptr;
    }

    void deleteAtIndex(int i){
        node* cur=head;
        int j=1;
        while(j<i-1){
           cur=cur->next;
           j++; 
        }
        node* z= cur->next->next;
        delete cur->next;
        cur->next=z;
    }

    int length(){
        int cnt=0;
        node* cur=head;
        while(cur!=nullptr){
            cur=cur->next;
            cnt++;
        }
        return cnt;
    }

    bool search(int x){

        node* cur=head;
        while(cur!=nullptr){
            if(cur->val==x){
                return true;
            }
            cur=cur->next;
        }
        return false;
    }
};

int main(){





}