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
struct node* head = NULL;
void print()
{
	struct node* temp1 =head;
	// cout<<1<<endl;
	// cout<<head->data<<endl;
	if(temp1==NULL)
	{
		cout<<"no data "<<endl;
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
	struct node* curr = new node(data);
	struct node* temp = head;
	if(head==NULL)
	{
		
		head = curr;
		return ;
	}
	else
	{
		
		while(temp->next!=NULL)
		{
			temp= temp->next;
		}
		temp->next = curr;
	}
}
struct node* remove_dup(struct node* head)
{
	struct node* temp = head;
	struct node* curr = head;
	struct node* p;
	while(temp!=NULL)
	{
		curr= temp;
		int d1= curr->data;
		temp = temp->next;
		int d2;
		p= temp;
		while(p!=NULL)
		{
			d2 = p->data;
			if(d1==d2)
			{
				curr->next = p->next;
			}
			p= p->next;
		}
	}
	return head;

	
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		head =NULL;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			insert(a[i]);
		}
		print();
		head = remove_dup(head);
		print();

	}
}