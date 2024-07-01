#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    int x=0;

    for(int m=0;m<n;m++){

        cin>>s;

        if(s[1]=='+'){

            ++x;

        }
        else{

            --x;
        }


        /*
        if(s=="x++"){
            x++;
        }
        else if(s=="x--"){
            x--;
        }
         else if(s=="++x"){
            ++x;
        }
         else if(s=="--x"){
            --x;
        }
         it is ok!!! */

    }

    cout<<x<<endl;


 return 0;
}
