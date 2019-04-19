#include <iostream>
#include <cstdlib>
using namespace std;
class employee
{
	public:
		int y,r,e_no;
		char name[20],d[20];
	public:
		void empdetails()
		{
			cout<<"WELCOME";
			cout<<"\nenter the details"<<"\n";
			e_no=rand()+10000;
			cout<<"Enter the ID number : "<<e_no;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"Enter the designation :";
			cin>>d;
			cout<<"Enter the salary :";
			cin>>y;
		}
		void display()		//Data display
		{
			cout<<"\nID number : "<<e_no;
			cout<<"\nName :"<<name;
			cout<<"\nDesignation:\t"<<d;
		}
	
};

class salary: public employee
{
	public:
		void salary1()
		{
			cout<<"\nMonthly salary= "<<y;
		}
		void salaryoyear()
		{
			int r=y*12;
			cout<<"\nAnnual Salary= "<<r;
		}
};
main()
{
		int i,n,c,f;
		salary o1[20];
		do
		{
			cout<<"Choose:\n\t1.Insert\n\t2.display\n\t3.Monthly salary\n\t4.annual salary \n";
			cin>>c;
			switch(c)
			{
				case 1:o1[19].empdetails();
						break;
				case 2:o1[19].display();
						break;
				case 3:o1[19].salary1();
						break;
				case 4:o1[19].salaryoyear();
						break;
			
			}
			cout<<"\nPress 1 to continue";
			cin>>f;
		}while(f==1);
		
		
}



