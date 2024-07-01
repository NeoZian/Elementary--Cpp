#include<bits/stdc++.h>
using namespace std;

int main(){

    string st1,st2;
    cin>>st1>>st2;

    int len = st1.length();

    for(int i=0;i<len;i++){

        if(st1[i]>='A' && st1[i]<='Z'){

            st1[i] = st1[i]+32;

        }

         if(st2[i]>='A' && st2[i]<='Z'){

            st2[i] = st2[i]+32;

        }

    }

    if(st1<st2){

        cout<<-1;

    }
    else if(st1>st2){
        cout<<1;
    }
    else{
        cout<<0;
    }


return 0;
}
