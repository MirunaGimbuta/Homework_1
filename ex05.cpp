#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, a, b, c;
    float e1, e2, e3;

    cout<<"x="; cin>>x;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;

    e1=(pow(x, 3)-1)/(x*(x-3)*(x-1));
    e2=(pow(a, 2)+pow(a+b, 3))/(a*pow(b, 2))+pow(a, 2)*b;
    e3=(4*(a/(b*c)+c)+pow(a*b, 2)+3*a/(b*c))/(2*pow(a, 3));

    cout<<endl<<"E1="<<e1<<endl<<"E2="<<e2<<endl<<"E3="<<e3;
}
