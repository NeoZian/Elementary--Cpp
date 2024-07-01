#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    int n,k;
    int v;

    set<long long int>s;

    cin>>t;

    for(int i=0;i<t;i++){

        cin>>n>>k;

        for(int j=0;j<n;j++){

            cin>>v;
            s.insert(v);


        }


    }
    int tm=1;
    int total=0;

    for(auto it=s.begin();it!=s.end();it++){

        if(tm<=k && *it>=1){

            total+=*it;
            tm++;
        }
       // cout<<"  "<<*it<<"total="<<total;
    }

        cout<<"total="<<total;



return 0;}
