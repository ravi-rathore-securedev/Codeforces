/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/

#include<bits/stdc++.h>
using namespace std;



//main function
int main(){
    string str;
    getline(cin,str);

    char first = str[0];

    if(first<97)
        cout<<str;
    else{
        str[0]=first-32;
        cout<<str;
    }


    return 0;
}
