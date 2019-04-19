#include<iostream>
#include<cstdlib>
using namespace std;
class account
{
	private:
		int  i,a,s,amt,t,w,r,q[100];
		char name[20],ac[20];
	public:
		static int n;
		account()
		{
			amt=0;
			t=0;
		}
		void create()		//Date input
		{
			cout<<"\n\nEnter the Details\n";
			for(i=0;i<n+1;i++)
			{
				r=rand()+10000;
				q[i]=r;	
			}	
			n++;
			cout<<"Account Number :"<<r;
			cout<<"\nEnter the account type : ";
			cin>>ac;
			cout<<"Enter the name : ";
			cin>>name;
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
		}
		int ac_num()
		{
			for(i=0;i<n;i++)
				return q[i];
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
			cout<<"Current Balance : "<<t<<"\n";
		}
		
};
int account :: n;
main()
{
	int n,f=1,id,n1,i;
	account a[20],o[20];
	do
	{
		cout<<"Choose:\n\t1.Create\n\t2.Deposite\n\t3.Withdraw\n\t4.Number of acount\n\t5.View more....\n";
		cin>>n;
		switch(n)
		{
			case 1: a[20].create();
					break;
			case 2: a[20].deposite();
					break;
			case 3: a[20].withdraw();
					break;
			case 4: cout<<"Number of account : "<<account :: n;
					break;
			case 5: cout<<"Enter account number : ";
					cin>>id;
					for(i=0;i<20;i++)
						o[i].ac_num();
					for(i=0;i<20;i++)
					if(id==o[i].ac_num())
					{
						cout<<"Choose:\n\t1.Deposite\n\t2.Withdraw\n\t3.Display\n";
						cin>>n1;
						switch(n1)
						{
							case 1: o[i].deposite();
									break;
							case 2: o[i].withdraw();
									break;
							case 3: o[i].display();
									break;
							default: cout<<"Invaild";
						}
					}
					break;	
			default: cout<<"Invaild";
		}
		cout<<"Press 1,to continue: \n";
		cin>>f;
	}while(f==1);
	
}
