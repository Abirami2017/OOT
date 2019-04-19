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
			cout<<"\tName :"<<name<<"\n";
			cout<<"\tDesignation:\t"<<des<<"\n";
			cout<<"\tAge :\t"<<a<<"\n";
			cout<<"\tSalary :\t"<<s<<"\n\n\n";
		}
};
main()
{
	int i,n;
	cout<<"Enter the no employee details required :";
	cin>>n;
	employee e[n];
	for(i=0;i<n;i++)
		e[i].read();
	cout<<"\n\tEmployee Details\n\t";
	for(i=0;i<n;i++)
	{
		e[i].display();
	}
}
