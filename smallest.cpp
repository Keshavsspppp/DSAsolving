#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,2,3,4 , -22};
    int res = INT_MAX;

    // using loop checking if it contains the shortest number
    for(int i =0; i< sizeof(arr)/sizeof(int) ; i++){
        if(arr[i] < res){
            res = arr[i];
        }
    }
    cout<<res<<endl;
    return 0;
}