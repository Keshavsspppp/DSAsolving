#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={2,3,4,5,6,74,8,9,0,11};
    int size = 10;
    int res = INT_MIN;

    for(int i =0 ; i< size ; i++){
        if(arr[i] > res){   
            res = arr[i];
        }
    }

    cout<<res<<endl;
    return 0;
}