#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string>
using namespace std;

int main() {
system("cls");
int a,b,c,d,e=0,f=0;
cout<<"Enter the four values for checking equation Equality : ";
cout<<endl<<"Enter theh 1st value : ";
cin>>a;
cout<<endl<<"Enter theh 2nd value : ";
cin>>b;
cout<<endl<<"Enter theh 3rd value : ";
cin>>c;
cout<<endl<<"Enter theh 4th value : ";
cin>>d;
e=(a/b)+(c/d);       // Here, I use c++ operator precedence 
f=((a*d)+(b*c))/(b*d);
if(e==f)
{cout<<"Inputed valuse satisfied the given Equation. ";}
else
{cout<<"Inputed values does not satisfied teh given Equation. ";}
return 0;
}