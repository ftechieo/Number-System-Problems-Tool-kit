#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<string>
using namespace std;

int main() {
system("cls");
int num,i=0;
cout<<"Please Enter Any number to check wheather it is prime or not: ";
cin>>num;
if(num<=1){
   cout<<endl<<num<<" is not a prime number.";
}
else{ for( i=2; i<=num-1; i++){
    if(num%i==0) { i=num;  }
         else { i=i; }
  } 
    if(i==num){ cout<<endl<<num<<" is a prime number."; }
    else{ cout<<endl<<num<<" is not a prime number."; }
}
return 0;
}