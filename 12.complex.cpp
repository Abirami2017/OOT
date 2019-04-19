#include<iostream>
using namespace std;
class complex
{
	int r, i;
	public:
		complex()
		{
			r=0;
			i=0;
		}
		complex(int a,int b)
		{
			r=a;
			i=b;
		}
		void display()
		{
			cout<<"\n"<<r<<"+"<<i<<"i\n";
		}
		friend complex operator +(complex a, complex b);
};
complex operator +(complex a, complex b)	
{
	complex t;
	t.r=a.r+b.r;
	t.i=a.i+b.i;
	return t;
}
main()
{
	complex c1(5,6),c2(7,8),c3;
	c3=c1+c2;
	c1.display();
	c2.display();
	cout<<"\nSum = ";
	c3.display();
}
