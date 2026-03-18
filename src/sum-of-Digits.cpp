#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string>
using namespace std;

int main() {
system("cls");
int a,b,sum=0;
cout<<"Please Enter Any Number to get the sum of its digits :";
cin>>a;
for(sum ;a>0;sum=sum+b)
{    b=a%10;
     a=a/10;
    
}
   sum = sum+a;
cout<<"\n The Sum of your Typed Number digits is :"<<sum<<endl;
return 0;
}