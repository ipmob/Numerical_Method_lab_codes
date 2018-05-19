#include<bits/stdc++.h>
using namespace std;
float cal(float point,int n,float x[])
{
	float temp=1;
	for(int i=0;i<n;i++)
	{
		temp=temp*(point-x[i]);
	}
	return temp;
}
int main()
{
	int n;
	cout<<"no of inputs"<<endl;
	cin>>n;
	float x[n];
	float res=0;
	float y[n][n];
	cout<<"give input for x and y simultaneously"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i][0];
	}
	float point;
	cout<<"point for value"<<endl;
	cin>>point;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			y[j][i]=(y[j+1][i-1]-y[j][i-1])/(x[j+i]-x[j]);
		}
	}
	for (int i = 0; i < n; i++) 
	{
    	cout << setw(4) << x[i]<< "\t";
        for (int j = 0; j < n - i; j++)
        	{
            	cout << setw(4) << y[i][j]<< "\t";
        	}
		cout << endl;
    }
    res=y[0][0];
    for(int i=1;i<n;i++)
    {
    	res=res+cal(point,i,x)*y[0][i];
	}
	cout<<"result "<<res;
}
