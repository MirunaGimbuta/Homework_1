#include<iostream>
using namespace std;

int main()
{
 int a, b, i=0, n;

 cout<<"a="; cin>>a;
 cout<<"b="; cin>>b;

 n=a;
 while(a<=n &&n<=b)
 {
     if(n%2==0)
     {
         i++;
     }
     n++;
 }

 cout<<endl<<"In intervalul ["<<a<<","<<b<<"] sunt "<<i<<" numere pare";
}
