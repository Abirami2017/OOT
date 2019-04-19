#include<iostream>
using namespace std;
main()
{
	int n,m,p,q,i,j;
	cout<<"Enter the no:of row & column :\n";
	cin>>n>>m;
	cout<<"Enter the no:of row & column :\n";
	cin>>p>>q;
	int a[n][m],b[p][q];
	if(m==p)
	{
		cout<<"Enter the 1st matrix";  //1st matrix input
		for(i=0;i<n;i++)  
		{
			for(j=0;j<m;j++)
				cin>>a[i][j];
		}
		cout<<"Enter the 2nd matrix";  //2nd matrix input
		for(i=0;i<p;i++)  
		{
			for(j=0;j<q;j++)
				cin>>b[i][j];
		}	
	}
	else
		cout<<"Invalid";
	int c[10][10]={0},k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
				c[i][j]+=a[i][j]*b[k][j]; 
		}
	}
	cout<<"Product =\n"; //3rd Matrix output
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<" "<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
