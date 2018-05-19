#include<iostream>
using namespace std;
void truncate(float a[],int n){
   for (int i=0;i<n;i++){
    cout<<a[i];
   }
}

int main(){
float k,a[50],n;
//cout<<"your number is:\n"<<"1.integer\n"<<"2.decimal"
cout<<"enter the no. of digits in your number:";
cin>>k;
cout<<"enter the array of numbers:";
for(int i=0;i<k;i++){
cin>>a[i];
}
cout<<"enter the no. of significant digits you want to truncate to:";
cin>>n;
truncate(a,n);
return 0;
}

