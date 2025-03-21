/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int test;
    cin>>test;
    cin.ignore();

    while(test--){
        int n,k;
        cin>>n>>k;
        cin.ignore();
        int ops=0;

        if(n%2!=0){
            n=n-k;
            ops++;
        }
        k=k-1;

        ops += ceil(n / (k * 1.0));


        cout<<ops;
        cout<<endl; 
    }
    

    return 0;
}