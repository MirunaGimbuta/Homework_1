#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"n="; cin>>n;

    if((n/10)<(n%10))
    {
        cout<<endl<<"Cifre ordonate crescator.";
    }
    else
    {
        if(n/10>n%10)
        {
            cout<<endl<<"Cifre ordonate descrescator.";
        }
        else cout<<endl<<"Cifre egale.";
    }
}
