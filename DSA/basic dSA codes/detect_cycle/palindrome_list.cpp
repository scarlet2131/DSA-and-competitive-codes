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
int palindrome(struct node* head)
{
	struct node* temp =head;
	struct node* h;
	struct node* t1;
	struct node* t;
	struct node* t2;
	struct node* next;
	struct node* curr;
	struct node* prev;


	int len=0;
	int an=0;
	while(temp!=NULL)
	{
		len++;
		temp=temp->next;
	}
	temp = head;
	int c=0;
	if(len%2==0)
	{
		cout<<"even"<<" ";
		while(c!=len/2)
		{
			c++;
			temp=temp->next;

		}
		curr=temp;
		prev = NULL;
		
		
		while(curr!=NULL)
		{

			next = curr->next;
			curr->next = prev;
			// cout<<curr->data<<" "<<prev->data<<" "<<next->data<<endl;
			prev = curr;
			curr = next;

		}
		temp->next = NULL;
		temp=head;
		while(temp!=NULL and prev!=NULL)
		{
			// cout<<temp->data<<" ";
			// cout<<prev->data<<endl;
			if(temp->data!=prev->data)
			{
				an=1;
				break;
			}
			temp= temp->next;
			prev= prev->next;


		}
	}
	else{
cout<<"odd"<<" ";

		while(c!=len/2)
		{
			c++;
			temp=temp->next;

		}
		curr=temp;
		prev = NULL;
		
		
		while(curr!=NULL)
		{
cout<<"1"<<endl;
			next = curr->next;
			curr->next = prev;
			  //cout<<curr->data<<" "<<prev->data<<" "<<next->data<<endl;
			prev = curr;
			curr = next;

		}
		temp->next = NULL;
		temp=head;
		cout<<"prev-data"<<prev->data;
		while(temp!=NULL and prev!=NULL)
		{
			cout<<temp->data<<" ";
			cout<<prev->data<<endl;
			if(temp->data!=prev->data)
			{
				an=1;
				break;
			}
			temp= temp->next;
			prev= prev->next;


				
		}
	}
	return 1-an;
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
		
		int p=palindrome(head);
		if(p==1)
		{
			cout<<"palindrome found!!"<<endl;
		}
		else
		{
			cout<<"palindrome not found!!"<<endl;
		}

	}
}