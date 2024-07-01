#include<iostream>
using namespace std;

int main(){

    int k,r,m;
    int total;

    cin>>k>>r;
    int bol = 0;

    for(int i=1;bol!=1;i++){

        m=i;
        total = m*k;
        if(total%10==r || total%10==0){

            bol = 1;
        }

    }

    cout<<m;

return 0;}
