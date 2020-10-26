#include <bits/stdc++.h>
int board[10][10];  // 0 if empty, -1 if invalid, a number if exists
void print(){
    cout<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(board[i][j]!=-1){
                cout<<board[i][j]<<" ";
                if(board[i][j]<10){
                    cout<<" ";
                }
            }
            else{
                cout<<"##"<<" ";
            }
        }
        cout<<endl;
    }
    exit(0);
}
int limit;
unordered_map<int,pair<int,int>> present;
vector<int> a{-1,-1,0,1,1,1,0,-1},b{0,1,1,1,0,-1,-1,-1};
int is_there[100]={},ans=0;
void dfs(int ii,int jj,int n){
    if(n==limit+1){
        print();
    }
    int i,j;
    if(is_there[n]){
        for(int k=0;k<8;k++){
            i=ii+a[k];
            j=jj+b[k];
            if(i>=0 && i<10 && j>=0 && j<10){
                if(board[i][j]==n){
                    dfs(i,j,n+1);
                }
            }
        }
        return;
    }
    for(int k=0;k<8;k++){
        i=ii+a[k];
        j=jj+b[k];
        if(i>=0 && i<10 && j>=0 && j<10){
            if(board[i][j]==0){
                board[i][j]=n;
                dfs(i,j,n+1);
                board[i][j]=0;
            }
        }
    }
}
int32_t main()
{
    she_taught_me_to_code

    cin>>limit;
    for(int i=1;i<=limit;i++){
        is_there[i]=0;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>board[i][j];
            if(board[i][j]!=-1 && board[i][j]!=0){
                present[board[i][j]]={i,j};
                is_there[board[i][j]]=1;
            }
        }
    }
    dfs(present[1].first,present[1].second,2);
    cout<<"Not Found\n";
}
