#include<iostream>
#include<cstdlib>
using namespace std;
class student
{
	protected:
		int r,z,a;
		char name[20];
	public:
	
		void create()		//Date input
		{
			cout<<"\n\nEnter the Details\n";
			cout<<"Enter roll number :";
			cin>>r;
			cout<<"Enter the name : ";
			cin>>name;
		}
		void display()		//Data display
		{
			cout<<"\nRoll number :"<<r;
			cout<<"\nName :"<<name;	
		}
		
};
class sports
{
	protected: 
		int m;
	public:
		void accept()	//sports mark input
		{
			cout<<"Enter the spors mark :";
			cin>>m;
		}
		void sport_dis()
		{
			cout<<"\nSports mark :"<<m;
		}
};

class statement: public student,public sports
{
	public:
		int m1,m2,m3;
		void mark()	//input mark
		{
			cout<<"Enter 3 marks: ";
			cin>>m1>>m2>>m3;
		}
		void total()
		{
			cout<<"\nResult : "<<m+m1+m2+m3;
		}
};

main()
{
	int n,f=1;
	statement s[20];
	do
	{
		cout<<"Choose:\n\t1.Create\n\t2.Display\n\t3.Insert sports mark\n\t4.Display sports mark\n\t5.Input mark\n\t6.Result\n";
		cin>>n;
		switch(n)
		{
			case 1: s[20].create();
					break;
			case 2: s[20].display();
					break;
			case 3: s[20].accept();
					break;
			case 4: s[20].sport_dis();
					break;
			case 5: s[20].mark();
					break;
			case 6: s[20].total();
					break;
			default: cout<<"Invaild";
		}
		cout<<"\nPress 1,to continue: \n";
		cin>>f;
	}while(f==1);
	
}
