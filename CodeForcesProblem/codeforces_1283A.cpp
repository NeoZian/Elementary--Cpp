#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    int h,m;
    int rem_h, rem_m;
    int ans;
    cin>>t;

    for(int i=0;i<t;i++){

        cin>>h>>m;

        rem_h = 24-h;
        rem_m = 60-m;

        if(m>0){
            rem_h--;
            ans = (rem_h*60) + rem_m;

        }
        else{

            ans = rem_h*60;

        }

        cout<<ans<<endl;

    }



return 0;
}
