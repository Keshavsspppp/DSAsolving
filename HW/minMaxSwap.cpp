// To write a program to swap the max and min number of an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int lar = INT_MIN;
    int small= INT_MAX;

    for(int i=0; i< size; i++){
        if(arr[i] > lar){
            lar = arr[i];
            int maxIndex = i;
        }
        if(arr[i]< small){
            small = arr[i];
            int minIdx = i;
        }
    }
    swap(lar,small);
    cout<<lar<<" "<<small<<endl;

    return 0;
}