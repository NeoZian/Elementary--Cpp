#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){

    long long int n,p;
    long double v;

    cin>>n;
    if(n%2==0){
        p = (n/2);
        cout<<p;
    }
    else{

        v = floor(((long double)n/2)*(-1));
        cout<<fixed;
        cout<<(long long int)v;
      //  v*=(-1);
     // cout<<fixed;
       // cout<<floor(v);
    }


return 0;
}
