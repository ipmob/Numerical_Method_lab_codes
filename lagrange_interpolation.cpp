#include<iostream>
using namespace std;
float a[10][2];// Set array size
float upper(float x,int l,int n)
{
	float y=1;
	for(int i=0;i<n;i++)
	{
		if(i!=l)
		{
			y=y*(x-a[i][0]);
		}	
	}
	return y;
}
float lower(int l,int n)
{
	float y=1;
	for(int i=0;i<n;i++)
	{
		if(i!=l)
		{
			y=y*(a[l][0]-a[i][0]);
		}
	}
	return y;
}
int main()
{
	int n;
	float x,res=0;
	cout<<"no of elements"<<endl;
	cin>>n;
	cout<<"enter x and y respectively"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
	}
	cout<<"input value of x junction"<<endl;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		float ratio=(upper(x,i,n)/lower(i,n));
		res=res+ratio*a[i][1];
	}
	cout<<"value at given x  "<<res<<endl;
}
