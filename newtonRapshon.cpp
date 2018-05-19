#include<iostream>
#include<cmath>

using namespace std;

float f(float(x))// fuction goes here i.e. f(x)
{
       return (exp(-x)-x);
}

float g(float(x))// derivative  of f(x) goes here i.e. f'(x) 
{
       return (-exp(-x)-1);
}

int main()
{
       float a,b,d,i,n;
       cout<<"Enter the initial guess of root "<<endl;
       cin>>a;
       cout<<"Enter Iterations "<<endl;
       cin>>i;
       if(f(a) != 0.0)
       {
              for(n=1;n<=i;n++)
              {
                     b=a-(f(a)/g(a));
                     cout<<"b="<<b<<endl;
                     if(f(b)==0)
                     {
                           //cout<<"Root of the given equation is "<<b<<endl;
                     }
                     else
                     {
                           d=fabs((b-a)/b);
                           a=b;
                     }
              }
            //  cout<<"Root of the given equation is "<<b<<endl;
       }
       else
       {
              cout<<"Root of the given equation is "<<a<<endl;
       }
       return 0;
}
