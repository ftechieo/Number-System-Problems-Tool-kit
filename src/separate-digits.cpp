#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string>
using namespace std;

int main() {
system("cls");
int a,b,c=0,d=100000;
cout<<"Enter the six digit Number to get its digits separately :  ";
cin>>a;
int i=0;
do
{    
     b=a/d;
     cout<<b;
     a=a%d;
     d=d/10;
     i++;
     cout<<",";
}
while(i<=5);

return 0;
}