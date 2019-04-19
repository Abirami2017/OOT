#include<iostream>
using namespace std;
class employee
{
	private:
		int  a,s;
		char name[20],des[20];
	public:
		void read()		//Date input
		{
			cout<<"\n\nEnter the Details\n";
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter the designation : ";
			cin>>des;
			cout<<"Enter the age : ";
			cin>>a;
			cout<<"Enter the salary : ";
			cin>>s;
		}
		void display()		//Data display
		{
			cout<<"\nName :"<<name;
			cout<<"\nDesignation:\t"<<des;
			cout<<"\nAge :\t"<<a;
			cout<<"\nSalary :\t"<<s;
		}
};
main()
{
	int i,n,c,f;
	cout<<"Enter the no employee details required :";
	cin>>n;
	employee e[n];
	do
	{
			cout<<"Choose : \n\t1. Create\n\t2. Dispaly \n";
			cin>>c;
			switch(c)
			{
				case 1: for(i=0;i<n;i++)
								e[i].read();
						break;
				case 2: cout<<"\n************************Employee Details******************************";
						for(i=0;i<n;i++)
							e[i].display();	
						break;
				default : cout<<"\nInvalid";
			}
		cout<<"\nPress 1 to continue";
		cin>>f;
	}while(f==1);
}
