/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;
    
   int count=0;

   while(n>=100){
    n=n-100;
    count++;
   }
    
   while(n>=20){
    n=n-20;
    count++;
   }
   while(n>=10){
    n=n-10;
    count++;
   }
   while(n>=5){
    n=n-5;
    count++;
   }
   while(n>=1){
    n=n-1;
    count++;
   }
   cout<<count;

   cout<<endl;
    return 0;
}
