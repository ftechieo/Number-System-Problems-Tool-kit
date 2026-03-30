#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string>
using namespace std;

int main() {
system("cls");
cout<<"Enter the two values to get the Fabonacci sequence: \n";
cout<<"Enter the first value: ";
int a, b,c;
cin>>a;
cout<<"Enter the second value: ";
cin>>b;
cout<<"The Fabonacci sequence is: \n";
cout<<a<<","<<b;
c=a+b;
for(int i=1;i<=10;i++){
     c=a+b;
     a=b;
     b=c;
     cout<<","<<c;
}
return 0;
}