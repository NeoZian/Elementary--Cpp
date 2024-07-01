#include<iostream>
using namespace std;

int main(){

    long long row,col;

    cin>>row>>col;

    long long tight = row*(col-1);

    if(tight == 0){

        tight = row - 1;
    }

    cout<<tight;

return 0;
}
