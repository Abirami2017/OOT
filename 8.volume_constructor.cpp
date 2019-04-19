#include<iostream>
using namespace std;
const float pi=3.14;
class volume
{
	public:
	volume(int l)		//volume of cube
	{
		cout<<"\nVolume = "<<l*l*l;
	}
	volume(float r)		//volume of sphere
	{
		cout<<"\nVolume = "<<(4*pi*r*r*r)/3;
	}
	volume (float r, float h)		//volume of cylinder
	{
		cout<<"\nVolume = "<<pi*r*r*h;
	}
	volume (float l, float b,float h)		//volume of box
	{
		cout<<"\nVolume = "<<l*b*h;
	}	
};

main()
{
	float f,n,m,h;
	int c;
	do
	{
		cout<<"Choose:\n\t1.Cube\n\t2.Sphere\n\t3.Cylinder\n\t4.Rectangular box\n";
		cin>>c;
		switch(c)
		{
			case 1:	
				{
					int l;
					cout<<"\nsize length\n";
					cin>>l;
					volume o(l);
					f++;
					break;
				} 
			case 2: 
				{
					cout<<"\nsize radius\n";
					cin>>n;
					volume o(n);
					f++;
					break;
				}
			case 3: 
				{
					cout<<"\nsize radius & height\n";
					cin>>n>>m;
					volume o(n,m);
					f++;
					break;
				}
			case 4: 
				{
					cout<<"\nsize length breadth & height\n";
					cin>>n>>m>>h;
					volume o(n,m,h);
					f++;
					break;	
				}
			default: cout<<"Invalid";
		}
		cout<<"\nTo continue, press 1 : ";
		cin>>f;
	}while(f==1);
}

