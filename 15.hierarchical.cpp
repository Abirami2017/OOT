#include<iostream>
using namespace std;
class person
{
	protected:
		int a;
		char name[20];
	public:
		void p_create()
		{
			cout<<"\nEnter person details";
			cout<<"\nEnter the name : ";
			cin>>name;
			cout<<"Enter the age";
			cin>>a;
		}
		void p_display()
		{
			cout<<"\nPerson details";
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<a;
		}
};
class employee : public person
{
	protected:
		int  s;
		char des[20];
	public:
		void e_read()		//Date input
		{
			cout<<"Enter the designation : ";
			cin>>des;
			cout<<"Enter the salary : ";
			cin>>s;
		}
		void e_display()		//Data display
		{
			cout<<"\nName :"<<name;
			cout<<"\nDesignation:\t"<<des;
			cout<<"\nAge :\t"<<a;
			cout<<"\nSalary :\t"<<s;
		}
};

class student: public employee
{
	int rollno;
	char branch[20];
	public:
		void s_write()
		{
			cout<<"Enter the roll no : ";
			cin>>rollno;
			cout<<"Enter the branch : ";
			cin>>branch;	
		}
		void s_display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nRoll no : "<<rollno;
			cout<<"\nBranch : "<<branch;
		}
};
main()
{
	int f,c;
	student s;
	do
	{
		cout<<"Choose\n\t1.Insert person details\n\t2.Display person details\n\t3.Insert employee details\n\t4.Display employee details\n\t5.Insert student details\n\t6.Display student details\n";
		cin>>c;
		switch(c)
		{
			case 1: s.p_create();
					break;
			case 2: s.p_display();
					break;
			case 3: s.e_read();
					break;
			case 4: s.e_display();
					break;
			case 5: s.s_write();
					break;
			case 6: s.s_display();
					break;
			default: cout<<"Invalid";
		}
		cout<<"\nPress 1 to continue ";
		cin>>f;
	}while(f==1);
	
}
