// To write a program to calculate the sum and product of all numbers on arrray

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int prod  = 1;
    int size = 10;

    for(int i = 0 ; i < size ; i++){
        sum +=arr[i];
    }

    for(int i = 0 ; i < size ; i++){
        prod *=arr[i];
    }

    cout<<"Total sum of the array is "<<sum<<endl;
    cout<<"Total product of the array is "<<prod<<endl;
    return 0;
}