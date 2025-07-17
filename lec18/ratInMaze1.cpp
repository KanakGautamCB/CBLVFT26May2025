#include <iostream>
using namespace std;

bool check(int n, int m, int i, int j, vector<vector<char>>&maze){
    if(i>=n || j>=m){
        return false;
    }

    if(maze[i][j]=='X'){
        return false;
    }

    if(i==n-1 && j==m-1){
        return true;
    }

    bool ans=false;

    ans |= check(n,m,i,j+1,maze);

    ans|= check(n,m,i+1,j,maze);

    return ans;

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>maze(n, vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
        }
    }

    cout<<check(n,m,0,0,maze)<<endl;


}