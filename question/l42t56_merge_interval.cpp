#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>&intervals) {
        int k=0;
         sort(intervals.begin(), intervals.end());
        for(int i=1;i<intervals.size();i++){
            if(intervals[k][1]>=intervals[i][0]){
                intervals[k][1]=max(intervals[k][1],intervals[i][1]);
            }else{
                k++;
                intervals[k]=intervals[i];
            }
        }
        intervals.resize(k+1); // Resize to include only merged intervals
        return intervals;
    }
int main(){
    int row, col;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>col;
    cout<<"enter your data"<<endl;
    vector<vector<int>> intervals(row, vector<int>(col));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>intervals[i][j];
        }
    }
    vector<vector<int>> res= merge(intervals);
    cout<<"your merged intervals are: "<<endl;
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
/*Enter the number of rows and columns: 4
2
enter your data
1
3
2
6
8
10
15
18
your merged intervals are:
1 6 
8 10
15 18
PS D:\question\question>*/