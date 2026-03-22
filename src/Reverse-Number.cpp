#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<string>
using namespace std;

int main() {
system("cls");
long a,a_d=0,b=0,i,c=0,d=1,rev=0;
cout<<"Enter any number to get its reverse : ";
cin>>a;
a_d=a;
for(i=0;a_d>0;i++){
     b=a_d%10;
     a_d=a_d/10;
}
    for(int j=1;j<i;j++){
     d=d*10;
    }
        for(int k=0;k<i;k++){
        c=a%10;
        rev=rev+(c*d);
        a=a/10;
        d=d/10;
        }
cout<<endl<<"The Typed number has "<<i<<" digits.";
cout<<endl<<"The reverse of Typed number is : "<<rev;
return 0;
}