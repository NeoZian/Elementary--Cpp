#include<iostream>
using namespace std;

int main(){

    int arr[5][5];
    int val_i, val_j;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

            cin>>arr[i][j];
            if(arr[i][j]==1){
                val_i = i;
                val_j = j;
            }
        }
    }


    val_i++;
    val_j++;
/*
    int t1,t2;
    cout<<"val i = "<<val_i<<endl;
    t1 = abs(3-val_i);

    cout<<"abs(3-val_i)"<<t1<<endl;

    cout<<"val j = "<<val_j<<endl;

    t2 = abs(3-val_j);
    cout<<t2<<endl;

    */


    int res = abs(3-val_i)+abs(3-val_j);

     cout<<res;


return 0;

}
