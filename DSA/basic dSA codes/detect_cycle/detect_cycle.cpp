#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
void print()
{

	struct node* temp1 = head;
	if(temp1==NULL)
	{
		cout<<"No Data"<<endl;
		return;
	}
	else
	{
		while(temp1!=NULL)
		{
			cout<<temp1->data<<" -> ";
			temp1 = temp1->next;
		}
		cout<<"NULL"<<endl;
	}
	
	
}
void insert(int data)
{
	struct node* curr = new node();
		curr->data = data;
		curr->next = NULL;
	struct node* temp = head;
	if(head==NULL)
	{
		//cout<<"NULL";
		head = curr;
		return;
	}
	else
	{
		//cout<<"!NULL";
		
		while(temp->next!=NULL)
		{
			//cout<<temp->data<<endl;
			temp = temp->next;
		}
		
		temp->next= curr;
		//cout<<curr->data<<endl;

	}
	
}
int  detect(struct node* head)
{
	int fast=0,slow=0;
	int f=0;
	struct node* temp = head;
	while(temp!=NULL)
	{
		if(fast== slow)
		{
			f=1;
			return f;
		}
		temp = temp->next;
	}
	return f;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 head=NULL;
		int n;
		cin>>n;
		
		int c;
		for(int i=0;i<n;i++)
		{
			cin>>c;
			insert(c);
		}
		print();
		int ans =detect(head);
		if(ans==1)
		{
			cout<<"Cycle found";
		}
		else
		{
			cout<<"not found";
		}

	}
}