#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, x, y;

    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    cout<<"d=";cin>>d;

    if(a<=c)
    {
        if(c<=b)
        {
            x=c;
            if (b<=d) y=b;
                else y=d;
        }
            else cout<<endl<<"Intervalele nu se intersecteaza";
    }
        else
        {
            if(a<=d)
            {
                x=a;
                if(d<=b) y=d;
                    else y=b;
            }
                else cout<<endl<<"Intervalele nnu se intersecteaza.";
        }

    cout<<endl<<"Intersectia intervalelor este intervalul ["<<x<<","<<y<<"].";
}
