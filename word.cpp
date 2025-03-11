/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
#include<bits/stdc++.h>
using namespace std;




int main(){
    
   string str;
   getline(cin,str);

   int upCount=0;
   int lowCount=0;

   for(auto &s:str){
    if(s>96)
        lowCount++;
    else
        upCount++;
   }

   if(upCount>lowCount)
       transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout<<str;

    cout<<"\n";
    return 0;
}
