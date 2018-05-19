#include<iostream>
using namespace std;
#define MAX 100000

double func(double x)
{
    return x*x*x - 3*x + 1; // function given i.e. f(x)
}

void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "Choose Different a and b"<<endl;
        return;
    }

    double c = a;

    for (int i=0; i < MAX; i++)
    {
    	cout<<"a="<<a<<"\t";
    	cout<<"b="<<b<<"\t";

        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
		cout<<"c="<<c<<"\t";
		cout<<"func(c)"<<func(c)<<endl;
        if (func(c)==0)
            break;


        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "Value of root is: " << c;
}

int main()
{

    double a =0, b = 1;
    regulaFalsi(a, b);
    return 0;
}
