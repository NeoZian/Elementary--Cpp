#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n,m,k;

    cin>>t;
    int c1,c2;
    int cost;

   while(t>0){

      //  input:
        cin>>n>>m>>k;

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){


                if(i==m && j==n){
                       cout<<"i="<<i<<"j="<<j<<endl;

                    c1= i-1;
                    c2= j-1;
                    cout<<"after sub::i=c1="<<c1<<"j=c2="<<c2<<endl;
                    cost =  (c1*1)+(c2*2);
                    cout<<cost<<endl;
                            if(cost==k){

                                cout<<"YES"<<endl;
                            }
                            else{
                                cout<<"NO"<<endl;
                            }
                }

            }

            }

  t--;
        }

    return 0;

}
