#include<iostream>
using namespace std;

int main()
{
    char c;

    cout<<"c="; cin>>c;

    if ('a'<=c && c<='z') cout<<"Litera mica.";
    if ('A'<=c && c<='Z') cout<<"Litera mare.";
}
