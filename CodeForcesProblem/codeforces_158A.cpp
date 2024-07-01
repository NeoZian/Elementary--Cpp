#include<iostream>
using namespace std;

int main(){

    int n,k;
    int participants=0;

    cin>>n>>k;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int kth_score = arr[k-1];  //extracting kth place score

    for(int i=0;i<n;i++){


        if(arr[i]>=kth_score && arr[i]>0){

            participants++;
        }
    }

    cout<<participants<<endl;


return 0;
}
