#include<iostream>
#include<cstdlib>
using namespace std;
class account
{
	private:
		int  a,s,amt=0,t=0,w;
		char name[20],des[20],ac[20];
	public:
		void create()		//Date input
		{
			cout<<"\n\nEnter the Details\n";
			cout<<"Account Number :"<< rand()+10000<<"\n";
			
			cout<<"Enter the account type : ";
			cin>>ac;
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter the designation : ";
			cin>>des;
			cout<<"Enter the age : ";
			cin>>a;
			cout<<"Enter the salary : ";
			cin>>s;
		}
		void deposite()		//Amount to deposite
		{
			if(t==0)
				cout<<"\n*****Welcome to the bank*****\n";
			cout<<"Enter the amount to be deposited :\n";
			cin>>amt;
			t=t+amt;
			cout<<"t="<<t;
		}
		void withdraw()		//Amount to withdraw
		{
			cout<<"Enter the amount to withdraw : \n";
			cin>>w;
			if(t==0 || t<w)
				cout<<"No sufficient balance \n";
			else
				t=t-w;
		}
		void display()		//Data display
		{
			cout<<"\tCurrent Balance : "<<t;
		}
		
};
main()
{
	int n,f=1;
	account a;
	do
	{
		cout<<"Choose:\n\t1.Create\n\t2.Deposite\n\t3.Withdraw\n\t4.Display\n";
		cin>>n;
		switch(n)
		{
			case 1: a.create();
					break;
			case 2: a.deposite();
					break;
			case 3: a.withdraw();
					break;
			case 4: a.display();
					break;
			default: cout<<"Invaild";
		}
		cout<<"Press 1,to continue: \n";
		cin>>f;
	}while(f==1);
	
}
