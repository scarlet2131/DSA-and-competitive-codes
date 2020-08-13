#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
void print(struct node* h)
{

	struct node* temp1 = h;
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
void k_rev(struct node* head,int k)
{
	struct node* temp=head;
	int i=0,c=0;
	int count=0;
	struct node* curr;
	struct node* next;
	struct node* prev=NULL;
	struct node* t1=head;
	struct node* h;

	while(temp!=NULL)
	{
		count++;
		temp= temp->next;
	}
	float f = float(count)/float(k);
// cout<<ceil(f)<<endl;
	temp=head;
	while(temp!=NULL)
	{
		curr=temp;
		prev =NULL;

		while(i<k && c<count && curr->next!=NULL)
		{
			
			next = curr->next;
			curr->next = prev;
			prev =curr;
			cout<<curr->data<<"c"<<endl;
			cout<<next->data<<"n"<<endl;
			curr=next;
			c++;
			i++;
			if(i==k && c==k)
			{
				h=prev;
			}
			
		}
		cout<<c<<"ccc"<<endl;
		cout<<"1"<<endl;
		// cout<<h->data<<" "<<head->data<<endl;
		print(h);
		cout<<" pred "<<prev->data<<" curd "<<curr->data<<" "<<" nd "<<next->data<<endl;
		// cout<<temp->data<<endl;
		if(c<count-1)
		{
			temp->next = curr;
		}
		
		
		
		if(temp!=head)
		{
			t1->next = prev;
			cout<<t1->data<<"t1"<<endl;
			cout<<temp->data<<"temp"<<endl;
		}
		// cout<<temp->data<<endl;
		t1 = temp;

		temp = temp->next;
		

		i=0;
		cout<<"2"<<endl;
		print(h);
	}

	// temp = h;
	// while(temp!=NULL)
	// {
	// 	cout<<temp->data<<endl;
	// 	temp = temp->next;
	// }
		
		



	
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
		int k;
		cin>>k;
		print(head);
		
		k_rev(head,k);
	}
}