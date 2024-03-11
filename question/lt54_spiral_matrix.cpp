#include<iostream>
#include<vector>
using namespace std;
class solution
{
    public:
     vector<int> spiral(vector<vector<int>> &matrix)
     {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();

        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        int count=0;
        int total=row*col;

        while(count<total)
        {
            for(int index=startcol;index <= endcol;index++)
            {
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;
            for(int index=startrow;index<=endcol;index++)
            {
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;
            for(int index=endcol;index>=startcol;index--)
            {
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;
            for(int index=endrow;index>=startrow;index--)
            {
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
return ans;
     }
};
int main()
{
    vector<vector<int>>s(3,vector<int>(3));
    int p;
    cout<<"enter the number";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cin>>s[i][j];
        }
    }
    cout<<"display the data "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    solution t;
    vector<int> arr=t.spiral(s);
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
/*enter the number1
2
3
4
5
6
7
8
9
display the data 
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/