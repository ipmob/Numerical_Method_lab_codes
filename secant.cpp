
#include<iostream>

using namespace std;

float f(float x)
{
return(x*x*x-20);
}
float secant()
{
int n;
float y=5.5,z=4,x,p;
cout<<"Enter number of iterations:";
cin>>n;
for(int i=0;i<n;i++)
{
 x=y-f(y)*((y-z)/(f(y)-f(z)));
p=((y-x)/x)*100;
cout<<x<<"\t\tError:"<<p<<endl;
z=y;
y=x;
}

cout<<"Answer:"<<x<<"\n";
return 0;
}
int main()
{
secant();
return 0;
}

