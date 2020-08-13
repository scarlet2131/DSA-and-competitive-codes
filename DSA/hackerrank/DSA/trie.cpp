#include<bits/stdc++.h>
using namespace std;
struct trie
{
    map<char,trie *> child;
    map<char,int> f;
    bool end;
    
};

trie *root=NULL;
trie *getTrieNode(){
    trie *temp = new trie;
    temp->end = false;
    return temp;
}
void insert(string s)
{
        if(root==NULL)
        {
            root=getTrieNode();
            // cout << "new";
        }
        trie *curr=root;
        for(int i=0;i<s.length();i++)
        {
            char x=s[i];
            trie *next=curr->child[x];
            if(next==NULL)
            {
                next=getTrieNode();
                curr->child[x]=next;
                curr->f[x]=1;
            }
            else
            {
                curr->f[x]++;
                
            }
            curr=next;

        }
        curr->end=true;
        // cout << "new";
}

int query(string p)
{
    // cout << "new";
    trie *curr=root;
    int c=0;
    for(int i=0;i<p.length();i++)
    {
        char x=p[i];
        // cout << "new";
        trie *next=curr->child[x];
        if(!next)
        {
            return 0;
        }
        else
        {
            c=curr->f[x];
            curr=next;
            
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(s1 == "add")
        {
            insert(s2);
        }
        else 
        {
            if(root == NULL)
                cout << "0\n";
            else
            {
                int ans = query(s2);
                cout<< ans << endl;
            }
            
        }

    }
}