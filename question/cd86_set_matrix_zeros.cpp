#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&matrix){
    vector<vector<int>>ans=matrix;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            int m=0;
            if(matrix[i][j]==0){
                while(m<matrix[0].size()){
                    ans[i][m]=0;
                    m++;
                }
                int n=0;
                while(n<matrix.size()){
                    ans[n][j]=0;
                    n++;
                }
            }
        }
    }
    matrix=ans;
}
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"enter the data ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"display the matrix "<<endl;
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    solve(matrix);
    cout<<"inserting zero after the matrix "<<endl;
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
/*Enter the number of rows and columns: 2
3
enter the data 7
19
3
4
21
0
display the matrix 
7 19 3
4 21 0
inserting zero after the matrix
7 19 0
0 0 0
PS D:\question\question>*/