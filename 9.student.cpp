#include<iostream>
using namespace std;
class student
{
	char name[50],branch[20];
	int rollno;
	public:
		static int c;
		void write()
		{
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter the roll no : ";
			cin>>rollno;
			cout<<"Enter the branch : ";
			cin>>branch;
			c++;
			
		}
		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nRoll no : "<<rollno;
			cout<<"\nBranch : "<<branch;
		}
};
int student :: c(0);

main()
{
	int c,n,i,f=0;
	cout<<"Enter the number of students : ";
	cin>>n;
	student s[n];
	do
	{
	
			cout<<"Choose : \n\t1. Create bio data\n\t2. Dispaly biodata\n\t3.No:of object";
			cin>>c;
			switch(c)
			{
				case 1: for(i=0;i<n;i++)
							s[i].write();	
						break;
				case 2: cout<<"\n************************Student Details******************************";
						for(i=0;i<n;i++)
							s[i].display();
						break;
				case 3: cout<<"\nNo:of objects"<<student :: c;
						break;
				default : cout<<"\nInvalid";
			}
		cout<<"\nPress 1 to continue";
		cin>>f;
	}while(f==1);
	
}
