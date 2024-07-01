#include<bits/stdc++.h>
using namespace std;


int main(){

int i;
    string s;

    cout<<"s = ";
    cin>>s;
    int total=0;

   // int I=1, V=5, X=10, L=50, C=100, D=500, M=1000;

    for(int i=s.length()-1;i>=0;i--){

        if(s[i]=='I'){

                if(s[i-1]<s[i]){
                    total -= 1;
                }
                else{
                    total+=1;
                }

        }
        else if(s[i]=='V'){

                if(s[i-1]<s[i]){
                    total-=5;
                }
                else{
                    total+=5;
                }


        }
        else if(s[i]=='X'){

                if(s[i-1]<s[i]){
                    total-=10;
                }
                else{
                    total+=10;
                }


        }
        else if(s[i]=='L'){

                if(s[i-1]<s[i]){
                    total-=50;
                }
                else{
                    total+=50;
                }


        }
        else if(s[i]=='C'){

                if(s[i-1]<s[i]){
                    total-=100;
                }
                else{
                    total+=100;
                }


        }
        else if(s[i]=='D'){

                if(s[i-1]<s[i]){
                    total-=500;
                }
                else{
                    total+=500;
                }


        }
        else if(s[i]=='M'){

                if(s[i-1]<s[i]){
                    total-=1000;
                }
                else{
                    total+=1000;
                }

            //total+=1000;
        }

    }

cout<<total;







}
