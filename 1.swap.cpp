#include<iostream>
using namespace std;
int temp;
void swap() //1
{
	int x,y;
	cout<<"Enter the numbers";
	cin>>x>>y;
	temp=x;
	x=y;
	y=temp;
	cout<<"1.Swaped Numbers: ";
	cout<<x<<" "<<y<<"\n";	
}
void swap(int x,int y) //2
{
	temp=x;
	x=y;
	y=temp;	
	cout<<x<<" "<<y<<"\n";
}
void swap(int *a,int *b)//3
{
	temp=*a;
	*a=*b;
	*b=temp;
}
void swap1(int &x,int &y)//4
{
	temp=x;
	x=y;
	y=temp;	
}
void swap2(int a=3,int b=5)	//5
{
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<"\n";
}
 main()
{
	int a,b,c=0,f=1;
	do
	{
		cout<<"Choose the method to swap two numbers\n\t 1.Without parameters\n\t 2. Call by value\n\t 3.Call by address\n\t 4.Call by referance\n\t 5.Default value\n";
		cin>>c;
		if(c==1)
		{
			swap();
			f++;
		}
		else
		{
			cout<<"Enter the numbers";
			cin>>a>>b;
			switch(c)
			{
				case 2: cout<<"2.Swaped Numbers: ";
						swap(a,b);
						f++;
						break;
				case 3: cout<<"3.Swaped Numbers: ";
						swap(&a,&b);
						cout<<a<<" "<<b<<"\n";
						f++;
						break;
				case 4: cout<<"4.Swaped Numbers: ";
						swap1(a,b);
						cout<<a<<" "<<b<<"\n";
						f++;
						break;
				case 5: cout<<"5.Swaped Numbers: \n";
						swap2(100 );
						f++;
						break;
				default: cout<<"Invalid";
			}
		
		}
		cout<<"\nDo you want to continue,if yes press 1 :";
		cin>>f;
	}while(f==1);
}
