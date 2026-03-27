#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<string>
using namespace std;

int main() {
system("cls");
cout<<"Enter any Number to get the prime numbers from 1 to that number: ";
int num,i=0,j=0;
cin>>num;
if(num<=1){
   cout<<endl<<"There are no prime numbers between 1 and "<<num<<".";
   cout<<endl<<"Please enter a number greater than 1.";
}   
for(i=2; i<=num; i++){
    for(j=2; j<=i-1; j++){
        if(i%j==0){ j=i; }
        else{ j=j; }
    }
   if(j==i){ cout<<endl<<i<<" is a prime number."; }
}
return 0;
}