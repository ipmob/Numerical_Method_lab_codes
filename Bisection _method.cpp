#include<iostream>
#include<math.h>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x*sin(x)-1;//Function goes here
}

// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
    	
	cout<<"a="<<a<<"\t";
	cout<<"b="<<b<<"\t";
        // Find middle point
        c = (a+b)/2;
        cout<<"c="<<c<<endl;

        // Check if middle point is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
    // Initial values assumed
    double a =1, b = 1.5;//change the initials points
    bisection(a, b);
    return 0;
}
