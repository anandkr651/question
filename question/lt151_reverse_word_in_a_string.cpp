#include<iostream>
using namespace std;
class solution{
    public:
    string reverseword(string s)
    {
        int i=0,x=s.size();
        string ans="";
        while(i<x)
        {
            string temp="";
            while(s[i]==' ')
            i++;
            while(s[i]!=' ' && i<x)
            {
                temp=temp+s[i];
                i++;
            }
            if(temp.size()>0)
            {
                if(ans.size()==0)
                {
                    ans=temp;
                }
                else{
                    ans=temp+" "+ans;
                }
            }
        }
        s=ans;
        return s;
    }

};
int main()
{
    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);
    solution t;
   cout<<t.reverseword(s);
}
/*enter the string 
the sky is blue
blue is sky the
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/