#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x;
    float rezultat;

    cout<<endl<<"x=";cin>>x;

    rezultat= sqrt(sqrt(sqrt(pow(x, 2)-1)));

    cout<<endl<<rezultat;
}
