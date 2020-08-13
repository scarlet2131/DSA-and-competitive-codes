#include<bits/stdc++.h>
using namespace std;

class Stack
{
private: 
    static const int max = 100; 
    int a[max]; 
	int top;
	

public:
	Stack(){ 
		
		top=-1;}
	bool isFull();
	bool isEmpty();
	int pop();
	void push(int x);
};
bool Stack::isEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
bool Stack::isFull()
{
	if(top==max-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"stack empty"<<endl;
		abort();
	}
	int x=a[top];
	top--;
	return x;


}
void Stack::push(int x)
{
	if(isFull())
	{
		cout<<"stack is full!"<<endl;
		abort();
	}
	top++;
	a[top]=x;
	
}
int main()
{
	Stack s;
	int t;
	cin>>t;
	int max=10;
	while(t--)
	{
		
		int x;
		
		for (int i = 0; i < max; ++i)
		{
			cin>>x;
			
			s.push(x);
	
		}
		for(int i=0;i<max;i++)
		{
			cout<<s.pop()<<" ";
			
		}
		cout<<endl;
		
	}
}