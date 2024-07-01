#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    string s;

    int c=0;

    getline(cin, s);


    set<char>mset(begin(s), end(s));

    for (auto it=mset.begin(); it != mset.end(); ++it){
       // cout << ' ' << *it;
        if(*it>='a' && *it<='z'){
        c++;
    }


}

        cout<<c;

return 0;}
