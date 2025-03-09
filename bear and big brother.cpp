/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h>
using namespace std;



//main function
int main(){
    int m,n;

    cin>>m>>n;

    if(m>n)
        cout<<0;
    if(m==n)
        cout<<1;
    else{
        int year=0;
        while(m<=n){
            m=m*3;
            n=n*2;
            year++;
        }
        cout<<year;
    }


    return 0;
}
