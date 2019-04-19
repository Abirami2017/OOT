#include<iostream>
using namespace std;
main()
{
	float a,b,f=1;
	int c;
	cout<<"Enter the numbers";
	cin>>a>>b;
	do
	{
		cout<<"Enter the choice\n\t 1.Add\n\t 2.Substract\n\t 3. Multiply\n\t 4.Divide\n";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"Sum ="<<a+b<<"\n";
					f++;
					break;
			case 2: cout<<"Difference ="<<a-b<<"\n";
					f++;
					break;
			case 3: cout<<"Product ="<<a*b<<"\n";
					f++;
					break;
			case 4: cout<<"Quiotent ="<<a/b<<"\n";
					f++;
					break;
			default : cout<<"Invalid\n";
		}
		cout<<"Do you wnt to continue, if yes press 1 :";
		cin>>f;
	}while(f==1);
}
