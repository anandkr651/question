#include<iostream>
using namespace std;
class Trienode {
    public:
    char data;
    Trienode *children[26];
    bool isterminal;
    
    Trienode(char ch){
        data=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isterminal=false;
    }
};
class Trie{
    public:
    Trienode* root;
    Trie()
    {
        root=new Trienode('\0');
    }
    void insertutil(Trienode* root,string word)
    {
       //base case
       if(word.length()==0)
       {
        root->isterminal=true;
        return;
       }
       //assumption ,word will be in capital
       int index=word[0]-'A';
       Trienode* child;

       //present
       if(root->children[index]!=NULL)
       {
        child=root->children[index];
       }
       else{
        //absent
        child=new Trienode(word[0]);
        root->children[index]=child;
       }
       //recursion
       insertutil(child,word.substr(1));
    }
    void insertword(string word)
    {
        insertutil(root,word);
    }

    bool searchutil(Trienode* root,string word)
    {
       //base case
       if(word.length()==0)
       {
           return root->isterminal;
       }
       int index=word[0]-'A';
       Trienode* child;
       //present
       if(root->children[index]!=NULL)
       {
        child=root->children[index];
       }
       else{
        //absent
        return false;
       }
         //recrusion
         return searchutil(child,word.substr(1));
    }
    bool searchword(string word)
    {
       return searchutil(root,word);
    }
};

int main()
{
    Trie *t=new Trie();
    t->insertword("ABC");
    t->insertword("DO");
    t->insertword("TIME");
    t->insertword("ANAND");
    cout<<t->searchword("ABC")<<endl;
    cout<<t->searchword("AB")<<endl;
    return 0;       
}
/*1
0
PS C:\Users\DELL\OneDrive\Desktop\question\STL>*/