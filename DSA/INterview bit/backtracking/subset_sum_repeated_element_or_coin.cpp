#include<bits/stdc++.h>
using namespace std;
bool subset_repeat(vector<int> v,int n,int sum,int level,vector<int> nv,int k)
{
	if(sum>k)
	{
		return false;
	}
	if(level==n)
	{
		if(sum==k)
		{
			for(int i=0;i<nv.size();i++)
			{
				cout<<nv[i]<<" ";
			}
			cout<<endl;
		}
		return false;
	}/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> v;
void s(TreeNode* root, int sum,int ans,vector<int> g)
{
    TreeNode* l=root;
    if(root==NULL)
    {
        return;
    }
    if(l->left==NULL and l->right==NULL)
    {
        if(ans+l->val==sum)
        {
            g.push_back(l->val);
          
             v.push_back(g);
    
        }
        return;
    }
       
    g.push_back(l->val);
    s(l->left,sum,ans+l->val,g);
    
    // g.push_back(l->val);
    s(l->right,sum,ans+l->val,g);
   
}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        v.clear();
        vector<int>g;
        
        s(root,sum,0,g);
        return v;
    }
};
	vector<int> temp=nv;
	temp.push_back(v[level]);
	return subset_repeat(v,n,sum+v[level],level,temp,k) or subset_repeat(v,n,sum,level+1,nv,k);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int k;
		cin>>k;
		vector<int> nv;
		subset_repeat(v,n,0,0,nv,k);
	}
}