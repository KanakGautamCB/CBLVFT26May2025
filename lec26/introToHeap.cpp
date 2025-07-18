#include <iostream>
using namespace std;

void heapify(int i, vector<int>&v){

        int mx=v[i],z=i;

        if(2*i+1<v.size() && mx<v[2*i+1]){
            mx=v[2*i+1];
            z=2*i+1;
        }

        if(2*i+2<v.size() && mx<v[2*i+2]){
            mx=v[2*i+2];
            z=2*i+2;
        }

        if(i!=z){
            swap(v[i],v[z]);
            heapify(z,v);
        }
        
}

void push(int x, vector<int>&v){
    int i=v.size();
    v.push_back(x);

    while(i>=0){
        heapify(i,v);
        if(i==0)break;
        i=(i-1)/2;
    }

}

void pop(vector<int>& v){
    int i=v.size()-1;
    swap(v[0],v[i]);

    v.pop_back();
    heapify(0,v);
}

int top(vector<int>& v){
    return v[0];
}

int size(vector<int>& v){
    return v.size();
}

bool empty(vector<int>& v){
    return (v.size()>0);
}




int main(){

    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--){
        heapify(i,v);
    }

    push(16,v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    pop(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    
    
}

