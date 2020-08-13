#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node(int val)
	{
		this->data = val;
		this->next = NULL;
	}
};
int  detect(struct node* head)
{
	struct node* slow=head;
	struct node* fast = head;
	//int fast=0,slow=0;
	int f=0;
	struct node* temp = head;
	while(1)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast == slow)
		{
			
			f=1;
			return f;
		}
		
	}
	return f;
}
int length(struct node* head)
{
	struct node* slow=head;
	struct node* fast = head;
	struct node* n;
	int f=0;
	int c=0;
	struct node* temp = head;
	while(1)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast == slow)
		{
			
			
			n= fast;
			break;
		}
		
	}
	temp =slow;
	while(slow!=temp->next)
	{
		f++;
		cout<<temp->data<<" ";
		temp= temp->next;
	}
	cout<<temp->data;
	cout<<endl;
	
	return f+1;
}
int main()
{
	node *head = new node(1);
	head->next = new node(2);
	head->next->next =new node(3);
	head->next->next->next =new node(4);
	head->next->next->next->next = new node(5);
	 head->next->next->next->next->next =head->next->next;
	int ans = detect(head);
	if(ans==1)
		{
			cout<<"Cycle found";
		}
		else
		{
			cout<<"not found";
		}
		cout<<"length of cycle:"<<" "<<length(head)<<endl;



}