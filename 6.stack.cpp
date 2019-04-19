#include<iostream>
using namespace std;
class stack			//class for stack 
{
	private:
		int i,top,a[10];
	public:
		stack();
		void push(int);
		int pop();
		void display();
};
stack::stack()		//variable initialize
{
	top=-1;
}
void stack::push(int x)	//insert element
{
	if(x>10)
		cout<<"\nStack overflow\n";
	cout<<"Elements :\n";
	for(i=0;i<x;i++)
	{
		top++;
		cin>>a[i];
	}
}
int stack::pop()	//delete element
{
	if(top<0)
		cout<<"\nStack underflow\n";
	return a[top--];
}
void stack::display()	//display
{
	if(top==-1)
		cout<<"\nStack empty\n";
	else
	{
		cout<<"\nThe stack is\n";
		for(i=top;i>=0;i--)
		cout<<a[i]<<" ";
	}
}
main()				//main prgm
{
	int c,x,f=0;
	stack s;
	do
	{
		cout<<"Choose:\n\t1.Push\n\t2.Pop\n\t3.Display\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"\nEnter the no of element\n";
					cin>>x;
					s.push(x);
					f++;
					break;
			case 2: cout<<"\nElement deleted\n";
					s.pop();
					f++;
					break;
			case 3: s.display();
					f++;
					break;
		}
		cout<<"To continue, press 1 : ";
		cin>>f;
	}while(f==1);
}
