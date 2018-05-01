#include<iostream>
using namespace std;

int main()
{
    int minute, ore;

    cout<<endl<<"Ora in minute este "; cin>>minute;

    ore=minute/60;
    minute=minute%60;

    cout<<endl<<"Ora este "<<ore<<" ore si "<<minute<<" minute.";
}
