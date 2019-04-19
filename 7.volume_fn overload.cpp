#include<iostream>
using namespace std;
const float pi=3.14;
float v;
int volume ()		//volume of cube
{
	int l;
	cout<<"\nsize length\n";
	cin>>l;
	cout<<"\nVolume = "<<l*l*l;
	return 0;
}
float volume(float r)		//volume of sphere
{
	v=(4*pi*r*r*r)/3;
	return v;
}
float volume (float r, float h)		//volume of cylinder
{
	v=pi*r*r*h;
	return v;
}
float volume (float l, float b,float h)		//volume of box
{
	v=l*b*h;
	return v;
}
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
			case 1: volume();
					f++;
					break;
			case 2: cout<<"\nsize radius\n";
					cin>>n;
					cout<<"\nVolume = "<<volume(n);
					f++;
					break;
			case 3: cout<<"\nsize radius & height\n";
					cin>>n>>m;
					cout<<"\nVolume = "<<volume(n,m);
					f++;
					break;
			case 4: cout<<"\nsize length breadth & height\n";
					cin>>n>>m>>h;
					cout<<"\nVolume = "<<volume(n,m,h);
					f++;
					break;
			default: cout<<"Invalid";
		}
		cout<<"\nTo continue, press 1 : ";
		cin>>f;
	}while(f==1);
}

